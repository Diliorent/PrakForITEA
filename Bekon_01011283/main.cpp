#include <iostream>
#include <vector>
#include "string"
#include <cctype>
//Для кодування повідомлень Френсіс Бекон запропонував кожну літеру тексту замінювати на групу з п'яти символів «А»
// або «B» (назвемо їх "ab- групами"). Для співставлення літер і кодуючих ab-груп в даному завданні використовується
// ключ-ланцюжок: aaaaabbbbbabbbaabbababbaaababaab, в якому порядковий номер літери відповідає порядковому номеру
// початку ab-групи.
// Наприклад: літера "а" - перша літера алфавіту; для визначення її коду беремо 5 символів з ключа,
// починаючи з першого: aaaaa. Літера "c" - третя в алфавіті, отже для визначення її коду беремо 5
// символів з ключа, починаючи з третього: aaabb.
// Таким чином, оригінальне повідомлення перетворюється на послідовність ab-груп і може далі бути накладене
// на будь-який текст відповідної довжини: А позначається нижнім регістром, В - верхнім.
// Наприклад, початкове повідомлення - Prometheus.

// 1. Кодуємо його через ab-послідовності:
// p = abbab r = babab o = aabba m = bbaab e = abbbb t = babba h = bbbab e = abbbb u = abbaa s = ababb
// Результат: abbab babab aabba bbaab abbbb babba bbbab abbbb abbaa ababb
//
// 2. Підбираємо текст приблизно такої ж довжини, в якому сховаємо наше повідомлення:
// Welcome to the Hotel California Such a lovely place Such a lovely place

// 3. Для зручності розбиваємо його на групи по 5 символів і відкидаємо зайву частину (щоб при декодуванні не
// отримувалися зайві п'ятірки). Співставимо ab-рядок і текст-сховище для порівняння:
// abbab babab aabba bbaab abbbb babba bbbab abbbb abbaa ababb
// Welco metot heHot elCal iforn iaSuc halov elypl aceSu chalo vely
//
// 4. Змінюємо регістр символів, кодуючи A та B:
// abbab babab aabba bbaab abbbb babba bbbab abbbb abbaa ababb
// wELcO MeToT heHOt ELcaL iFORN IaSUc HALoV eLYPL aCEsu cHaLO vely
//
// 5. Повертаємо початкові пробіли на місце:
// wELcOMe To The HOtEL caLiFORNIa SUcH A LoVeLY PLaCE sucH a LOvely

// Для дешифрування повідомлення необхідно виконати зворотні дії.
//
// Вхідні дані: масив символів, передається у функцію як аргумент. Може містити пробіли та літери латинського
// алфавіту в будь-якому регістрі.
//
// Результат роботи: дешифроване повідомлення.
std::vector<size_t> findSpaces(const std::string& stringWithSpaces);
char decode(const std::string& SubStr);
std::string code(const std::string& subSting);

int main()
{
//    std::string message = "Test";
//    std::string message = "absolutely not a suspicios message";
    std::string message = "aBsolUteLY noT a suspicIOs MeSSaGE ";
    std::cout << message << std::endl;
    std::vector<size_t> spaces;
    spaces = findSpaces(message);
    for ( int i = spaces.size(); i > 0; --i ) { // Прибирання пробілів
        message.erase(spaces[i - 1], 1);
    }
    std::string erasedMessage = message, subMessage;

    for ( ;; ) {
        subMessage = erasedMessage.substr(0, 5);
        erasedMessage.erase(0, 5);
        std::cout << subMessage << " ";
        if( decode(code(subMessage)) == '.' ) {
            break;
        }
    }
    std::cout << std::endl;
    erasedMessage = message;
    for ( ;; ) {
        subMessage = erasedMessage.substr(0, 5);
        erasedMessage.erase(0, 5);
        std::cout << code(subMessage) << " ";
        if( decode(code(subMessage)) == '.' ) {
            break;
        }
    }
    std::cout << std::endl;
    erasedMessage = message;
    for ( ;; ) {
        subMessage = erasedMessage.substr(0, 5);
        erasedMessage.erase(0, 5);
        std::cout << decode(code(subMessage)) << "     ";
        if( decode(code(subMessage)) == '.' ) {
            break;
        }
    }
    std::cout << std::endl;
    erasedMessage = message;
    for ( ;; ) {
        subMessage = erasedMessage.substr(0, 5);
        erasedMessage.erase(0, 5);
        std::cout << decode(code(subMessage));
        if( decode(code(subMessage)) == '.' ) {
            break;
        }
    }
    return 0;
}

std::vector<size_t> findSpaces(const std::string& stringWithSpaces) //Знаходить пробіли, та поміщає їх вектор
{
    std::vector<size_t> spaces;
    size_t found = stringWithSpaces.find(' ');
    while ( found != std::string::npos ) {
        spaces.push_back(found);
        found = stringWithSpaces.find(' ', found + 1);
    }
//    for (size_t space : spaces)
//    {
//        std::cout << "Spaces on position: " << space << std::endl;
//    }
    return spaces;
}

std::string code(const std::string& subSting)
{
    std::string newString = subSting;
    for ( char& symbol: newString ) {
        if( std::isupper(symbol)) {
            symbol = 'b';
        } else if( std::islower(symbol)) {
            symbol = 'a';
        }
    }
    return newString;
}

char decode(const std::string& SubStr)
{
    if( SubStr == "aaaaa" ) return 'a';
    if( SubStr == "aaaab" ) return 'b';
    if( SubStr == "aaaba" ) return 'c';
    if( SubStr == "aaabb" ) return 'd';
    if( SubStr == "aabaa" ) return 'e';
    if( SubStr == "aabab" ) return 'f';
    if( SubStr == "aabba" ) return 'g';
    if( SubStr == "aabbb" ) return 'h';
    if( SubStr == "abaaa" ) return 'i';
    if( SubStr == "abaab" ) return 'j';
    if( SubStr == "ababa" ) return 'k';
    if( SubStr == "ababb" ) return 'l';
    if( SubStr == "abbaa" ) return 'm';
    if( SubStr == "abbab" ) return 'n';
    if( SubStr == "abbba" ) return 'o';
    if( SubStr == "abbbb" ) return 'p';
    if( SubStr == "baaaa" ) return 'q';
    if( SubStr == "baaab" ) return 'r';
    if( SubStr == "baaba" ) return 's';
    if( SubStr == "baabb" ) return 't';
    if( SubStr == "babaa" ) return 'u';
    if( SubStr == "babab" ) return 'v';
    if( SubStr == "babba" ) return 'w';
    if( SubStr == "babbb" ) return 'x';
    if( SubStr == "bbaaa" ) return 'y';
    if( SubStr == "bbaab" ) return 'z';
    if( SubStr == "bbaba" ) return '<';
    if( SubStr == "bbabb" ) return '3';

    else return '.';
}
