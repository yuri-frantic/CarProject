#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    int cylinders;
    int power;
    static int countCars; // Статическая переменная для подсчета объектов

public:
    Car(); // Конструктор без параметров
    Car(const std::string &brand, int cylinders, int power); // Конструктор с параметрами
    Car(const Car &other); // Конструктор копирования
    virtual ~Car(); // Деструктор

    // Геттеры и сеттеры
    std::string getBrand() const;
    void setBrand(const std::string &brand);
    
    int getCylinders() const;
    void setCylinders(int cylinders);
    
    int getPower() const;
    void setPower(int power);

    // Перегрузка оператора присваивания
    Car& operator=(const Car &other);

    // Перегрузка операторов ввода и вывода
    friend std::ostream& operator<<(std::ostream &os, const Car &car);
    friend std::istream& operator>>(std::istream &is, Car &car);

    // Дружественная функция для подсчета объектов
    friend int count();
};

#endif // CAR_H
