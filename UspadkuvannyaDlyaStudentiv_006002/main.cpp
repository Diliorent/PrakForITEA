#include <iostream>
#include "Person.h"
#include "Student.h"

//Написати клас Особи, в якому мають бути передбачені наступні захищені поля:
//1) унікальний ідентифікатор можна зробити за прикладом РНОКПП ;
//2) ім’я;
//3) прізвище;
//4) номер паспорта;
//5) дата народження;
//6) додаткові відомості;
//напишіть для них публічні методи, які дозволяють отримувати доступ на читання і зміну.
//На основі попереднього класу створіть успадкований клас Студенти. Особливістю нового класу має бути те, що
//студент навчається. Тому треба додати поля:
//7) навчальний заклад
//8) спеціальність
//9) група.
//В головній програмі створіть групу студентів і виведіть її список на екран.

int main() {
//    Person person{123, "Will", "Smith", "123456789",
//                  {12, 3, 1980}, "Famous actor"};
//    person.showAll();
//    person.setUniqueIdentifier(1234567891);
//    person.getUniqueIdentifier();

    Student student_1{1000000001, "Will", "Smith", "E00009349",
                      {25, 9, 1968}, "Famous actor", "Overbrook high school",
                      "no info", "no info"};
    student_1.showAll();
    Student student_2{1000000021, "Leslie", "Nielsen", "G004492349",
                      {11, 02, 1926},
                      "Canadian and American actor, best known for his comedic roles in films"
                      " from the 1980s to the 2000",
                      "Neighborhood Playhouse of the Theatre", "no info", "no info"};
    student_2.showAll();
    student_1.setSpeciality("Performing arts");
    student_1.setGroup("PA_80");
    student_2.setSpeciality("Dramatic arts");
    student_2.setGroup("DA_26");
//    student_1.showAll();
//    student_2.showAll();
    Student group[2];
    group[0] = student_1;
    group[1] = student_2;
    group[0].showAll();
    group[1].showAll();

    return 0;
}
