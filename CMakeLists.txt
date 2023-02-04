cmake_minimum_required(VERSION 3.21)
project(processing_user_defined_data)

set(CMAKE_CXX_STANDARD 14)

add_executable(processing_user_defined_data src/main.cpp src/flight.h src/flight.cpp src/cars.h src/cars.cpp src/students.cpp src/students.h src/messages.cpp src/messages.h src/menus/mainMenu.cpp src/menus/mainMenu.h src/library.cpp src/library.h src/errors/errorMessages.cpp src/errors/errorMessages.h src/success/successMessages.cpp src/success/successMessages.h src/flightData.cpp src/flightData.h src/flightsDatabase.cpp src/flightsDatabase.h src/errors/fightsErrorMessages.cpp src/errors/fightsErrorMessages.h src/errors/carsErrorMessages.cpp src/errors/carsErrorMessages.h)

set(CMAKE_PROJECT_AUTHOR "Cucu Ionut - Nicu")