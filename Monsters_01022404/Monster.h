//
// Created by User on 03.01.2024.
//

#ifndef MONSTERS_01022404_MONSTER_H
#define MONSTERS_01022404_MONSTER_H

#include <string>

// Перелік констант для типів монстрів
enum MonsterType{
  GOBLIN,
  ORC,
  TROLL,
  ZOMBIE
};

// Клас, що описує монстра
class Monster{
private:
    std::string name;       // Ім'я монстра
    int         health;             // Кількість здоров'я монстра
    std::string ability;    // Спеціальна способність монстра
    MonsterType type;       // Тип монстра
public:

    // Конструктор класу Monster
    Monster(std::string name, MonsterType type) : name(std::move(name)), type(type)
    {
        switch (type) {
            case GOBLIN:health = 20;
                ability = "Hide";
                break;
            case ORC:health = 70;
                ability = "Rage leap";
                break;
            case TROLL:health = 200;
                ability = "(P) Regeneration";
                break;
            case ZOMBIE:health = 50;
                ability = "Fake dead";
                break;
        }
    }

    // Функція виведення інформації про монстра на екран
    void printMonster() const
    {
        std::cout << "Type: " << getMonsterTypeName(type) << ", Name: " << name << " ("
                  << health << "\\" << health << "), Ability: " << ability << std::endl;
    }

    // Функція для отримання назви типу монстра на основі його числового значення
    static std::string getMonsterTypeName(MonsterType type)
    {
        switch (type) {
            case GOBLIN: return "Goblin";
            case ORC: return "Orc";
            case TROLL: return "Troll";
            case ZOMBIE: return "Zombie";
            default: return "Unknown";
        }
    }
};

#endif //MONSTERS_01022404_MONSTER_H
