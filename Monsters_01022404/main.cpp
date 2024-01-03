#include <iostream>
#include "Monster.h"

int main()
{
    // Оголошення та ініціалізація об'єктів монстрів з використанням auto
    auto    goblin = Monster("Skwonch", GOBLIN);
    auto    orc    = Monster("Zorg", ORC);
    Monster troll("Gaal", TROLL);
    Monster zombie("William", ZOMBIE);

    // Виведення інформації про монстрів на екран
    goblin.printMonster();
    orc.printMonster();
    troll.printMonster();
    zombie.printMonster();

    // Ще монстри через decltype
    decltype(goblin) anotherGoblin("Stinky", GOBLIN);
    decltype(orc)    anotherOrc("Doratann", ORC);

    // Виведення інформації про монстрів на екран
    anotherGoblin.printMonster();
    anotherOrc.printMonster();

    return 0;
}
