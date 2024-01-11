//
// Created by User on 08.01.2024.
//

#ifndef SMARTPTRFORSHOP_01042802_SHOPORDER_H
#define SMARTPTRFORSHOP_01042802_SHOPORDER_H

#include <memory>
#include <utility>
#include <iostream>
#include "ShopItem.h"
class ShopOrder{
private:
    std::string itemName;
    double      unitPrice;
    int         quantity;

public:
    // Конструктор класу ShopOrder
    ShopOrder(std::string itemName, double unitPrice, int quantity)
            : itemName(std::move(itemName)), unitPrice(unitPrice), quantity(quantity){std::cout << "Constructing ShopOrder" << std::endl; }
    ~ShopOrder() { std::cout << "Destructing ShopOrder" << std::endl;}

    // Метод для отримання загальної вартості за замовлення
    [[nodiscard]] double getTotalPrice() const{ return unitPrice * quantity; }

    // Метод для виведення інформації про замовлення
    void printOrder() const
    {
        std::cout << "Item: " << itemName << "\n";
        std::cout << "Unit Price: $" << unitPrice << "\n";
        std::cout << "Quantity: " << quantity << "\n";
        std::cout << "Total Price: $" << getTotalPrice() << "\n";
    }
};

#endif //SMARTPTRFORSHOP_01042802_SHOPORDER_H


