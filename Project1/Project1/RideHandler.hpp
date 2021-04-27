//Jacob Jakiemiec
//CS372 Software Construction
//RideHandler.hpp

#ifndef RIDEHANDLER_HPP
#define RIDEHANDLER_HPP

#include "Riders.hpp"

#include <memory>
using std::unique_ptr;
using std::make_unique;
using std::move;
#include <iostream>
using std::cout;
using std::endl;

class RideHandler {
public:
	virtual ~RideHandler() = default;
	void setNext(unique_ptr<RideHandler> && handler);
	virtual void handle(const Riders & riders);
protected:
	unique_ptr<RideHandler> _next;
};

#endif



#ifndef CONCRETERIDEHANDLER_HPP
#define CONCRETERIDEHANDLER_HPP

class ConcreteRideHandler : public RideHandler {

};

#endif




#ifndef AGEHANDLER_HPP
#define AGEHANDLER_HPP

class AgeHandler :  public ConcreteRideHandler {
public:
	AgeHandler() = delete;
	AgeHandler(int minimumAge) : _minimumAge(minimumAge) {};
	void handle(const Riders& riders) override;
private:
	int _minimumAge;
};

#endif

#ifndef HEIGHTHANDLER_HPP
#define HEIGHTHANDLER_HPP

class HeightHandler : public ConcreteRideHandler {
public:
	HeightHandler() = delete;
	HeightHandler(int maxHeight) : _maximumHeight(maxHeight) {};
	void handle(const Riders& riders) override;
private:
	int _maximumHeight;
};

#endif

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

