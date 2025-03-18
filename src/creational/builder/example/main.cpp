#include <iostream>
#include "builder.h"
using namespace std;
int main() {
    Director director;
    CarBuilder carBuilder;
    director.makeSUV(&carBuilder);
    Car car = carBuilder.getResult();
    cout << "Car created: " << car.seats << " seats, " << car.engine << " engine, " << car.tripComputer << " trip computer, " << car.gps << " gps" << endl;

    CarManualBuilder carManualBuilder;
    director.makeSportsCar(&carManualBuilder);
    Manual manual = carManualBuilder.getResult();
    cout << "Manual created: " << manual.seats << " seats, " << manual.engine << " engine, " << manual.tripComputer << " trip computer, " << manual.gps << " gps" << endl;
}