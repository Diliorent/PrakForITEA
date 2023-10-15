#include <iostream>
#include <iomanip>

//  Враховуючи, що одна верста дорівнює приблизно 1.067 кілометра, напишить програму,
// щоб вона перетворювала версти в кілометри. Програма має пропонувати користувачу
// ввести кількість верст і вивести на екран скільки це
// буде кілометрів. Відповідь округліть до трьо знаків після коми.
int main() {
    float km,vr;
    std::cout << "Hello, please enter verstas" << std::endl;
    std::cin >> vr;
    km = vr * 1.067;
    std::cout << vr << " verstas, is " << std::fixed << std::setprecision(3) << std::showpoint << km << " kilometres";

    return 0;
}
