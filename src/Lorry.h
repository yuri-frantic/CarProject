#ifndef LORRY_H
#define LORRY_H

#include "Car.h"

class Lorry : public Car {
private:
    int loadCapacity;

public:
    Lorry(); // 2.1. Конструктор без параметров
    Lorry(const std::string &brand, int cylinders, int power, int loadCapacity); // 2.2. Конструктор с параметрами
    Lorry(const Lorry &other); // 2.3. Конструктор копирования
    ~Lorry(); // 3. Определите в классе деструктор

    int getLoadCapacity() const;
    void setLoadCapacity(int loadCapacity);

    // 6. Перегрузка операторов ввода и вывода
    friend std::ostream& operator<<(std::ostream &os, const Lorry &lorry);
    friend std::istream& operator>>(std::istream &is, Lorry &lorry);
};

#endif // LORRY_H
