#include "Fila.cpp"
#include "ClockCalendar.cpp"
#include "Convert_to_str.cpp"
#include "TempSense.cpp"
#include <iostream>
#include <string>
#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/uart.h"

/// \tag::hello_uart[]

#define UART_ID uart0
#define BAUD_RATE 9600

// We are using pins 0 and 1, but see the GPIO function select table in the
// datasheet for information on which other pins can be used.
#define UART_TX_PIN 0
#define UART_RX_PIN 1
//UTILIZADO PARA TESTAR A IMPLEMENTAÇÃO DA FILA. PODE SER USADO PARA TESTAR A LISTA
int main(){

    // Set up our UART with the required speed.
    stdio_init_all();
    uart_init(UART_ID, BAUD_RATE);

    // Set the TX and RX pins by using the function select on the GPIO
    // Set datasheet for more information on function select
    gpio_set_function(UART_TX_PIN, GPIO_FUNC_UART);
    gpio_set_function(UART_RX_PIN, GPIO_FUNC_UART);

    
    Fila fila;
    int d,m,y,h,mi,s,val_valid;
    ClockCalendar test;
    Convert_to_str conv;
    TempSense Temp;
    float temp_atual, last_temp;
    string ID = "0001";
    string fullHour, fullDate;
    test.setClockCalendar(1,1,2022,23,59,0);
    last_temp = Temp.getTemperature();
    gpio_init(25);
    gpio_set_dir(25, GPIO_IN);

    while(true){
         temp_atual = Temp.getTemperature();
        if( last_temp != temp_atual || gpio_get(25)!= 0){// temperatura atual diferente da medida anteriormente OU botão pressionado?
            temp_atual = Temp.getTemperature();
            test.getClock(h,mi,s);
            test.getCalendar(d,m,y);
            conv.conv_to_str(h,mi,s,d,m,y);
            fullDate = conv.getStringDate();
            fullHour = conv.getStringHour();
            fila.insertAfterLast(ID, fullDate, fullHour);
            //Enviar parâmetros para Tensorflow Lite
            //Enviar parâmetros para o ar condicionado
        }

        
        val_valid = fila.readFirstID();//Lê o ID do primeiro nodo
        if(/*porta UART conectada*/){
            while(val_valid != ""){// envia e esvazia a fila até ficar vazia
                uart_puts(UART_ID, fila.readFirstID());
                uart_puts(UART_ID, fila.readFirstDate());
                uart_puts(UART_ID, fila.readFirstHOur());
                fila.removeFirst();
                val_valid = fila.readFirstID();
                
            }
        }
    
    
    }
return 0;
}