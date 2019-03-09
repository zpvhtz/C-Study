// Struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

struct Point2D
{
	int x;
	int y;
};

void Move(Point2D *p)
{
	Point2D point = *p;
	point.x = p.x++;
	point.y = p.y++;
}

int main()
{
	/*point2d p;
	p.x = 5;
	p.y = 6;

	printf("%d - %d", p.x, p.y);*/

	int arr_1[20] = {};
	int* arr_2 = new int[20];

	while (true);
	return 0;
}