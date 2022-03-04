#include <stdio.h>
using namespace std;

class Uart {
   //
   private:
      //
   protected:
      //
      char motorWord;     // word to be sent to robot
   public:
      //
      virtual char sendCommand() = 0;
      virtual void openSerial(int ser) = 0;
      //
      //void setMotor(char cmd);            // Robot.cpp
      //
      //void motorsOff();                   // Robot.cpp
      //
};