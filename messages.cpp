#include <iostream>
#include <chrono>
#include <thread>
#include "messages.h"

void mainMenuExitOption(){
    std::cout << "**********************************************************" << std::endl;
    std::cout << "*                                                        *" << std::endl;
    std::cout << "*                    LA REVEDERE !!!                     *" << std::endl;
    std::cout << "*                                                        *" << std::endl;
    std::cout << "**********************************************************" << std::endl;

    std::chrono::seconds duration(2);
    std::this_thread::sleep_for(duration);
}