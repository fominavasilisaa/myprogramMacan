#include <iostream>
#include <cmath>
#include "func.h"

using namespace std;

int main() {
    Point point;
    Circle circle1, circle2;
    Square square1, square2;

    cout << "Точка: " << endl;
    double x, y;
    cout << "Введите x: "; cin >> x;
    cout << "Введите y: "; cin >> y;
    setpoint(point, x, y);

    cout << "\nКруг 1: " << endl;
    centerPoint(circle1);
    radiusCircle(circle1);

    cout << "\nКруг 2: " << endl;
    centerPoint(circle2);
    radiusCircle(circle2);

    cout << "\nКвадрат 1: " << endl;
    double sx, sy;
    int slen;
    cout << "Введите x, y и длину стороны: ";
    cin >> sx >> sy >> slen;
    setSquare(square1, sx, sy, slen);

    cout << "\nКвадрат 2: " << endl;
    cout << "Введите x, y и длину стороны: ";
    cin >> sx >> sy >> slen;
    setSquare(square2, sx, sy, slen);

    cout << "\nТочка: " << endl;
    pointPrint(point);

    cout << "\nКруг 1: " << endl;
    printCircle(circle1);
    lenCircle(circle1);
    squareCircle(circle1);

    cout << "\nКвадрат 1: " << endl;
    printSquare(square1);
    SumSquare(square1);
    SquareSquare(square1);

    pointOnCircle(point, circle1);
    pointOnSquare(point, square1);

    pointInCircle(point, circle1);
    pointInSquare(point, square1);

    circlesCross(circle1, circle2);
    squaresCross(square1, square2);
    circleSquareCross(circle1, square1);
    circleSquareCross(circle1, square2);

    circleInCircle(circle1, circle2);
    circleInCircle(circle2, circle1);
    squareInSquare(square1, square2);
    squareInSquare(square2, square1);
    squareInCircle(square1, circle1);
    squareInCircle(square1, circle2);

    return 0;
}