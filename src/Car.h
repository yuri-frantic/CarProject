#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    int cylinders;
    int power;
    static int countCars;

public:
    Car(); // 2.1. Конструктор без параметров
    Car(const std::string &brand, int cylinders, int power); // 2.2. Конструктор с параметрами
    Car(const Car &other); // 2.3. Конструктор копирования
    virtual ~Car(); // 3. Деструктор

    // 4. Геттеры и сеттеры
    std::string getBrand() const;
    void setBrand(const std::string &brand);
    
    int getCylinders() const;
    void setCylinders(int cylinders);
    
    int getPower() const;
    void setPower(int power);

    // 5. Перегрузка оператора присваивания
    Car& operator=(const Car &other);

    // 6. Перегрузка операторов ввода и вывода
    friend std::ostream& operator<<(std::ostream &os, const Car &car);
    friend std::istream& operator>>(std::istream &is, Car &car);

    // реализовать дружественную функцию count, возвращающую количество всех созданных объектов Car и его производных классов. 
    friend int count();
};

#endif // CAR_H
