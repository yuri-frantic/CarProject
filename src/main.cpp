#include <iostream>
#include "Car.h"
#include "Lorry.h"

int main() {
    Car car1("Hyndai", 4, 150);
    Lorry lorry1("Volvo", 8, 500, 12000);

    std::cout << "Характеристики авто: " << car1 << std::endl;
    std::cout << "Характеристики грузовика: " << lorry1 << std::endl;

    std::cout << "Всего автомобилей: " << count() << std::endl;

    return 0;
}
