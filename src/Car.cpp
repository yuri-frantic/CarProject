#include "Car.h"

int Car::countCars = 0; 

Car::Car() : brand("Unknown"), cylinders(0), power(0) {
    countCars++;
}

Car::Car(const std::string &brand, int cylinders, int power) : brand(brand), cylinders(cylinders), power(power) {
    countCars++;
}

Car::Car(const Car &other) : brand(other.brand), cylinders(other.cylinders), power(other.power) {
    countCars++;
}

Car::~Car() {
    countCars--;
}

std::string Car::getBrand() const { return brand; }
void Car::setBrand(const std::string &brand) { this->brand = brand; }

int Car::getCylinders() const { return cylinders; }
void Car::setCylinders(int cylinders) { this->cylinders = cylinders; }

int Car::getPower() const { return power; }
void Car::setPower(int power) { this->power = power; }

Car& Car::operator=(const Car &other) {
    if (this != &other) {
        brand = other.brand;
        cylinders = other.cylinders;
        power = other.power;
    }
    return *this;
}

std::ostream& operator<<(std::ostream &os, const Car &car) {
    os << "Бренд: " << car.brand << ", Колличество цилиндров (шт): " << car.cylinders << ", Мощность (л/с): " << car.power;
    return os;
}

std::istream& operator>>(std::istream &is, Car &car) {
    is >> car.brand >> car.cylinders >> car.power;
    return is;
}

int count() {
    return Car::countCars;
}
