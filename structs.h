#ifndef STRUCTS_H
#define STRUCTS_H

struct Point {
	double x;
	double y;
};

struct Circle {
	Point center;
	int rad;
};

struct Square {
	Point leftPoint;
	int len;
};

#endif