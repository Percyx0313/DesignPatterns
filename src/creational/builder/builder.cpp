#include "builder.h"
#include <iostream>
using namespace std;
void CarBuilder::reset() {
    car.seats = 0;
    car.engine = "";
    car.tripComputer = false;
    car.gps = false;
}

void CarBuilder::setSeats(int count) {
    car.seats = count;
}

void CarBuilder::setEngine(const std::string& engine) {
    car.engine = engine;
}

void CarBuilder::setTripComputer() {
    car.tripComputer = true;
}

void CarBuilder::setGPS() {
    car.gps = true;
}

Car CarBuilder::getResult() const {
    return car;
}

void CarManualBuilder::reset() {
    manual.seats = 0;
}

void CarManualBuilder::setSeats(int count) {
    manual.seats = count;
}

void CarManualBuilder::setEngine(const std::string& engine) {
    manual.engine = engine;
}   

void CarManualBuilder::setTripComputer() {
    manual.tripComputer = true;
}

void CarManualBuilder::setGPS() {
    manual.gps = true;
}

Manual CarManualBuilder::getResult() const {
    return manual;
}   

void Director::makeSUV(Builder* builder) {
    cout << "Director makeSportsCar" << endl;
    builder->reset();
    builder->setSeats(4);
    builder->setEngine("V8");
    builder->setTripComputer();
    builder->setGPS();
}

void Director::makeSportsCar(Builder* builder) {
    cout << "Director makeSportsCar" << endl;
    builder->reset();
    builder->setSeats(2);
    builder->setEngine("V8");
    builder->setTripComputer();
    builder->setGPS();
}

