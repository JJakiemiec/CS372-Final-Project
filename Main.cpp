//Jacob Jakiemiec
//CS372 Software Construction
//Main.cpp


#include "RideHandler.hpp"
#include "HandlerFactory.hpp"

int main() {
	//define arbitrary requirements
	const int MINAGE = 12;
	const int MAXHEIGHT = 60;
	const int MAXNUMRIDERS = 4;

	//initialize our handlers
	auto handleAge = makeAgeHandler(MINAGE);
	auto handleHeight = makeHeightHandler(MAXHEIGHT);
	auto handleNumberOfRiders = makeNumberOfRidersHandler(MAXNUMRIDERS);

	//make our handlers point to each other
	handleAge->setNext(handleHeight);
	handleHeight->setNext(handleNumberOfRiders);

	//set up riders
	Riders tooYoung(2, 5, 40);
	Riders tooTall(2, 20, 80);
	Riders tooMany(4, 20, 80);
	Riders canRide(2, 20, 40);
	Riders perfect(4, 20, 40);


	//send the riders to the handlers
	handleAge->handle(tooYoung);
	handleAge->handle(tooTall);
	handleAge->handle(tooMany);
	handleAge->handle(canRide);
	handleAge->handle(perfect);
	
	return 0;
}