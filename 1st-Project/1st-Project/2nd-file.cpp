#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
using namespace std;

void bai2()
{
	//B�i 01
	printf("B�i 01:");
	int width = 0, height = 0;
	printf("\nEnter width: "); scanf("%d", &width);
	printf("Enter height: "); scanf("%d", &height);
	printf("Perimeter: %d", (width + height) * 2);
	printf("\nArea: %d", width * height);

	//B�i 02
	printf("\n\nB�i 02:");
	int radius = 0;
	float pi = 3.14159f;
	printf("\nEnter radius: "); scanf("%d", &radius);
	printf("Perimeter: %f", 2 * pi * radius);
	printf("\nArea: %f", radius * radius * pi);

	//B�i 03
	printf("\n\nB�i 03:");
	printf("\nEnter radius: "); scanf("%d", &radius);
	printf("Enter height: "); scanf("%d", &height);
	printf("CurvedSurfaceArea: %f", 2 * pi * radius * height);
	printf("\nSurfacecArea: %f", (2 * pi * radius * radius) + (2 * pi * radius * height));
	printf("\nVolume: %f", pi * radius * radius * height);

	//B�i 04
	printf("\n\nB�i 04:");
	int number_1 = 0, number_2 = 0;
	printf("\nEnter number_1: "); scanf("%d", &number_1);
	printf("Enter number_2: "); scanf("%d", &number_2);

	printf("\n\nBEFORE SWAPPING:");
	printf("\nnumber_1: %d", number_1);
	printf("\nnumber_2: %d", number_2);

	int temp = number_1;
	number_1 = number_2;
	number_2 = temp;

	printf("\n\nAFTER SWAPPING");
	printf("\nnumber_1: %d", number_1);
	printf("\nnumber_2: %d", number_2);

	//B�i 05
	printf("\n\nB�i 05:");
	int number = 0;
	printf("Enter number (100-999): "); scanf("%d", &number);
	printf("=> Sum of digits: %d", (number / 100) + (number % 100 / 10) + (number % 100 % 10));

	//B�i 06
	printf("\n\nB�i 06:");
	printf("Enter number (100-999): "); scanf("%d", &number);
	printf("=> Reverse number: %d", (number % 10 * 100) + (number % 100 / 10 * 10) + (number / 100));

	//B�i 07
	printf("\n\nB�i 07:");
	float number2 = 0;
	printf("Enter number: "); scanf("%f", &number2);
	printf("Round of number: %d", (int)(number2 + 0.5));

	/*while (true);
	return 0;*/
}