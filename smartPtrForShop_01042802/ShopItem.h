//
// Created by User on 08.01.2024.
//

#ifndef SMARTPTRFORSHOP_01042802_SHOPITEM_H
#define SMARTPTRFORSHOP_01042802_SHOPITEM_H

#include <string>
#include <utility>
#include <iostream>
class ShopItem{
private:
    int         id;
    std::string name;
    double      price;

public:
    // Конструктор класу ShopItem
    ShopItem(int id, std::string name, double price) : id(id), name(std::move(name)), price(price){ std::cout << "Constructing ShopItem" << std::endl;}
    ~ShopItem() { std::cout << "Destructing ShopItem" << std::endl; };

    // Методи доступу
    [[nodiscard]] int getId() const{ return id; }
    [[nodiscard]] std::string getName() const{ return name; }
    [[nodiscard]] double getPrice() const{ return price; }

    // Методи запису
    void setId(int newId){id = newId;};
    void setName(const std::string& newName){ name = newName;};
    void setPrice(double newPrice){price = newPrice;};
};

#endif //SMARTPTRFORSHOP_01042802_SHOPITEM_H