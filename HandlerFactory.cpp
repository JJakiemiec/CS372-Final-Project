//Jacob Jakiemiec
//CS372 Software Construction
//HandlerFactory.cpp





#include "HandlerFactory.hpp"

shared_ptr<AgeHandler> makeAgeHandler(int minimumAge) {
	return make_shared<AgeHandler>(minimumAge);
}

shared_ptr<HeightHandler> makeHeightHandler(int maximumHeight) {
	return make_shared<HeightHandler>(maximumHeight);
}

shared_ptr< NumberOfRidersHandler> makeNumberOfRidersHandler(int maximumNumberOfRiders) {
	return make_shared<NumberOfRidersHandler>(maximumNumberOfRiders);
}
