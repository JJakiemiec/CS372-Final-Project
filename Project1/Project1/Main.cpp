//Jacob Jakiemiec
//CS372 Software Construction
//Main.cpp


#include "RideHandler.hpp"

int main() {
	//define arbitrary requirements
	const int MINAGE = 12;
	const int MAXHEIGHT = 60;
	const int MAXNUMRIDERS = 4;

	//initialize our handlers
	unique_ptr<ConcreteRideHandler> handleAge= make_unique<AgeHandler>(MINAGE);
	unique_ptr<ConcreteRideHandler> handleHeight = make_unique<HeightHandler>(MAXHEIGHT);
	unique_ptr<ConcreteRideHandler> handleNumberOfRiders = make_unique<NumberOfRidersHandler>(MAXNUMRIDERS);

	//make our handlers point to each other
	handleAge->setNext(handleHeight);



	return 0;
}