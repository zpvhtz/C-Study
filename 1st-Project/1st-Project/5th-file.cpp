//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int sumOfArray(int arr[], int size)
//{
//	int s = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		s += arr[i];
//	}
//
//	return s;
//}
//
//void PrintNaturalNumber(int n)
//{
//	printf("\nNatural number: ");
//	for (int i = 0; i <= n; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n\n");
//}
//
//float Sum3f(float number_1, float number_2, float number_3)
//{
//	return number_1 + number_2 + number_3;
//}
//
//int SumOfElementsInArray(int arr[], int number_of_elements)
//{
//	int sum = 0;
//
//	for (int i = 0; i < number_of_elements; i++)
//	{
//		sum += arr[i];
//	}
//
//	return sum;
//}
//
//float AverageOfElementsInArray(int arr[], int number_of_elements)
//{
//	int sum = 0;
//
//	for (int i = 0; i < number_of_elements; i++)
//	{
//		sum += arr[i];
//	}
//
//	return sum / (number_of_elements * 1.0);
//}
//
//int SumOfElementsAtOddIndexInArray(int arr[], int number_of_elements)
//{
//	int sum = 0;
//
//	for (int i = 0; i < number_of_elements; i++)
//	{
//		if (i % 2 == 1)
//			sum += arr[i];
//	}
//
//	return sum;
//}
//
//int FindMinIndexInArray(int arr[], int number_of_elements)
//{
//	int min = 0;
//	
//	for (int i = 1; i < number_of_elements; i++)
//	{
//		if (arr[i] < arr[min])
//		{
//			min = i;
//		}
//	}
//
//	return min;
//}
//
//int FindMaxIndexInArray(int arr[], int number_of_elements)
//{
//	int max = 0;
//
//	for (int i = 1; i < number_of_elements; i++)
//	{
//		if (arr[i] > arr[max])
//		{
//			max = i;
//		}
//	}
//
//	return max;
//}
//
//void FindMinIndexAndMaxIndexInArray(int arr[], int number_of_elements, int & min_index, int & max_index)
//{
//	min_index = FindMinIndexInArray(arr, number_of_elements);
//	max_index = FindMaxIndexInArray(arr, number_of_elements);
//}
//
//void RemoveElementFromArray(int arr[], int & number_of_elements, int index)
//{
//	for (int i = index; i < number_of_elements - 1; i++)
//	{
//		arr[i] = arr[i + 1];
//	}
//
//	number_of_elements--;
//}
//
//void AddElementToEndOfArray(int arr[], int & number_of_elements, int value)
//{
//	arr[number_of_elements] = value;
//	
//	number_of_elements++;
//}
//
//void AddElementToBeginOfArray(int arr[], int & number_of_elements, int value)
//{
//	for (int i = number_of_elements; i > 0; i--)
//	{
//		arr[i] = arr[i - 1];
//	}
//
//	arr[0] = value;
//
//	number_of_elements++;
//}
//
//void AddElementToArray(int arr[], int & number_of_elements, int index, int value)
//{
//	for (int i = number_of_elements; i > index; i--)
//	{
//		arr[i] = arr[i - 1];
//	}
//
//	arr[index] = value;
//
//	number_of_elements++;
//}
//
//bool IsPrime(int value)
//{
//	if (value < 2)
//	{
//		return false;
//	}
//	else
//	{
//		for (int i = 2; i < value; i++)
//		{
//			if (value % i == 0)
//			{
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//void PrintPrimeValueInArray(int arr[], int number_of_elements)
//{
//	printf("=> ");
//
//	for (int i = 0; i < number_of_elements; i++)
//	{
//		if (IsPrime(arr[i]))
//		{
//			printf("%d, ", arr[i]);
//		}
//	}
//	
//	printf("\n\n");
//}
//
//void PrintFibonacci(int length)
//{
//	int number1 = 0, number2 = 1;
//
//	for (int i = 1; i <= length; i++)
//	{
//		printf("%d ",number2);
//
//		/*int temp = number2;
//		number2 += number1;
//		number1 = temp;*/
//		
//		number2 += number1;
//		number1 = number2 - number1;
//	}
//	printf("\n\n");
//}
//
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5 };
//
//	int result = sumOfArray(a, 5);
//	printf("Result: %d", result);
//
//	//Bài 01
//	int number = 8;
//	PrintNaturalNumber(number);
//
//	//Bài 02
//	float x = 3.5f, y = 6.12f, z = 5.6f;
//	float sum3f = Sum3f(x, y, z);
//	printf("=> Sum3f: %.2ff", sum3f);
//	printf("\n\n");
//
//	//Bài 03
//	int arr[20] = { 5, 11, 12, 9, 7, 3, 15, 20, 19, 1, 18, 8, 17, 13, 6, 16, 14, 2, 10, 4 };
//	int numberOfElements = sizeof(arr) / sizeof(int);
//	printf("=> SumOfElementsInArray: %d", SumOfElementsInArray(arr, numberOfElements));
//	printf("\n\n");
//	
//	//Bài 04
//	printf("=> AverageOfElementsInArray: %f", AverageOfElementsInArray(arr, numberOfElements));
//	printf("\n\n");
//
//	//Bài 05
//	printf("=> SumOfElementsAtOddIndexInArray: %d", SumOfElementsAtOddIndexInArray(arr, numberOfElements));
//	printf("\n\n");
//
//	//Bài 06
//	int min_index = 0, max_index = 0;
//	FindMinIndexAndMaxIndexInArray(arr, numberOfElements, min_index, max_index);
//	printf("=> Index of min: %d [%d]\n=> Index of max: %d [%d]", min_index, arr[min_index], max_index, arr[max_index]);
//	printf("\n\n");
//
//	//Bài 07
//	int arr2[5] = { 5, 11, 12, 9, 7 };
//	int numberOfElements2 = sizeof(arr2) / sizeof(int);
//	int index = 2;
//	RemoveElementFromArray(arr2, numberOfElements2, index);
//	printf("=> arr = {");
//	for (int i = 0; i < numberOfElements2; i++)
//	{
//		i == numberOfElements2 - 1 ? printf("%d}", arr2[i]) : printf("%d, ", arr2[i]);
//	}
//	printf("\n\n");
//
//	//Bài 08
//	int arr3[10] = { 5, 11, 12, 9, 7 };
//	int numberOfElements3 = 5;
//	int value = 2;
//	AddElementToEndOfArray(arr3, numberOfElements3, value);
//	printf("=> arr = {");
//	for (int i = 0; i < numberOfElements3; i++)
//	{
//		i == numberOfElements3 - 1 ? printf("%d}", arr3[i]) : printf("%d, ", arr3[i]);
//	}
//	printf("\n\n");
//
//	//Bài 09
//	int arr4[10] = { 5, 11, 12, 9, 7 };
//	int numberOfElements4 = 5;
//	int value4 = 111;
//	AddElementToBeginOfArray(arr4, numberOfElements4, value4);
//	printf("=> arr = {");
//	for (int i = 0; i < numberOfElements4; i++)
//	{
//		i == numberOfElements4 - 1 ? printf("%d}", arr4[i]) : printf("%d, ", arr4[i]);
//	}
//	printf("\n\n");
//
//	//Bài 10
//	int arr5[10] = { 5, 11, 9, 7 };
//	int index5 = 2;
//	int numberOfElements5 = 4;
//	int value5 = 0;
//	AddElementToArray(arr5, numberOfElements5, index5, value5);
//	printf("=> arr = {");
//	for (int i = 0; i < numberOfElements5; i++)
//	{
//		i == numberOfElements5 - 1 ? printf("%d}", arr5[i]) : printf("%d, ", arr5[i]);
//	}
//	printf("\n\n");
//
//	//Bài 11
//	int arr6[20] = { 5, 11, 12, 9, 7, 3, 15, 20, 19 };
//	int numberOfElements6 = 9;
//	PrintPrimeValueInArray(arr6, numberOfElements6);
//
//	//Bài 12
//	PrintFibonacci(8);
//
//
//	while (true);
//	return 0;
//}