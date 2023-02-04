cmake_minimum_required(VERSION 3.21)
project(processing_user_defined_data)

set(CMAKE_CXX_STANDARD 14)

add_executable(processing_user_defined_data src/main.cpp src/flights/flight.h src/flights/flight.cpp src/cars/cars.h src/cars/cars.cpp src/students/students.cpp src/students/students.h src/messages.cpp src/messages.h src/menus/mainMenu.cpp src/menus/mainMenu.h src/library/library.cpp src/library/library.h src/errors/errorMessages.cpp src/errors/errorMessages.h src/success/successMessages.cpp src/success/successMessages.h src/flights/flightData.cpp src/flights/flightData.h src/flights/flightsDatabase.cpp src/flights/flightsDatabase.h src/errors/flights_errors/fightsErrorMessages.cpp src/errors/flights_errors/fightsErrorMessages.h src/errors/cars_errors/carsErrorMessages.cpp src/errors/cars_errors/carsErrorMessages.h)

set(CMAKE_PROJECT_AUTHOR "Cucu Ionut - Nicu")