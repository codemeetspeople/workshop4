#include "car/Car.hpp"
#include "location/Location.hpp"
#include "exceptions/NotEnoughCapacityException.hpp"
#include "exceptions/OutOfFuelException.hpp"
#include <iostream>

int main() {
    Car toyota("Toyota Camry", 60.0);
    
    std::cout << toyota << std::endl;

    toyota.move(Location(0, 10));

    std::cout << toyota << std::endl;

    try {
        toyota.move(Location(100, 200));
    } catch ( OutOfFuelException obj ) {
        std::cout << obj << std::endl;
    }

    try {
        toyota.refuel(500.0);
    } catch ( NotEnoughCapacityException obj ) {
        std::cout << obj << std::endl;
    }

    return 0;
}