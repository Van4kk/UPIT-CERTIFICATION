cmake_minimum_required(VERSION 3.21)
project(processing_user_defined_data)

set(CMAKE_CXX_STANDARD 14)

add_executable(processing_user_defined_data main.cpp flight.h flight.cpp cars.h cars.cpp students.cpp students.h messages.cpp messages.h mainMenu.cpp mainMenu.h library.cpp library.h errorMessages.cpp errorMessages.h successMessages.cpp successMessages.h flightData.cpp flightData.h flightsDatabase.cpp flightsDatabase.h fightsErrorMessage.cpp fightsErrorMessage.h carsErrorMessages.cpp carsErrorMessages.h)

set(CMAKE_PROJECT_AUTHOR "Cucu Ionut - Nicu")