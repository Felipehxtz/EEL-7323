/*
 * Autor: Eduardo Augusto Bezerra
 * Instituicao: UFSC
 * Data: 18/11/2021
 * Arquivo: Clock.cpp
 * Descricao: Classe Clock a ser usada no exemplo ClockCalendar (heranca multipla)
 *
 * Compilado no Linux Ubuntu 20.04.3 LTS
 *
 * Linha de comando: g++ -o xxx xxx.cpp
 *
 */


class Clock { 
      protected: 
            int hr, min, sec; 
            bool isPm;
      public: 
            Clock (int h, int s, int m, bool pm); 
            void setClock (int h, int s, int m, bool pm); 
            void readClock (int& h, int& s, int& m, bool& pm); 
            void advance (); 
};

Clock::Clock (int h, int s, int m, bool pm){
      hr = h;
      min = m;
      sec = s;
      isPm = pm;
}

void Clock::setClock (int h, int s, int m, bool pm){
      hr = h;
      min = m;
      sec = s;
      isPm = pm;
}

void Clock::readClock (int& h, int& s, int& m, bool& pm){
      h = hr;
      s = sec;
      m = min;
      pm = isPm;
}

void Clock::advance (){
      sec++;
      if (sec >= 60){
            sec = 0;
            min++;
            if (min >= 60){
                  min = 0;
                  hr++;
                  if (hr >= 13)
                        hr = 1;         // hr = 01:00 PM
                  else
                        if (hr >= 12){
                           if (isPm)   // passou da meia-noite?
                              hr = 0;  // hr = 00:00 AM
                           isPm = !isPm;  // muda para AM ou PM, dependendo do horario
                        }

             }
      }
}







