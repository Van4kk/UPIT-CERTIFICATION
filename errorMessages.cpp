#include <iostream>
#include "errorMessages.h"

void mainMenuInvalidOptionError(){
    std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << "!                                                        !" << std::endl;
    std::cout << "!    Optiune nevalida. Va rugam sa incercati din nou.    !" << std::endl;
    std::cout << "!                                                        !" << std::endl;
    std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
}

void flightsLimitReachedError(){
    std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    std::cout << "!                                                        !" << std::endl;
    std::cout << "!            Nu se pot adauga mai multe zboruri.         !" << std::endl;
    std::cout << "!                                                        !" << std::endl;
    std::cout << "!                Limita maxima a fost atinsa.            !" << std::endl;
    std::cout << "!                                                        !" << std::endl;
    std::cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
}