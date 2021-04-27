//Jacob Jakiemiec
//CS372 Software Construction
//Riders.hpp

//This class will be used as the request for the chain of responsibility
//the request will be to see if the riders are eligible to ride a roller coaster



#ifndef RIDERS_HPP
#define RIDERS_HPP

class Riders {
public:
	//constructors
	Riders() : _numberOfRiders(0), _ageOfLowestRider(0), _heightOfTallestRider(0) {};
	Riders(int numberOfRiders, int ageOfLowestRider, int heightOfTallestRider) : _numberOfRiders(numberOfRiders), _ageOfLowestRider(ageOfLowestRider), _heightOfTallestRider(heightOfTallestRider){};


	//public member functions
	int getNumberOfRiders() const;
	int getAgeOfLowestRider() const;
	int getHeightOfTallestRider() const;
	void addNewRider(int age, int height);

private:
	int _numberOfRiders;
	int _ageOfLowestRider;
	int _heightOfTallestRider;
};


#endif