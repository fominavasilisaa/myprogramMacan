#include "func.h"
#include "structs.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void setpoint(Point& point, double x, double y) {
    point.x = x;
    point.y = y;
}

void pointPrint(Point& point) {
    cout << "x: " << point.x << endl;
    cout << "y: " << point.y << endl;
}

void centerPoint(Circle& circle) {
    cout << "Введите координату x центра: ";
    cin >> circle.center.x;
    cout << "Введите координату y центра: ";
    cin >> circle.center.y;
}

void radiusCircle(Circle& circle) {
    cout << "Введите радиус окружности: ";
    cin >> circle.rad;
}

void pointInCircle(Point point, Circle circle) {
	double lengh = sqrt(pow(point.x - circle.center.x, 2) + pow(point.y - circle.center.y, 2));
	if (lengh == circle.rad) {
		cout << "точка находится на границе круга!" << endl;
	}
	else {
		cout << "точка не находится на границе круга!" << endl;
	}
}

void pointInSquare(Point point, Square square) {
	double rightPoint = square.leftPoint.x + square.len;
	double downPoint = square.leftPoint.y - square.len;

	if (((point.y == downPoint) && ((point.x >= square.leftPoint.x) && (point.x <= rightPoint))) ||
		((point.y == square.leftPoint.y) && ((point.x >= square.leftPoint.x) && (point.x <= rightPoint))) ||
		((point.x == downPoint) && ((point.y >= downPoint) && (point.y <= square.leftPoint.y))) ||
		((point.x == rightPoint) && ((point.y >= downPoint) && (point.y <= square.leftPoint.y)))) {
		cout << "точка находится на границе квадрата!" << endl;
	}
	else {
		cout << "точка не находится на границе квадрата!" << endl;
	}
}


void printCircle(Circle& circle) {
    cout << "х центра: " << circle.center.x << endl;
    cout << "у центра: " << circle.center.y << endl;
    cout << "радиус: " << circle.rad << endl;
}

void lenCircle(Circle& circle) {
    double pi = 3.14;
    cout << fixed << setprecision(1);
    cout << "Длина окружности = " << 2 * circle.rad * pi << endl;
}

void squareCircle(Circle& circle) {
    double pi = 3.14;
    cout << fixed << setprecision(1);
    cout << "Площадь круга = " << pi * pow(circle.rad, 2) << endl;
}

void setSquare(Square& square, double x, double y, int len) {
    square.leftPoint.x = x;
    square.leftPoint.y = y;
    square.len = len;
}

void printSquare(Square& square) {
    cout << "x левого верхнего угла: " << square.leftPoint.x << endl;
    cout << "y левого верхнего угла: " << square.leftPoint.y << endl;
    cout << "длина стороны: " << square.len << endl;
}

void SumSquare(Square& square) {
    cout << "Периметр квадрата: " << square.len * 4 << endl;
}

void SquareSquare(Square& square) {
    cout << "Площадь квадрата: " << square.len * square.len << endl;
}

void pointOnCircle(Point point, Circle circle) {
    double lengh = sqrt(pow(point.x - circle.center.x, 2) + pow(point.y - circle.center.y, 2));
    if (lengh == circle.rad) {
        cout << "точка находится на границе круга!" << endl;
    }
    else {
        cout << "точка не находится на границе круга!" << endl;
    }
}

void pointOnSquare(Point point, Square square) {
    double rightPoint = square.leftPoint.x + square.len;
    double downPoint = square.leftPoint.y - square.len;

    if (((point.y == downPoint) && ((point.x >= square.leftPoint.x) && (point.x <= rightPoint))) ||
        ((point.y == square.leftPoint.y) && ((point.x >= square.leftPoint.x) && (point.x <= rightPoint))) ||
        ((point.x == square.leftPoint.x) && ((point.y >= downPoint) && (point.y <= square.leftPoint.y))) ||
        ((point.x == rightPoint) && ((point.y >= downPoint) && (point.y <= square.leftPoint.y)))) {
        cout << "точка находится на границе квадрата!" << endl;
    }
    else {
        cout << "точка не находится на границе квадрата!" << endl;
    }
}
void readPoint(Point& point) {
    cout << "	а) введите х: ";
    cin >> point.x;
    cout << "	b) введите у: ";
    cin >> point.y;
}

void readCircle(Circle& circle) {
    cout << "1) введите центр круга: " << endl;
    readPoint(circle.center);
    cout << "2) введите радиус круга: ";
    cin >> circle.rad;
}

void readSquare(Square& square) {
    cout << "1) введите левый верхний угол квадрата: " << endl;
    readPoint(square.leftPoint);
    cout << "2) введите длину стороны квадрата: ";
    cin >> square.len;
}

