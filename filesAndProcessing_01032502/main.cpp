#include <iostream>
#include <fstream>
#include "sort.h"

// Cтворіть файл з даними:
//XWOTLYQVUTZYXWOTZYQVUTSXWVNZYXPUMZRWVUMYXWOTYQVU
//TSXWVNZYXPATZRWVUMYXWOTZYQVUTSXWVNZYXPUBZ
//Зчитайте дані з файла в оперативну пам’ять. Використовуючи методи і
//структури даних з бібліотеки стандартних шаблонів, обчисліть скільки
//разів кожен окремий символ стрічається в такому наборі даних. Зробіть
//дві функції, які би виводили результати на екран:
//1) впорядковані за англійською абеткою;
//2) впорядковані за спаданням кількості.
//В головній функції зробіть меню, де користувач вибиратиме яким
//способом виводити дані на екран.

using namespace std;
int main()
{
//-------------------Робота з файлом---------------------
    std::ofstream data_1("Data.txt");

    // Якщо ми не можемо відкрити цей файл для запису даних,
    if( !data_1 ) {
        // то виводимо повідомлення про помилку і виконуємо функцію exit()
        std::cerr << "Uh oh, Data.txt could not be opened for writing!" << std::endl;
        exit(1);
    }

    data_1 << "XWOTLYQVUTZYXWOTZYQVUTSXWVNZYXPUMZRWVUMYXWOTYQVUTSXWVNZYXPATZRWVUMYXWOTZYQVUTSXWVNZYXPUBZ" << std::endl;
    data_1.close();

    std::ifstream data_2("Data.txt");
    // Якщо ми не можемо відкрити цей файл для читання його вмісту,
    if( !data_2 ) {
        // то виводимо наступне повідомлення про помилку і виконуємо функцію exit()
        cerr << "Uh oh, SomeText.txt could not be opened for reading!" << endl;
        exit(1);
    }

    // Поки є дані, які ми можемо прочитати,
    string strInput;
    while ( data_2 ) {
        // то переміщуємо ці дані в рядок, який потім виводимо на екран
        data_2 >> strInput;
//        cout << strInput << endl;
    }
    data_2.close();
//----------------------Обробка даних--------------------------

    std::cout << "Original string:\n" << strInput << std::endl;
    char userInput;

    do {
        std::cout << "Please, enter how do you want to sort it (a -- for alphabet, c -- for count)" << std::endl;
        std::cin >> userInput;

        // Очищення буфера вводу, щоб уникнути проблем з наступним введенням
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    }
    while ( userInput != 'a' && userInput != 'c' );

    if( userInput == 'a' ) {
        sortByAlphabet(strInput, 0, strInput.length() - 1);
        std::cout << "Sorted string:\n" << strInput << std::endl;
    }
    else {
        countAndSortChars(strInput);
        std::cout << "Sorted string:\n" << strInput << std::endl;
    }

    return 0;
    // Коли outf вийде з області видимості, то деструктор класу ofstream автоматично закриє наш файл
}
