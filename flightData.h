#ifndef PROCESSING_USER_DEFINED_DATA_FLIGHTDATA_H
#define PROCESSING_USER_DEFINED_DATA_FLIGHTDATA_H

#include <string>

struct FlightData{
    std::string flightNumber;
    std::string departureCity;
    std::string arrivalCity;
    int departureHour;
    int departureMinute;
    int arrivalHour;
    int arrivalMinute;
};

#endif //PROCESSING_USER_DEFINED_DATA_FLIGHTDATA_H
