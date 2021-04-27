//Jacob Jakiemiec
//CS372 Software Construction
//Riders.cpp

#include "Riders.hpp"

int Riders::getNumberOfRiders() const{
	return _numberOfRiders;
}

int Riders::getAgeOfLowestRider() const{
	return _ageOfLowestRider;
}

int Riders::getHeightOfTallestRider() const{
	return _heightOfTallestRider;
}

void Riders::addNewRider(int age, int height) {
	_numberOfRiders++;
	if (age < _ageOfLowestRider) {
		_ageOfLowestRider = age;
	}
	if (height > _heightOfTallestRider) {
		_heightOfTallestRider = height;
	}
}