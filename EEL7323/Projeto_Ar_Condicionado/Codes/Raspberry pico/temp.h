#include <stdio.h>
#include <iostream>
class Temperature:{// classe abstrata para permitir utilizar qualquer sensor de temperatura ou modificações para se obter por outros metodos(por ex. online)
    public:
        virtual float getTemperature() = 0;
};