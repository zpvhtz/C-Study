//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	/*int arr[10];
//	int size = 5;
//
//	for (int i = 0; i < size; i++)
//	{
//		printf("Enter value: "); scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	size++;
//	printf("\n\nEnter last value: "); scanf("%d", &arr[size - 1]);
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	size++;
//	int number;
//	int pos = 3;
//	printf("\n\nEnter value number %d: ", pos); scanf("%d", &number);
//
//	for (int i = size - 1; i > pos - 1; i--)
//	{
//		arr[i] = arr[i - 1];
//	}
//	arr[pos - 1] = number;
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//
//	////Bài 01
//	//printf("Bài 01:");
//	//int arr[30] = { 5, 11, 12, 9, 7,
//	//				3, 15, 20, 19, 1,
//	//				18, 8, 17, 13, 6,
//	//				16, 14, 2, 10, 4 };
//
//	//int value = 0;
//	//int index = -1;
//	//printf("\nEnter value: "); scanf("%d", &value);
//	//for (int i = 0; i < 20; i++)
//	//{
//	//	if (arr[i] == value)
//	//	{
//	//		index = i;
//	//	}
//	//}
//	//index > 0 ? printf("=> Index = %d", index) : printf("Cannot find %d", value);
//
//	//Bài 02
//	printf("\n\nBài 02:");
//	int arr2[20] = { 0 };
//	for (int i = 0; i < 20; i++)
//	{
//		i % 5 == 0 ? printf("\n") : printf(" ");
//		printf("%d", arr2[i]);
//	}
//
//	//Random seeds
//	//Time(0) hoặc Time(NULL) lấy thời điểm hiện tại theo milisecond
//	srand(time(0));
//
//	for (int i = 0; i < 20; i++)
//	{
//		arr2[i] = rand();
//	}
//
//	for (int i = 0; i < 20; i++)
//	{
//		i % 5 == 0 ? printf("\n") : printf(" ");
//		printf("%d", arr2[i]);
//	}
//
//	////Bài 03
//	//printf("\n\nBài 03:");
//	//int A[20] = { 5, 11, 12, 9, 7,
//	//			  3, 15, 20, 19, 1,
//	//			  18, 8, 17, 13, 6,
//	//			  16, 14, 2, 10, 4 };
//	//int B[10] = { 30, 21, 24, 23, 27,
//	//			  22, 25, 28, 26, 29 };
//	//int C[30];
//	//for (int i = 0; i < 30; i++)
//	//{
//	//	if (i >= 0 && i < 20)
//	//	{
//	//		C[i] = A[i];
//	//	}
//	//	else
//	//	{
//	//		C[i] = B[i % 20];
//	//	}
//	//}
//	//for (int i = 0; i < 30; i++)
//	//{
//	//	i % 5 == 0 ? printf("\n") : printf("");
//	//	printf("%d ", C[i]);
//	//}
//
//	////Bài 04
//	//printf("\n\nBài 04:");
//	//int A[20] = { 5, 11, 12, 9, 7,
//	//			  3, 15, 20, 19, 1,
//	//			  18, 8, 17, 13, 6,
//	//			  16, 14, 2, 10, 4 };
//	//int B[30] = { 30, 21, 24, 23, 27,
//	//			  22, 25, 28, 26, 29 };
//	//int sizeA = 20;
//	//int sizeB = 10;
//	//int size = 30;
//	//for (int i = 0; i < sizeB; i++)
//	//{
//	//	B[i + sizeA] = B[i];
//	//}
//	//for (int i = 0; i < sizeA; i++)
//	//{
//	//	B[i] = A[i];
//	//}
//	//for (int i = 0; i < size; i++)
//	//{
//	//	i % 5 == 0 ? printf("\n") : printf("");
//	//	printf("%d ", B[i]);
//	//}
//
//	////Bài 05
//	//printf("\n\nBài 05:");
//	//int A[20] = { 5, 11, 12, 9, 7,
//	//	3, 15, 20, 19, 1,
//	//	18, 8, 17, 13, 6,
//	//	16, 14, 2, 10, 4 };
//	//int B[5] = { 100, 101, 102, 103, 104 };
//
//	//int sizeA = 20;
//	//int sizeB = 5;
//	//int index = 5;
//
//	//int pos = 0;
//	//for (int i = index; i < index + sizeB; i++)
//	//{
//	//	A[i] = B[pos];
//	//	pos++;
//	//}
//
//	//for (int i = 0; i < sizeA; i++)
//	//{
//	//	i % 5 == 0 ? printf("\n") : printf("");
//	//	printf("%d ", A[i]);
//	//}
//
//	////Bài 06
//	//printf("\n\nBài 06:");
//	//int A[20] = { 5, 11, 12, 9, 7,
//	//	3, 15, 20, 19, 1,
//	//	18, 8, 17, 13, 6,
//	//	16, 14, 2, 10, 4 };
//	//int B[5] = { 7, 3, 13, 18, 4 };
//
//	//int sizeA = 20;
//	//int sizeB = 5;
//	//int count = 0;
//	//bool result = true;
//
//	//for (int i = 0; i < sizeB; i++)
//	//{
//	//	for (int j = 0; j < sizeA; j++)
//	//	{
//	//		if (B[i] == A[j])
//	//		{
//	//			count++;
//	//			break;
//	//		}
//	//	}
//	//}
//
//	//if (count != sizeB)
//	//{
//	//	result = false;
//	//}
//
//	//result ? printf("YES") : printf("NO");
//
//	////Bài 07
//	//printf("\n\nBài 07:");
//	//int A[20] = { 5, 11, 12, 9, 7,
//	//	3, 15, 20, 19, 1,
//	//	18, 8, 17, 13, 6,
//	//	16, 14, 2, 10, 4 };
//	//int B[5] = { 3, 15, 20, 19, 2 };
//
//	//int sizeA = 20;
//	//int sizeB = 5;
//	//bool result = false;
//
//	//for (int i = 0; i < sizeA; i++)
//	//{
//	//	if (A[i] == B[0])
//	//	{
//	//		int pos = 0;
//	//		for (int j = i; j < i + sizeB; j++)
//	//		{
//	//			if (A[j] != B[pos])
//	//			{
//	//				result = false;
//	//				break;
//	//			}
//	//			result = true;
//	//			pos++;
//	//		}
//	//	}
//	//	if (result)
//	//		break;
//	//}
//
//	//result ? printf("YES") : printf("NO");
//
//	while (true);
//	return 0;
//}