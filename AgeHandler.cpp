//Jacob Jakiemiec
//CS372 Software Construction
//AgeHandler.cpp

#include "AgeHandler.hpp"

void AgeHandler::handle(const Riders& riders) {
	if (riders.getAgeOfLowestRider() < _minimumAge) {
		cout << "You cannot ride, someone does not meet the age requirement." << endl;
	}
	else if (_next != nullptr) {
		_next->handle(riders);
	}
	else {
		cout << "You are eligible to ride." << endl;
	}
}