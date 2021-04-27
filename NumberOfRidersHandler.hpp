//Jacob Jakiemiec
//CS372 Software Construction
//NumberOfRidersHandler.hpp

#include "ConcreteHandler.hpp"

#ifndef NUMBERHANDLER_HPP
#define NUMBERHANDLER_HPP

class NumberOfRidersHandler : public ConcreteRideHandler {
public:
	NumberOfRidersHandler() = delete;
	NumberOfRidersHandler(int maxNumberOfRiders) : _maximumNumberOfRiders(maxNumberOfRiders) {};
	void handle(const Riders& riders) override;
private:
	int _maximumNumberOfRiders;
};

#endif