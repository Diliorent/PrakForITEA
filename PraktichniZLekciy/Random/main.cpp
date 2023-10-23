#include <iostream>
#include <ctime>

/* Завдання для самостійного виконання
Написати гру в «Кубики». 2 гравці по черзі кидають 2 кубики. Значення має випадати випадковим
 чином. Переможець — той, у кого за результатами трьох кидків вийшла більша сума.
*/

int main() {
    srand(time(nullptr));
    int p1d1, p1d2, p2d1, p2d2;
    int win1 = 0, win2 = 0;
//    int nigga;

    for (int round = 0; round < 3; ++round) {
        std::cout << "---------Round" << round + 1 << "-------" << std::endl;
        std::cout << " Player1, your turn: ";
        std::getchar();
        p1d1 = rand() % 6 + 1, p1d2 = rand() % 6 + 1;
        std::cout << "Player1 thrown: " << p1d1 << ", " << p1d2 << ".\n";
        std::cout << " Player2, your turn: ";
        std::getchar();
        p2d1 = rand() % 6 + 1, p2d2 = rand() % 6 + 1;
        std::cout << "Player2 thrown: " << p2d1 << ", " << p2d2 << ".\n";

        if (p1d1 + p1d2 > p2d1 + p2d2) {
            win1 += 1;
//          std::cout << "Player 1 won!\n";
        }

        if (p1d1 + p1d2 < p2d1 + p2d2) {
            win2 += 1;
//          std::cout << "Player 2 won!\n";
        }
    }
    std::cout << "---------------------" << std::endl << "   Player1 wins: " << win1 << std::endl << "   Player2 wins: "
              << win2 << std::endl << "---------------------" << std::endl;
    if (win1 > win2)
        std::cout << "    Player1 won!" << std::endl;
    if (win1 < win2)
        std::cout << "    Player2 won!" << std::endl;
    if (win1 == win2)
        std::cout << "       Draw!";

}



