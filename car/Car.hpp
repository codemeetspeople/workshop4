#ifndef CAR_HPP
#define CAR_HPP

#include "../location/Location.hpp"
#include <iostream>

class Car {
    private:
        std::string model;
        Location location;
        double tankCapacity;
        double fuelAmount;
        double feelConsumption;
        double mileage;

    public:
        Car(const std::string& model, double tankCapacity);

        const std::string& getModel() const;
        const Location& getLocation() const;
        double getTankCapacity() const;
        double getFuelAmount() const;
        double getFeelConsumption() const;
        double getMileage() const;

        void refuel(double fuel);
        void refuelUntilFull(double fuel);
        void move(const Location& newLocation);
};

std::ostream& operator<<(std::ostream& out, const Car& car);

#endif
