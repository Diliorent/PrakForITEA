//
// Created by User on 02.11.2023.
//

#ifndef PLOSCHATRICUNIKA_01030001_RHOMBUS_H
#define PLOSCHATRICUNIKA_01030001_RHOMBUS_H


class Rhombus {
private:
    double side;
    double angle;
    double area{};
public:
    double get_side();

    double get_angle();

    void set_side(double side);

    void set_angle(double angle);

    double get_area();

    explicit Rhombus(double s, double a);

    explicit Rhombus();

    static void print(Rhombus *rhombus);


};


#endif //PLOSCHATRICUNIKA_01030001_RHOMBUS_H
