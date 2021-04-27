//Jacob Jakiemiec
//CS372 Software Construction
//RideHandler.cpp

#include "RideHandler.hpp"

void RideHandler::setNext(unique_ptr<RideHandler>  && handler) {
	_next = move(handler);
}


void AgeHandler::handle(const Riders & riders) {
	if (riders.getAgeOfLowestRider() < _minimumAge) {
		cout << "You cannot ride, someone does not meet the age requirement." << endl;
	}
	else if (_next != NULL) {
		_next->handle(riders);
	}
	else {
		cout << "You are eligible to ride." << endl;
	}
}

void HeightHandler::handle(const Riders& riders) {
	if (riders.getHeightOfTallestRider() > _maximumHeight) {
		cout << "You cannot ride, someone is too tall for the ride." << endl;
	}
	else if (_next != NULL) {
		_next->handle(riders);
	}
	else {
		cout << "You are eligible to ride." << endl;
	}
}

void NumberOfRidersHandler::handle(const Riders& riders) {
	if (riders.getNumberOfRiders() > _maximumNumberOfRiders) {
		cout << "You cannot ride, you have too many people." << endl;
	}
	else if (_next != NULL) {
		_next->handle(riders);
	}
	else if (riders.getNumberOfRiders() < _maximumNumberOfRiders) {
		cout << "You are eligible to ride, lets get you paired up with some extra people." << endl;
	}
	else {
		cout << "You are eligible to ride." << endl;
	}
}