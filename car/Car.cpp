#include "Car.hpp"
#include "../exceptions/NotEnoughCapacityException.hpp"
#include "../exceptions/OutOfFuelException.hpp"

Car::Car(const std::string& model, double tankCapacity) {
    this->model = model;
    this->location = Location(0, 0);
    this->tankCapacity = tankCapacity;
    this->fuelAmount = tankCapacity;
    this->feelConsumption = 1.3;
    this->mileage = 0.0;
}

const std::string& Car::getModel() const {
    return this->model;
}

const Location& Car::getLocation() const {
    return this->location;
}

double Car::getTankCapacity() const {
    return this->tankCapacity;
}

double Car::getFuelAmount() const {
    return this->fuelAmount;
}

double Car::getFeelConsumption() const {
    return this->feelConsumption;
}

double Car::getMileage() const {
    return this->mileage;
}

void Car::refuel(double fuel) {
    if ( this->getFuelAmount() + fuel > this->getTankCapacity() ) {
        throw NotEnoughCapacityException("Not enough capacity...");
    }
    this->fuelAmount += fuel;
}

void Car::refuelUntilFull(double fuel) {
    this->fuelAmount = this->getTankCapacity();
}

void Car::move(const Location& newLocation) {
    double distance = this->location.distance(newLocation);
    double fuelNeeded = distance * this->getFeelConsumption();

    if ( this->getFuelAmount() < fuelNeeded ) {
        throw OutOfFuelException("No fuel...");
    }

    this->fuelAmount -= fuelNeeded;
    this->location = newLocation;
    this->mileage += distance;
}

std::ostream& operator<<(std::ostream& out, const Car& car) {
    out << car.getModel() << ":" << std::endl;
    out << " --fuel(" << car.getFuelAmount() << "/";
    out << car.getTankCapacity() << ")" << std::endl;
    out << " --milleage(" << car.getMileage() << ")" << std::endl;
    return out;
}
