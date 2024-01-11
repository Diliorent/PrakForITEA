#include <iostream>
#include "fstream"

// Дано текст у вигляді окремого файлу. Підрахувати, скільки разів у тексті
// стрічаються слова, які починаються буквою, введеною із клавіатури.

int main()
{
    // Відкриваємо файл для читання
    std::ifstream poems("Shakespeare's_poems_in_English.txt");

    // Перевіряємо, чи вдалося відкрити файл
    if( !poems ) {
        // Якщо не вдалося, виводимо повідомлення про помилку та виходимо з програми
        std::cerr << "Uh oh, Shakespeare's_poems_in_English.txt could not be opened for reading!" << std::endl;
        exit(1);
    }
    else {
        // Якщо вдалося відкрити файл, виводимо повідомлення про успіх
        std::cout << "File has been read successfully" << std::endl;
    }

    // Змінна для збереження введеної користувачем літери
    char controlLetter;

    // Просимо користувача ввести першу літеру слів, які потрібно порахувати
    std::cout << "Please, enter the first letter of the words you want to count: ";

    // Цикл буде виконуватися доти, доки не буде введена буква
    while ( true ) {
        std::cin >> controlLetter;

        // Перевіряємо, чи введений символ є латинською буквою
        if( std::isalpha(controlLetter)) {
            break; // Якщо це буква, виходимо з циклу
        }
        else {
            std::cout << "Invalid input. Please enter a valid letter: ";
        }
    }

    // Конвертуємо введену літеру у верхній регістр, якщо вона в нижньому регістрі
    if( controlLetter >= 'a' && controlLetter <= 'z' ) {
        controlLetter -= 32;
    }

    // Змінна для збереження слова
    std::string word;

    // Змінна для підрахунку слів, що починаються з введеної літери
    double wordCounter = 0;

    // Цикл читання слів з файлу
    while ( poems >> word ) {
        // Перевіряємо, чи слово починається з введеної літери або її нижнього регістру
        if( controlLetter == word[0] || controlLetter + 32 == word[0] ) {
            wordCounter++;
            std::cout << word[0] << " - " << word << std::endl; // Виводимо першу букву слова, та саме слово
        }
    }

    // Виводимо результат підрахунку слів
    if( wordCounter != 0 && wordCounter != 1 )
        std::cout << "I counted: " << wordCounter << " words started with letter \"" << controlLetter << "\"" << std::endl;
    else if( wordCounter == 1 )
        std::cout << "I found only \"" << word << "\" started with letter \"" << controlLetter << "\"" << std::endl;
    else
        std::cout << "There are no words starting with \"" << controlLetter << "\"" << std::endl;

    // Закриваємо файл
    poems.close();

    return 0;
}
