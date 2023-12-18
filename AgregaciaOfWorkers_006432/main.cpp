/*
  Допишіть код програми, щоб вона без помилок виводила повідомлення про те, 
  що працівники продовжуть працювати навіть після того, як відділ де вони працювали раніше, розформовано.
  Підказка: Використовуйте std::vector для зберігання працівників у відділі.
 На додаткову оцінку можна реалізувати переведення працівника з одного відділа в інший.
*/
#include <iostream>
#include "Worker.h"
#include "Department.h"

int main()
{
    // Створюємо Працівників поза областю видимості класу Department
    Worker* w1 = new Worker("Ivan");
    Worker* w2 = new Worker("Oleg");
    Worker* w3 = new Worker("Yevhen");
    Worker* w4 = new Worker("Ostap");
    {
        // Створюємо Відділ і передаємо Працівників як параметри конструктора
        Department department_1("First&Only"); // створюємо пустий Відділ
        department_1.add(w1);
        department_1.add(w2);
        department_1.add(w3);
        department_1.showDep(); //Показуємо хто працює у відділі

        std::cout << std::endl;
        Department department_2("Second&Repeated"); //Робимо другий відділ
        department_2.add(w4);
        department_2.workerMoveFrom(department_1, 1); //Відправляємо працівника до іншого відділу

        department_1.showDep(); // Працівника успішно переведено
        department_2.showDep();
        std::cout << std::endl;

    } // department виходить з області видимості і знищується тут
    std::cout << std::endl;
    std::cout << w1->getName() << " is still alive!\n";
    std::cout << w2->getName() << " is still alive!\n";
    std::cout << w3->getName() << " is still alive!\n";
    std::cout << w4->getName() << " is still alive!\n";
    delete w1;
    delete w2;
    delete w3;
    delete w4;
    return 0;
}