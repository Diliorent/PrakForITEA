//
// Created by User on 02.11.2023.
//

#ifndef PLOSCHATRICUNIKA_01030001_TRIANGLE_H
#define PLOSCHATRICUNIKA_01030001_TRIANGLE_H


class Triangle {
private:
    double side;
    double height;
    double area{};
public:
    double get_side();

    double get_height();

    void set_side(double side);

    void set_height(double height);

    double get_area();

    explicit Triangle(double s, double h);

    explicit Triangle();

    static void print(Triangle *triangle);


};


#endif //PLOSCHATRICUNIKA_01030001_TRIANGLE_H
