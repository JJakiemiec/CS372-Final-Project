For part C, I implemented the chain of responsibility design pattern. I used refactoringguru.com's guide on chain of responsibility to set up the system, and then had help with general class hierarchy design from you, Dr. Hartman. There are four "groups" of files:

1) the service object
Riders.cpp and Riders.hpp serve as the service that will be passed through the chain of responsibility. The class itself is just a fancy struct, storing some simple data with some processing.

2) the chain of responsibility implementation
RiderHandler.cpp and RiderHandler.hpp serve as the Handler interface, defining SetNext and handle. ConcreteHandler.hpp serves as the base handler. and then HeightHandler, AgeHandler, and NumberOfRidersHandler serves as implementations of base handler.

3)Handler factory
HandlerFactory.hpp and HandlerFactory.cpp implements simple factory functions so that I don't have to constantly write make_shared.

4)Main
Main.cpp demonstrates the code by making handlers, linking the handlers together, and then passing services to those handlers.