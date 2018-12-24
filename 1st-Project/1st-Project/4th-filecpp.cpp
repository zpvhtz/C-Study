#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	/*int arr[10];
	int size = 5;

	for (int i = 0; i < size; i++)
	{
		printf("Enter value: "); scanf("%d", &arr[i]);
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	size++;
	printf("\n\nEnter last value: "); scanf("%d", &arr[size - 1]);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	size++;
	int number;
	int pos = 3;
	printf("\n\nEnter value number %d: ", pos); scanf("%d", &number);

	for (int i = size - 1; i > pos - 1; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[pos - 1] = number;
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}*/

	////Bài 01
	//printf("Bài 01:");
	//int arr[30] = { 5, 11, 12, 9, 7,
	//				3, 15, 20, 19, 1,
	//				18, 8, 17, 13, 6,
	//				16, 14, 2, 10, 4 };

	//int value = 0;
	//int index = -1;
	//printf("\nEnter value: "); scanf("%d", &value);
	//for (int i = 0; i < 20; i++)
	//{
	//	if (arr[i] == value)
	//	{
	//		index = i;
	//	}
	//}
	//index > 0 ? printf("=> Index = %d", index) : printf("Cannot find %d", value);

	////Bài 02
	//printf("\n\nBài 02:");
	//int arr2[20] = { 0 };
	//for (int i = 0; i < 20; i++)
	//{
	//	printf("\n%d", arr2[i]);
	//}

	////Bài 03
	//printf("\n\nBài 03:");
	//int A[20] = { 5, 11, 12, 9, 7,
	//			  3, 15, 20, 19, 1,
	//			  18, 8, 17, 13, 6,
	//			  16, 14, 2, 10, 4 };
	//int B[10] = { 30, 21, 24, 23, 27,
	//			  22, 25, 28, 26, 29 };
	//int C[30];
	//for (int i = 0; i < 30; i++)
	//{
	//	if (i >= 0 && i < 20)
	//	{
	//		C[i] = A[i];
	//	}
	//	else
	//	{
	//		C[i] = B[i % 20];
	//	}
	//}
	//for (int i = 0; i < 30; i++)
	//{
	//	i % 5 == 0 ? printf("\n") : printf("");
	//	printf("%d ", C[i]);
	//}

	//Bài 04
	printf("\n\nBài 04:");
	int A[20] = { 5, 11, 12, 9, 7,
				  3, 15, 20, 19, 1,
				  18, 8, 17, 13, 6,
				  16, 14, 2, 10, 4 };
	int B[30] = { 30, 21, 24, 23, 27,
				  22, 25, 28, 26, 29 };
	int sizeA = 20;
	int size = 30;
	for (int i = size - 1; i >= 0; i--)
	{
		B[i] = B[i - 1];
		if (i == sizeA - 1)
		{
			break;
		}
	}
	for (int i = 0; i < 30; i++)
	{
		i % 5 == 0 ? printf("\n") : printf("");
		printf("%d ", B[i]);
	}

	while (true);
	return 0;
}