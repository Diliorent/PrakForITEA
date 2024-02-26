#include <iostream>
#include <vector>
#include <memory>

// Старий інтерфейс для роботи з товарами
class OldItemInterface {
public:
    virtual void display() const {
        std::cout << "Old item display\n";
    }
};

// Новий інтерфейс для роботи з розумними вказівниками
class NewItemInterface {
public:
    virtual void show() const {
        std::cout << "New item show\n";
    }
};

// Клас, який представляє товар у магазині
class Item : public OldItemInterface {
private:
    std::string name;
    double price;

public:
    Item(const std::string& name, double price) : name(name), price(price) {}

    void display() const override {
        std::cout << "Name: " << name << ", Price: $" << price << std::endl;
    }
};

// Адаптер, який адаптує новий інтерфейс до старого
class ItemAdapter : public OldItemInterface {
private:
    std::shared_ptr<NewItemInterface> newItem;

public:
    ItemAdapter(std::shared_ptr<NewItemInterface> newItem) : newItem(newItem) {}

    void display() const override {
        // Викликаємо метод нового інтерфейсу через розумний вказівник
        newItem->show();
    }
};

int main() {
    // Створюємо товар через старий інтерфейс
    Item item("Phone", 999.99);
    item.display();

    // Створюємо товар через новий інтерфейс і адаптуємо його до старого
    std::shared_ptr<NewItemInterface> newItem = std::make_shared<NewItemInterface>();
    ItemAdapter itemAdapter(newItem);
    itemAdapter.display();

    return 0;
}
