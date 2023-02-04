cmake_minimum_required(VERSION 3.21)
project(processing_user_defined_data)

set(CMAKE_CXX_STANDARD 14)

add_executable(processing_user_defined_data main.cpp flight.h flight.cpp cars.h cars.cpp students.cpp students.h messages.cpp messages.h menus/mainMenu.cpp menus/mainMenu.h library.cpp library.h errors/errorMessages.cpp errors/errorMessages.h success/successMessages.cpp success/successMessages.h flightData.cpp flightData.h flightsDatabase.cpp flightsDatabase.h errors/fightsErrorMessages.cpp errors/fightsErrorMessages.h errors/carsErrorMessages.cpp errors/carsErrorMessages.h)

set(CMAKE_PROJECT_AUTHOR "Cucu Ionut - Nicu")