//Jacob Jakiemiec
//CS372 Software Construction
//AgeHandler.hpp

#include "ConcreteHandler.hpp"

#ifndef AGEHANDLER_HPP
#define AGEHANDLER_HPP

class AgeHandler : public ConcreteRideHandler {
public:
	AgeHandler() = delete;
	AgeHandler(int minimumAge) : _minimumAge(minimumAge) {};
	void handle(const Riders& riders) override;
private:
	int _minimumAge;
};

#endif