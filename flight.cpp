#include "flight.h"
#include <iostream>
#include <fstream>

void flights(){
    std::cout << "Starting for FLIGHTS 1..." << std::endl;
}

void addFlight(Flight &flight, std::fstream &file) {
    file.open("flights.txt", std::ios::out | std::ios::app);
    if (file.is_open()) {
        file << flight.flightNumber << ","
             << flight.departureCity << ","
             << flight.arrivalCity << ","
             << flight.departureTime << ","
             << flight.arrivalTime << std::endl;
        std::cout << "Flight added successfully" << std::endl;
    } else {
        std::cout << "Error opening file" << std::endl;
    }
    file.close();
}

void viewFlights(std::fstream &file) {
    file.open("flights.txt", std::ios::in);
    if (file.is_open()) {
        std::string line;
        std::cout << "Flight Number,Departure City,Arrival City,Departure Time,Arrival Time" << std::endl;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
    } else {
        std::cout << "Error opening file" << std::endl;
    }
    file.close();
}
