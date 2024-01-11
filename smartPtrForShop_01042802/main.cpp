#include <memory>
#include <vector>
#include "ShopItem.h"
#include "ShopOrder.h"

//Тепер спробуйте реалізувати ще один клас C++, але з використання розумних
//вказівників! Перед вами покладено завдання виконати замовлення на товар у
//кошику. Ваші класи мають бути названі ShopItem і ShopOrder. У ShopItem
//мають бути: ідентифікатор, назва вироба, його ціна.
//У товарному замовленні (ShopOrder) зберігається така інформація:
//назва виробу;
//ціна одиниці товару;
//кількість замовлених товарів.
//У класі ShopItem мають бути методи доступу, які дозволять:
//отримати та встановити всю вищезазначену інформацію.
//У ShopOrder має бути метод, щоб отримати загальну вартість за замовлення;
//виводити на екран замовлення зручним для користувача способом.
//Об’єкти класу ShopItem можуть бути записані у масиві. Ви маєте скористатися
//підходом до створення замовлення і розрахунку загальної вартості, який
//використовує звертання до об’єктів і виклику методів через розумні вказівники.

int main()
{

#define MILK   10000001
#define CREAM  10000002
#define BUTTER 10000003
    enum DairyProducts{
      Milk,
      Cream,
      Butter
    };
    // Створення об'єктів класу ShopItem з використанням розумних вказівників
    std::vector<std::unique_ptr<ShopItem>> items;
    items.push_back(std::make_unique<ShopItem>(MILK, "Milk", 10.5));
    items.push_back(std::make_unique<ShopItem>(CREAM, "Cream", 20.0));
    items.push_back(std::make_unique<ShopItem>(BUTTER, "Butter", 15.75));

    // Створення замовлення на товари
    std::vector<ShopOrder> orders;
    orders.emplace_back(items[Milk]->getName(), items[Milk]->getPrice(), 2);
    orders.emplace_back(items[Cream]->getName(), items[Cream]->getPrice(), 3);
    orders.emplace_back(items[Butter]->getName(), items[Butter]->getPrice(), 1);
    items[0]->setId(21342453);

    // Виведення інформації про замовлення
    for ( const auto& order: orders ) {
        order.printOrder();
        std::cout << "---------------------\n";
    }

    return 0;
}