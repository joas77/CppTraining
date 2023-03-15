#include <vector>
#include <memory>

#include "Vehicle.h"
#include "Car.h"

int main(){
    std::vector<std::unique_ptr<Vehicle>> vehicles;

    vehicles.push_back(std::make_unique<Car>());
    return 0;
}