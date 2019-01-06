//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//bool IsExistInMatrix(int matrix[][4], int width, int height, int value)
//{
//	for (int i = 0; i < width; i++)
//	{
//		for (int j = 0; j < height; j++)
//		{
//			if (matrix[i][j] == value)
//			{
//				return true;
//			}
//		}
//	}
//
//	return false;
//}
//
//int SumOfElementsInMatrix(int matrix[][4], int width, int height)
//{
//	int sum = 0;
//
//	for (int row = 0; row < width; row++)
//	{
//		for (int col = 0; col < height; col++)
//		{
//			sum += matrix[row][col];
//		}
//	}
//
//	return sum;
//}
//
//void SumOfElementsInRowsInMatrix(int matrix[], int width, int height, int sum[])
//{
//	int sumOfRow = 0;
//
//	printf("=> : ");
//
//	for (int row = 0; row < width; row++)
//	{
//		sumOfRow = 0;
//		for (int col = 0; col < height; col++)
//		{
//			sumOfRow += matrix[row * width + col];
//		}
//		sum[row] = sumOfRow;
//		printf("%d ", sumOfRow);
//	}
//
//	//return sum;
//}
//
//void SumOfElementsInColumnsInMatrix(int matrix[], int width, int height, int sum[])
//{
//	int sumOfCol = 0;
//
//	printf("=> : ");
//
//	for (int col = 0; col < width; col++)
//	{
//		sumOfCol = 0;
//		for (int row = 0; row < height; row++)
//		{
//			sumOfCol += matrix[row * width + col];
//		}
//		sum[col] = sumOfCol;
//		printf("%d ", sumOfCol);
//	}
//}
//
//void PrintArray1D(int matrix[], int width, int height)
//{
//	printf("=> PrintArray1D: ");
//
//	for (int row = 0; row < height; row++)
//	{
//		for (int col = 0; col < width; col++)
//		{
//			printf("%d ", matrix[row * width + col]);
//		}
//	}
//}
//
//void PrintArray2D(int matrix[], int width, int height)
//{
//	printf("=> PrintArray2D: \n");
//
//	for (int row = 0; row < height; row++)
//	{
//		for (int col = 0; col < width; col++)
//		{
//			printf("%d ", matrix[row * width + col]);
//		}
//		printf("\n");
//	}
//}
//
//void SpinMatrix(int matrix[], int width, int height)
//{
//	while (true)
//	{
//
//	}
//}
//
//int main()
//{
//	////Bài 01
//	//printf("Bài 01: \n");
//	//int M[4][4] = { {4,  1,  12, 2 },
//	//		   {14, 10, 6,  3 },
//	//		   {7,  9,  5,  15},
//	//		   {11, 16, 8,  13} };
//	//int value = 10;
//	//int width = 4, height = 4;
//	//IsExistInMatrix(M, width, height, value) ? printf("=> YES") : printf("=> NO");
//
//	////Bài 02
//	//printf("\n\nBài 02: \n");
//	//printf("=> SumOfElementsInMatrix: %d", SumOfElementsInMatrix(M, width, height));
//
//	////Bài 03
//	//printf("\n\nBài 03: \n");
//	//int sum[4];
//	//int N[4 * 4] = { 4,  1,  12, 2 ,
//	//			14, 10, 6,  3 ,
//	//			7,  9,  5,  15,
//	//			11, 16, 8,  13 };
//	//SumOfElementsInRowsInMatrix(N, width, height, sum);
//
//	////Bài 04
//	//printf("\n\nBài 04: \n");
//	//int sum2[4];
//	//SumOfElementsInColumnsInMatrix(N, width, height, sum2);
//
//	////Bài 05
//	//printf("\n\nBài 05: \n");
//	//PrintArray1D(N, width, height);
//	//printf("\n");
//	//PrintArray2D(N, width, height);
//
//	//Bài 13
//	printf("\n\nBài 13: \n");
//	int X[4 * 4] = { 4,  1,  12, 2 ,
//				14, 10, 6,  3 ,
//				7,  9,  5,  15,
//				11, 16, 8,  13 };
//
//	while (true);
//	return 0;
//}