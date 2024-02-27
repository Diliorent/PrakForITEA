#include <iostream>
#include <memory>
#include <vector>

// Product
class Product {
public:
    virtual ~Product() {}
    virtual std::string getName() const = 0;
    virtual double getPrice() const = 0;
};

class Coffee : public Product {
public:
    std::string getName() const override { return "Coffee"; }
    double getPrice() const override { return 5.0; }
};

class Tea : public Product {
public:
    std::string getName() const override { return "Tea"; }
    double getPrice() const override { return 3.0; }
};

class Cookie : public Product {
public:
    std::string getName() const override { return "Cookie"; }
    double getPrice() const override { return 2.0; }
};

// Product Factory
class ProductFactory {
public:
    virtual ~ProductFactory() {}
    virtual std::unique_ptr<Product> createProduct() = 0;
};

class CoffeeFactory : public ProductFactory {
public:
    std::unique_ptr<Product> createProduct() override {
        return std::make_unique<Coffee>();
    }
};

class TeaFactory : public ProductFactory {
public:
    std::unique_ptr<Product> createProduct() override {
        return std::make_unique<Tea>();
    }
};

class CookieFactory : public ProductFactory {
public:
    std::unique_ptr<Product> createProduct() override {
        return std::make_unique<Cookie>();
    }
};

// Client
class Order;
class Client;

class Client {
public:
    virtual ~Client() {}
    virtual void placeOrder(std::shared_ptr<Order> order) = 0;
    virtual void viewOrderHistory() const = 0;
};

class BasicClient : public Client {
public:
    void placeOrder(std::shared_ptr<Order> order) override {
        // Реалізація розміщення замовлення для базового клієнта
    }

    void viewOrderHistory() const override {
        // Реалізація перегляду історії замовлень для базового клієнта
    }
};

// Mediator
class Order : public std::enable_shared_from_this<Order> {
private:
    std::vector<std::shared_ptr<Product>> products;
    std::shared_ptr<Client> client;
    std::weak_ptr<Order> mediator;
    bool paid;
    bool shipped;

public:
    void setMediator(std::shared_ptr<Order> mediator) {
        this->mediator = mediator;
    }

    void markAsPaid() {
        paid = true;
        if (auto mediatorPtr = mediator.lock()) {
            mediatorPtr->orderStatusChanged(shared_from_this());
        }
    }

    void markAsShipped() {
        shipped = true;
        if (auto mediatorPtr = mediator.lock()) {
            mediatorPtr->orderStatusChanged(shared_from_this());
        }
    }

    void orderStatusChanged(std::shared_ptr<Order> order) {
        // Реалізація поведінки для зміни стану замовлення
    }
};

#include <iostream>
#include <memory>
#include <vector>

// решта класів і функцій

int main() {
    // Створення клієнтів
    std::shared_ptr<Client> client1 = std::make_shared<BasicClient>();
    std::shared_ptr<Client> client2 = std::make_shared<BasicClient>();

    // Створення продуктів та фабрик для них
    std::unique_ptr<ProductFactory> coffeeFactory = std::make_unique<CoffeeFactory>();
    std::unique_ptr<ProductFactory> teaFactory = std::make_unique<TeaFactory>();
    std::unique_ptr<ProductFactory> cookieFactory = std::make_unique<CookieFactory>();

    // Роблення замовлень
    std::shared_ptr<Order> order1 = std::make_shared<Order>();
    order1->setMediator(order1); // Призначаємо order1 як посередника для себе
    order1->markAsPaid(); // Позначаємо як оплачений
    order1->markAsShipped(); // Позначаємо як відправлений

    std::shared_ptr<Order> order2 = std::make_shared<Order>();
    order2->setMediator(order2); // Призначаємо order2 як посередника для себе
    order2->markAsPaid(); // Позначаємо як оплачений

    // Робота з клієнтами
    client1->placeOrder(order1); // Клієнт 1 робить перше замовлення
    std::cout << "Client 1 placed an order." << std::endl;

    client2->placeOrder(order2); // Клієнт 2 робить друге замовлення
    std::cout << "Client 2 placed an order." << std::endl;

    client1->viewOrderHistory(); // Клієнт 1 перевіряє свою історію замовлень
    std::cout << "Client 1 viewed order history." << std::endl;

    client2->viewOrderHistory(); // Клієнт 2 перевіряє свою історію замовлень
    std::cout << "Client 2 viewed order history." << std::endl;

    return 0;
}
