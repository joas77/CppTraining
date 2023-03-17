#include <vector>
#include <memory>
#include <iostream>

#include "Vehicle.h"
#include "Car.h"
#include "Bicycle.h"

int main() {
    std::vector<std::unique_ptr<Vehicle>> vehicles;
    vehicles.push_back(std::make_unique<Car>());
    vehicles.push_back(std::make_unique<Bicycle>());

    for (const auto& vehicle : vehicles) {
        vehicle->startEngine();
    }
    return 0;
}
