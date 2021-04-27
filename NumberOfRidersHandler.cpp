//Jacob Jakiemiec
//CS372 Software Construction
//NumberOfRidersHandler.cpp

#include "NumberOfRidersHandler.hpp"

void NumberOfRidersHandler::handle(const Riders& riders) {
	if (riders.getNumberOfRiders() > _maximumNumberOfRiders) {
		cout << "You cannot ride, you have too many people." << endl;
	}
	else if (_next != nullptr) {
		_next->handle(riders);
	}
	else if (riders.getNumberOfRiders() < _maximumNumberOfRiders) {
		cout << "You are eligible to ride, lets get you paired up with some extra people." << endl;
	}
	else {
		cout << "You are eligible to ride." << endl;
	}
}