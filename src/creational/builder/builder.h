#pragma once

#include <string>
#include <iostream>
using namespace std;
class Car {
public:
    Car(){
        cout << "Car created" << endl;
    }

    int seats;
    string engine;
    bool tripComputer;
    bool gps;
};

class Manual {
public:
    Manual(){
        cout << "Manual created" << endl;
    }
    int seats;
    string engine;
    bool tripComputer;
    bool gps;
};

class Builder {
public:
    virtual ~Builder() = default;
    virtual void reset() = 0;
    virtual void setSeats(int count) = 0;
    virtual void setEngine(const std::string& engine) = 0;
    virtual void setTripComputer() = 0;
    virtual void setGPS() = 0;
};

class CarBuilder : public Builder {
    private:
        Car car;
    public:
        ~CarBuilder() override {};
        void reset() override;
        void setSeats(int count) override;
        void setEngine(const std::string& engine) override;
        void setTripComputer() override;
        void setGPS() override;
        Car getResult() const;
};

class CarManualBuilder : public Builder {
    private:
        Manual manual;
    public:
        ~CarManualBuilder() override {};
        void reset() override;
        void setSeats(int count) override;
        void setEngine(const std::string& engine) override; 
        void setTripComputer() override;
        void setGPS() override;
        Manual getResult() const;
};

class Director {
public:
    void makeSUV(Builder* builder);
    void makeSportsCar(Builder* builder);
};


