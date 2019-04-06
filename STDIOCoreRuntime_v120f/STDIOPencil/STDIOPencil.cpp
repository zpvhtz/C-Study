#include "STDIOCoreRuntime.h"

void InitFunction(DrawLineFunc func)
{
	DrawLine = func;
}

void DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
	DrawLine(x1, y1, x2, y2);
	DrawLine(x1, y1, x3, y3);
	DrawLine(x2, y2, x3, y3);
}

const int TOPOLOGY_LINE = 0;
const int TOPOLOGY_TRIANGLE = 1;

struct Coordinate
{
	float x = 0, y = 0;
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

void RenderArray(Vertex* vertices, int index, int count, int topology_type)
{
	printf("TEST: %f || %f \n\n", vertices[0].coordinate.x, vertices[0].coordinate.y);
	if (topology_type == 0)
	{
		for (int i = index; i < count; i++)
		{
			DrawLine(vertices[i].coordinate.x, vertices[i].coordinate.y, vertices[i + 1].coordinate.x, vertices[i + 1].coordinate.y);
		}
	}
	else
	{
		for (int i = index; i < count; i++)
		{
			i % 3 == 2 ?
				DrawLine(vertices[i].coordinate.x, vertices[i].coordinate.y, vertices[i - 2].coordinate.x, vertices[i - 2].coordinate.y) /*printf("%f || %f || %f || %f\n", vertices[i].coordinate.x, vertices[i].coordinate.y, vertices[i - 2].coordinate.x, vertices[i - 2].coordinate.y)*/:
				DrawLine(vertices[i].coordinate.x, vertices[i].coordinate.y, vertices[i + 1].coordinate.x, vertices[i + 1].coordinate.y) /*printf("%f || %f || %f || %f\n", vertices[i].coordinate.x, vertices[i].coordinate.y, vertices[i + 1].coordinate.x, vertices[i + 1].coordinate.y)*/;
		}
	}
}

void Display()
{
	//DrawTriangle(100, 100, 50, 200, 150, 300);

	Coordinate P1;
	P1.x = 200;
	P1.y = 100;

	Coordinate P2;
	P2.x = 100;
	P2.y = 200;

	Coordinate P3;
	P3.x = 100;
	P3.y = 100;

	Coordinate P4;
	P4.x = 600;
	P4.y = 400;

	Coordinate P5;
	P5.x = 400;
	P5.y = 600;

	Coordinate P6;
	P6.x = 400;
	P6.y = 400;

	Color color;
	color.red = 1.0;
	color.green = 0.0;
	color.blue = 0.0;
	color.alpha = 1.0;

	Vertex vertexA;
	vertexA.coordinate = P1;
	vertexA.color = color;

	Vertex vertexB;
	vertexB.coordinate = P2;
	vertexB.color = color;

	Vertex vertexC;
	vertexC.coordinate = P3;
	vertexC.color = color;

	Vertex vertexD;
	vertexD.coordinate = P4;
	vertexD.color = color;

	Vertex vertexE;
	vertexE.coordinate = P5;
	vertexE.color = color;

	Vertex vertexF;
	vertexF.coordinate = P6;
	vertexF.color = color;

	Vertex arrVertex[6] = { vertexA, vertexB, vertexC, vertexD, vertexE, vertexF };
	RenderArray(arrVertex, 0, 6, TOPOLOGY_TRIANGLE);
}

