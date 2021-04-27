//Jacob Jakiemiec
//CS372 Software Construction
//RideHandler.cpp

#include "RideHandler.hpp"

void RideHandler::setNext(shared_ptr<RideHandler>   handler) {
	_next = move(handler);
}