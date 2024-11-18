// 8. Напишите программу, в которой продемонстрируйте создание объектов и работу всех перегруженных операций.
#include <iostream>
#include "Car.h"
#include "Lorry.h"

int main() {
    Car car1("Hyndai", 4, 150);
    Lorry lorry1("Volvo", 8, 500, 12000);

    std::cout << "Характеристики автомобиля: " << car1 << std::endl;
    std::cout << "Характиристики грузовика: " << lorry1 << std::endl;
    std::cout << "Общее количество автомобилей: " << count() << std::endl;
    return 0;
}
