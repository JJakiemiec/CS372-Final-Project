//Jacob Jakiemiec
//CS372 Software Construction
//RideHandler.hpp

#ifndef RIDEHANDLER_HPP
#define RIDEHANDLER_HPP

#include "Riders.hpp"

#include <memory>
using std::shared_ptr;
using std::make_shared;
#include <iostream>
using std::cout;
using std::endl;

class RideHandler {
public:
	virtual ~RideHandler() = default;
	void setNext(shared_ptr<RideHandler>  handler);
	virtual void handle(const Riders & riders) = 0;
protected:
	shared_ptr<RideHandler> _next;
};

#endif