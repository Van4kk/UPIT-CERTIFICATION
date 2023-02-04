#ifndef PROCESSING_USER_DEFINED_DATA_FLIGHT_H
#define PROCESSING_USER_DEFINED_DATA_FLIGHT_H

#include <string>
#include <utility>
#include <vector>

void flights();

const int MAX_FLIGHTS = 100;

struct Flight {
    std::string flightNumber;
    std::string departureCity;
    std::string arrivalCity;
    std::string departureDate;
    std::string departureTime;
    std::string arrivalDate;
    std::string arrivalTime;
    unsigned int availableSeats;

    Flight(std::string flightNumber, std::string departureCity,
           std::string arrivalCity, std::string departureTime,
           std::string arrivalTime, unsigned int availableSeats)
            : flightNumber(std::move(flightNumber)), departureCity(std::move(departureCity)),
              arrivalCity(std::move(arrivalCity)), departureTime(std::move(departureTime)),
              arrivalTime(std::move(arrivalTime)), availableSeats(availableSeats) {}
};

void addFlight(Flight &flight, std::fstream &file);

void displayFlight(Flight flight);

void displayFlights(const std::vector<Flight> &flights);

void reserveSeat(std::string flightNumber);

void saveFlights();

void loadFlights();

void saveFlightDataToFile();

void loadFlightDataFromFile();

void displayFlightData();

void searchFlight(const std::vector<Flight> &flights);
#endif //PROCESSING_USER_DEFINED_DATA_FLIGHT_H
