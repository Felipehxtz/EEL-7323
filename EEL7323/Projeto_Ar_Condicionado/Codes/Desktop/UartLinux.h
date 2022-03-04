/************************************************************
 * File RobotLinux.h - Header for RobotLinux class
 *
 * This class has the implementation for virtual
 * methods from Robot.h (and Robot.cpp)
 *
 * Project: Fischer Arm
 *
 * Author: Eduardo Augusto Bezerra
 * Date: 04/04/2003
 * 
 * Last change: Eduardo Augusto Bezerra
 * Date: 26/04/2003
 * 
 * Methods for controlling the robot in C++ under linux
 * This code has been tested on linux Red Hat 8.0
 *
 *************************************************************/

#include "Uart.cpp"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>
#include <iostream>
#include <string.h>
using namespace std;

/************************************************************
 * Class RobotLinux
 * C++ header for the serial interface methods used to
 * control FischerTechnik robots under linux O.S.
 *************************************************************/
class UartLinux : public Uart {
   private:
      //char serial[11];           // serial port name (e.g. /dev/ttyS0, ...)
      int  fd;                   // handle to serial port (fd == -1, error!)
   //
   public:
      //
      UartLinux(void);           // RobotLinux.cpp
      ~UartLinux(void);          // RobotLinux.cpp
      //
      char sendCommand();    // RobotLinux.cpp
      void openSerial(int ser);            // RobotLinux.cpp
};
