//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void SpinMatrix(int matrix[], int width, int height)
//{
//	for (int i = 0; i < width * height; i++)
//	{
//		printf("%d  ", matrix[i]);
//	}
//
//	printf("\n\n");
//
//	int m[100];
//	int size = width * height;
//
//	for (int i = 0; i < size; i++)
//	{
//		m[i] = matrix[i];
//	}
//	/*for (int i = 0; i < width; i++)
//	{
//		for (int j = 0; j < height; j++)
//		{
//			m[i * width + j] = matrix[i * width + j];
//		}
//	}
//*/
//	for (int i = 0; i < size - 1; i++)
//	{
//		for (int j = i; j < size; j++)
//		{
//			if (m[j] < m[i])
//			{
//				int temp = m[j];
//				m[j] = m[i];
//				m[i] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < width; i++)
//	{
//		for (int j = 0; j < height; j++)
//		{
//			printf("%d  ", m[i * width + j]);
//		}
//	}
//
//	int LEFT = 0;
//	int RIGHT = width - 2;
//	int TOP = 0;
//	int BOTTOM = height - 2;
//
//	int pos = 0;
//
//	while (true)
//	{
//		if (LEFT > RIGHT + 1)
//			break;
//
//		for (int c = LEFT; c <= RIGHT; c++)
//		{
//			int factor = TOP;
//			matrix[factor * width + c] = m[pos];
//			pos++;
//		}
//
//		if (TOP > BOTTOM + 1)
//			break;
//
//		for (int r = TOP; r <= BOTTOM; r++)
//		{
//			int factor = RIGHT + 1;
//			matrix[r * width + factor] = m[pos];
//			pos++;
//		}
//
//		if (LEFT > RIGHT + 1)
//			break;
//
//		for (int c = RIGHT + 1; c >= LEFT + 1; c--)
//		{
//			int factor = BOTTOM + 1;
//			matrix[factor * width + c] = m[pos];
//			pos++;
//		}
//
//		if (TOP > BOTTOM + 1)
//			break;
//
//		for (int r = BOTTOM + 1; r >= TOP + 1; r--)
//		{
//			int factor = LEFT;
//			matrix[r * width + factor] = m[pos];
//			pos++;
//		}
//
//		LEFT++;
//		RIGHT--;
//		TOP++;
//		BOTTOM--;
//	}
//
//	printf("\n\n");
//
//	for (int i = 0; i < width * height; i++)
//	{
//		if (i % width == 0)
//		{
//			printf("\n");
//		}
//		printf("%d  ", matrix[i]);
//	}
//}
//int main()
//{
//	
//	int M[4 * 4] = { 4,  1,  12, 2 ,
//				14, 10, 6,  3 ,
//				7,  9,  5,  15,
//				11, 16, 8,  13 };
//	int X[3 * 3] = {
//		1, 2, 3, 4, 5, 6, 7, 8, 9
//	};
//	SpinMatrix(X, 3, 3);
//
//	while (true);
//	return 0;
//}
