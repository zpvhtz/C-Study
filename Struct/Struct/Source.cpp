#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Coordinate
{
	float x = 0, y=0, z=0, w=0;
};

struct Color
{
	float red = 0, green = 0, blue = 0, alpha = 0;
};

struct Vertex
{
	Coordinate coordinate;
	Color color;
};

int main()
{
	//Câu 4
	Coordinate P1;
	P1.x = 0.5;
	P1.y = 0.5;
	P1.z = 0.5;
	P1.w = 1.0;

	Coordinate P2;
	P2.x = 1.0;
	P2.y = 0.9;
	P2.z = 0.8;
	P2.w = 1.0;

	Color colorA;
	colorA.red = 1.0;
	colorA.green = 0.0;
	colorA.blue = 0.0;
	colorA.alpha = 1.0;

	Color colorB;
	colorB.red = 0.0;
	colorB.green = 1.0;
	colorB.blue = 0.0;
	colorB.alpha = 1.0;

	Vertex vertexA;
	vertexA.coordinate = P1;
	vertexA.color = colorA;

	Vertex vertexB;
	vertexB.coordinate = P2;
	vertexB.color = colorB;


	//Câu 5
	//Giống câu 4

	while (true);
	return 0;
}