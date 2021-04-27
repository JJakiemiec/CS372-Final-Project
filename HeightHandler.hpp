//Jacob Jakiemiec
//CS372 Software Construction
//HeightHandler.hpp

#include "ConcreteHandler.hpp"

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