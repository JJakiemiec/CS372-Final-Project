//Jacob Jakiemiec
//CS372 Software Construction
//HeightHandler.cpp

#include "HeightHandler.hpp"

void HeightHandler::handle(const Riders& riders) {
	if (riders.getHeightOfTallestRider() > _maximumHeight) {
		cout << "You cannot ride, someone is too tall for the ride." << endl;
	}
	else if (_next != nullptr) {
		_next->handle(riders);
	}
	else {
		cout << "You are eligible to ride." << endl;
	}
}