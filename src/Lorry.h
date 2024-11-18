#ifndef LORRY_H
#define LORRY_H

#include "Car.h"

class Lorry : public Car {
private:
    int loadCapacity;

public:
    Lorry(); // Конструктор без параметров
    Lorry(const std::string &brand, int cylinders, int power, int loadCapacity); // Конструктор с параметрами
    Lorry(const Lorry &other); // Конструктор копирования
    ~Lorry(); // Деструктор

    int getLoadCapacity() const;
    void setLoadCapacity(int loadCapacity);

    // Перегрузка операторов ввода и вывода
    friend std::ostream& operator<<(std::ostream &os, const Lorry &lorry);
    friend std::istream& operator>>(std::istream &is, Lorry &lorry);
};

#endif // LORRY_H
