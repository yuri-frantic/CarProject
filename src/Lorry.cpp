#include "Lorry.h"

Lorry::Lorry() : Car(), loadCapacity(0) {}

Lorry::Lorry(const std::string &brand, int cylinders, int power, int loadCapacity) 
    : Car(brand, cylinders, power), loadCapacity(loadCapacity) {}

Lorry::Lorry(const Lorry &other) : Car(other), loadCapacity(other.loadCapacity) {}

Lorry::~Lorry() {}

int Lorry::getLoadCapacity() const { return loadCapacity; }

void Lorry::setLoadCapacity(int loadCapacity) { this->loadCapacity = loadCapacity; }

std::ostream& operator<<(std::ostream &os, const Lorry &lorry) {
    os << static_cast<const Car&>(lorry) << ", Грузоподъемность (кг): " << lorry.loadCapacity;
    return os;
}

std::istream& operator>>(std::istream &is, Lorry &lorry) {
    is >> static_cast<Car&>(lorry);
    is >> lorry.loadCapacity;
    return is;
}