void circlesCross(Circle circle1, Circle circle2) {
    double lenght = sqrt(pow(circle1.center.x - circle2.center.x, 2) + pow(circle1.center.y - circle2.center.y, 2));

    if (lenght <= circle1.rad + circle2.rad) {
        cout << "Круги пересекаются" << endl;
    }
    else {
        cout << "Круги не пересекаются" << endl;
    }
}

void squaresCross(Square square1, Square square2) {
    int leftSide1 = square1.leftPoint.x;
    int rightSide1 = square1.leftPoint.x + square1.len;
    int upSide1 = square1.leftPoint.y;
    int downSide1 = square1.leftPoint.y - square1.len;

    int leftSide2 = square2.leftPoint.x;
    int rightSide2 = square2.leftPoint.x + square2.len;
    int upSide2 = square2.leftPoint.y;
    int downSide2 = square2.leftPoint.y - square2.len;

    if (leftSide1 <= rightSide2 && rightSide1 >= leftSide2 &&
        upSide1 >= downSide2 && downSide1 <= upSide2) {
        cout << "Квадраты пересекаются" << endl;
    }
    else {
        cout << "Квадраты не пересекаются" << endl;
    }
}

void circleSquareCross(Circle circle, Square square) {
    int leftSide = square.leftPoint.x;
    int rightSide = square.leftPoint.x + square.len;
    int upSide = square.leftPoint.y;
    int downSide = square.leftPoint.y - square.len;

    int closestX, closestY;

    if (circle.center.x < leftSide) {
        closestX = leftSide;
    }
    else if (circle.center.x > rightSide) {
        closestX = rightSide;
    }
    else {
        closestX = circle.center.x;
    }

    if (circle.center.y > upSide) {
        closestY = upSide;
    }
    else if (circle.center.y < downSide) {
        closestY = downSide;
    }
    else {
        closestY = circle.center.y;
    }

    double lenght = sqrt(pow(circle.center.x - closestX, 2) + pow(circle.center.y - closestY, 2));

    if (lenght <= circle.rad) {
        cout << "Круг и квадрат пересекаются" << endl;
    }
    else {
        cout << "Круг и квадрат не пересекаются" << endl;
    }
}

void circleInCircle(Circle circle1, Circle circle2) {
    double lenght = sqrt(pow(circle1.center.x - circle2.center.x, 2) + pow(circle1.center.y - circle2.center.y, 2));

    if (lenght + circle1.rad <= circle2.rad) {
        cout << "Первый круг внутри второго" << endl;
    }
    else {
        cout << "Первый круг не внутри второго" << endl;
    }
}

void squareInSquare(Square square1, Square square2) {
    int leftSide1 = square1.leftPoint.x;
    int rightSide1 = square1.leftPoint.x + square1.len;
    int upSide1 = square1.leftPoint.y;
    int downSide1 = square1.leftPoint.y - square1.len;

    int leftSide2 = square2.leftPoint.x;
    int rightSide2 = square2.leftPoint.x + square2.len;
    int upSide2 = square2.leftPoint.y;
    int downSide2 = square2.leftPoint.y - square2.len;

    if (leftSide1 >= leftSide2 && rightSide1 <= rightSide2 &&
        upSide1 <= upSide2 && downSide1 >= downSide2) {
        cout << "Первый квадрат внутри второго" << endl;
    }
    else {
        cout << "Первый квадрат не внутри второго" << endl;
    }
}

void squareInCircle(Square square, Circle circle) {
    int leftSide = square.leftPoint.x;
    int rightSide = square.leftPoint.x + square.len;
    int upSide = square.leftPoint.y;
    int downSide = square.leftPoint.y - square.len;

    double lenght1 = sqrt(pow(leftSide - circle.center.x, 2) + pow(upSide - circle.center.y, 2));
    double lenght2 = sqrt(pow(rightSide - circle.center.x, 2) + pow(upSide - circle.center.y, 2));
    double lenght3 = sqrt(pow(leftSide - circle.center.x, 2) + pow(downSide - circle.center.y, 2));
    double lenght4 = sqrt(pow(rightSide - circle.center.x, 2) + pow(downSide - circle.center.y, 2));

    if (lenght1 <= circle.rad && lenght2 <= circle.rad &&
        lenght3 <= circle.rad && lenght4 <= circle.rad) {
        cout << "Квадрат внутри круга" << endl;
    }
    else {
        cout << "Квадрат не внутри круга" << endl;
    }
}

void circleInSquare(Circle circle, Square square) {
    int leftSide = square.leftPoint.x;
    int rightSide = square.leftPoint.x + square.len;
    int upSide = square.leftPoint.y;
    int downSide = square.leftPoint.y - square.len;

    if (circle.center.x - circle.rad >= leftSide &&
        circle.center.x + circle.rad <= rightSide &&
        circle.center.y + circle.rad <= upSide &&
        circle.center.y - circle.rad >= downSide) {
        cout << "Круг внутри квадрата" << endl;
    }
    else {
        cout << "Круг не внутри квадрата" << endl;
    }
}