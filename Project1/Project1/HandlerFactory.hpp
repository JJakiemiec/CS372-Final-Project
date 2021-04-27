//Jacob Jakiemiec
//CS372 Software Construction
//HandlerFactory.hpp

//this header file will store the simple factory function for each of the concrete handlers
#ifndef HANDLERFACTORY_HPP
#define HANDLERFACTORY_HPP

#include "RideHandler.hpp"

unique_ptr<AgeHandler> makeAgeHandler(int minimumAge);
unique_ptr<HeightHandler> makeHeightHandler(int maximumHeight);
unique_ptr<NumberOfRidersHandler> makeNumberOfRidersHandler(int maximumNumberOfRiders);

#endif