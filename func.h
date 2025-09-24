#ifndef FUNC_H
#define FUNC_H

#include "structs.h"

void setpoint(Point& point, double x, double y);
void pointPrint(Point& point);

void centerPoint(Circle& circle);
void radiusCircle(Circle& circle);
void printCircle(Circle& circle);
void lenCircle(Circle& circle);
void squareCircle(Circle& circle);

void setSquare(Square& square, double x, double y, int len);
void printSquare(Square& square);
void SumSquare(Square& square);
void SquareSquare(Square& square);

void pointOnCircle(Point point, Circle circle);
void pointOnSquare(Point point, Square square);

void readPoint(Point& point);
void readCircle(Circle& circle);
void readSquare(Square& square);

void circlesCross(Circle circle1, Circle circle2);
void squaresCross(Square square1, Square square2);
void circleSquareCross(Circle circle, Square square);

void pointInCircle(Point point, Circle circle);
void pointInSquare(Point point, Square square);

void circleInCircle(Circle circle1, Circle circle2);
void squareInSquare(Square square1, Square square2);
void squareInCircle(Square square, Circle circle);
void circleInSquare(Circle circle, Square square);

#endif