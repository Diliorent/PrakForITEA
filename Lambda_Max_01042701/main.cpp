#include <iostream>
#include <vector>
#include <algorithm>
#include "Student.h"
int main()
{
    Student student_1 = {"Ivan", "Ivanenko", 2.2};
    Student student_2 = {"Mark", "Zuckerberg", 5};
    Student student_3 = {"Anton", "Antonenko", 4.5};
    Student student_4 = {"Petro", "Petrenko", 3.6};

    std::vector<Student> students = {student_1, student_2, student_3, student_4};

    auto highestGradeStudent = std::max_element(students.begin(), students.end(),
                                                [](const Student& a, const Student& b){
                                                  std::cout << "Lambda worked" << std::endl;
                                                  return a.marks < b.marks;
                                                }
    );

    if( highestGradeStudent != students.end()) {
        std::cout << "Student with the highest grade: " << highestGradeStudent->name << " " << highestGradeStudent->surname << std::endl;
    }
    else {
        std::cout << "No students found." << std::endl;
    }

    return 0;
}
