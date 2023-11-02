#include <iostream>
#include "Triangle.h"
#include "Rhombus.h"
//#include <string>

//     Користуючись прикладом обчислення площі квадрата, напишіть програму, яка обчислюватиме площу трикутника,
// прямокутника і ромба.

using namespace std;

class Square {
private:
    double side;
    double area;
public:
    Square(double side);

    double get_side() {
        return side;
    };

    void set_side(double side) {
        if (side > 0) { this->side = side; }
        else { std::cout << "You entered negative amount of length. Length is remained unchanged.\n"; }
    };

    double get_area() {
        area = side * side;
        return area;
    };
};

Square::Square(double s) {
    if (side > 0)
        side = s;
    else side = 0;
}

void print(Square *square) {
    cout << "Side = " << square->get_side() << "\tArea = " << square->get_area() << endl;
}


int main() {
//    ______Square_____
    Square kvadrat(5);
    print(&kvadrat);
    kvadrat.set_side(1.0);
    print(&kvadrat);
    kvadrat.set_side(-1.0);
    print(&kvadrat);

//    ______Triangle______
    Triangle trikutnik(10, 10);
    trikutnik.print(&trikutnik);
//    trikutnik.get_area();
//    trikutnik.get_height();
//    trikutnik.get_side();
    trikutnik.set_side(1000);
    trikutnik.set_height(500);
    trikutnik.print(&trikutnik);
//    ______Rhombus______
    Rhombus romb(10, 30);
    romb.print(&romb);
    romb.set_angle(60);
    romb.print(&romb);
    romb.set_angle(90);
    romb.print(&romb);


    return 0;
}