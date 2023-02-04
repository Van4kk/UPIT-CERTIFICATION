#include <iostream>
#include "menus/mainMenu.h"
#include "messages.h"
#include "errors/errorMessages.h"
#include "flights/flight.h"
#include "cars/cars.h"
#include "students/students.h"
#include "library/library.h"

int main() {
    int choice;

    //Main Menu
    mainMenu();

    //User's choice
    std::cin >> choice;

    switch (choice) {
        case 1:
            flights();
            break;
        case 2:
            cars();
            break;
        case 3:
            students();
            break;
        case 4:
            library();
            break;
        case 5:
            mainMenuExitOption();
            return 0;
        default:
            mainMenuInvalidOptionError();
            break;
    }
}





//#include <iostream>
//#include <string>
//
//const int MAX_FLIGHTS = 100;
//
//struct Flight {
//    std::string flightNumber;
//    std::string departureCity;
//    std::string arrivalCity;
//    std::string departureTime;
//    std::string arrivalTime;
//    int seatsAvailable;
//};
//
//Flight flights_errors[MAX_FLIGHTS];
//int numFlights = 0;
//
//void displayFlight(const Flight& flight) {
//    std::cout << "Flight Number: " << flight.flightNumber << std::endl;
//    std::cout << "Departure City: " << flight.departureCity << std::endl;
//    std::cout << "Arrival City: " << flight.arrivalCity << std::endl;
//    std::cout << "Departure Time: " << flight.departureTime << std::endl;
//    std::cout << "Arrival Time: " << flight.arrivalTime << std::endl;
//    std::cout << "Seats Available: " << flight.seatsAvailable << std::endl;
//}
//
//void displayFlights() {
//    for (int i = 0; i < numFlights; i++) {
//        displayFlight(flights_errors[i]);
//        std::cout << std::endl;
//    }
//}
//
//void addFlight() {
//    if (numFlights == MAX_FLIGHTS) {
//        std::cout << "Cannot add any more flights_errors. Maximum limit reached." << std::endl;
//        return;
//    }
//
//    Flight flight;
//    std::cout << "Enter Flight Number: ";
//    std::cin >> flight.flightNumber;
//    std::cout << "Enter Departure City: ";
//    std::cin >> flight.departureCity;
//    std::cout << "Enter Arrival City: ";
//    std::cin >> flight.arrivalCity;
//    std::cout << "Enter Departure Time: ";
//    std::cin >> flight.departureTime;
//    std::cout << "Enter Arrival Time: ";
//    std::cin >> flight.arrivalTime;
//    std::cout << "Enter Seats Available: ";
//    std::cin >> flight.seatsAvailable;
//
//    flights_errors[numFlights++] = flight;
//}
//
//void reserveSeat(const std::string& flightNumber) {
//    for (int i = 0; i < numFlights; i++) {
//        if (flights_errors[i].flightNumber == flightNumber) {
//            if (flights_errors[i].seatsAvailable > 0) {
//                flights_errors[i].seatsAvailable--;
//                std::cout << "Seat reserved successfully." << std::endl;
//                return;
//            } else {
//                std::cout << "No seats available for this flight." << std::endl;
//                return;
//            }
//        }
//    }
//
//    std::cout << "Flight not found." << std::endl;
//}
//std::string flightNumber;
//int main() {
//    int choice;
//
//    while (true) {
//        std::cout << "1. Display Flights" << std::endl;
//        std::cout << "2. Add Flight" << std::endl;
//        std::cout << "3. Reserve Seat" << std::endl;
//        std::cout << "4. Quit" << std::endl;
//        std::cout << "Enter your choice: ";
//        std::cin >> choice;
//
//        switch (choice) {
//            case 1:
//                displayFlights();
//                break;
//            case 2:
//                addFlight();
//                break;
//            case 3:
//                std::cout << "Enter Flight Number: ";
//                std::cin >> flightNumber;
//                reserveSeat(flightNumber);
//                break;
//            case 4:
//                return 0;
//            default:
//                std::cout << "Invalid choice." << std::endl;
//                break;
//        }
//    }
//}
