//Jacob Jakiemiec
//CS372 Software Construction
//HandlerFactory.hpp


#ifndef HANDLERFACTORY_HPP
#define HANDLERFACTORY_HPP

#include "AgeHandler.hpp"
#include "HeightHandler.hpp"
#include "NumberOfRidersHandler.hpp"

shared_ptr<AgeHandler> makeAgeHandler(int minimumAge);
shared_ptr<HeightHandler> makeHeightHandler(int maximumHeight);
shared_ptr<NumberOfRidersHandler> makeNumberOfRidersHandler(int maximumNumberOfRiders);

#endif