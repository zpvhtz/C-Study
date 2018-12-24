#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
using namespace std;

//int main()
//{
//	////Bài 01
//	//printf("Bài 01:");
//	//int number = 0;
//	//printf("\nEnter number: "); scanf("%d", &number);
//	//number = number < 0 ? number * (-1) : number;
//	//printf("=> Absolute value: %d", number);
//
//	////Bài 02
//	//printf("\n\nBài 02:");
//	//printf("\nEnter number: "); scanf("%d", &number);
//	//if (number % 2 == 0)
//	//{
//	//	printf("=> %d is an even number", number);
//	//}
//	//else
//	//{
//	//	printf("=> %d is an odd number", number);
//	//}
//
//	////Bài 03
//	//printf("\n\nBài 03:");
//	//int hour, minute, second;
//	//printf("\nEnter hour: "); scanf("%d", &hour);
//	//printf("Enter minute: "); scanf("%d", &minute);
//	//printf("Enter second: "); scanf("%d", &second);
//	//second = hour * 60 * 60 + minute * 60 + second;
//	//printf("=> Number of seconds: %d", second);
//
//	////Bài 04
//	//printf("\n\nBài 04:");
//	//int x, y, z, t;
//	//int max, min;
//	//printf("\nEnter x: "); scanf("%d", &x);
//	//printf("Enter y: "); scanf("%d", &y);
//	//printf("Enter z: "); scanf("%d", &z);
//	//printf("Enter t: "); scanf("%d", &t);
//	//if (x >= y && x >= z && x >= t)
//	//{
//	//	max = x;
//	//}
//	//else
//	//{
//	//	if (y >= z && y >= t)
//	//	{
//	//		max = y;
//	//	}
//	//	else
//	//	{
//	//		if (z >= t)
//	//		{
//	//			max = z;
//	//		}
//	//		else
//	//		{
//	//			max = t;
//	//		}
//	//	}
//	//}
//
//	//if (x <= y && x <= z && x <= t)
//	//{
//	//	min = x;
//	//}
//	//else
//	//{
//	//	if (y <= z && y <= t)
//	//	{
//	//		min = y;
//	//	}
//	//	else
//	//	{
//	//		if (z <= t)
//	//		{
//	//			min = z;
//	//		}
//	//		else
//	//		{
//	//			min = t;
//	//		}
//	//	}
//	//}
//
//	//printf("=> Minimum value: %d", min);
//	//printf("\n=> Maximum value: %d", max);
//
//	////Bài 05
//	//printf("\n\nBài 05:");
//	//int month;
//	//printf("\nEnter month (1 - 12): "); scanf("%d", &month);
//	//if (month >= 1 && month <= 3)
//	//{
//	//	printf("=> We are in spring");
//	//}
//	//else
//	//{
//	//	if (month >= 4 && month <= 6)
//	//	{
//	//		printf("=> We are in summer");
//	//	}
//	//	else
//	//	{
//	//		if (month >= 7 && month <= 9)
//	//		{
//	//			printf("=> We are in fall");
//	//		}
//	//		else
//	//		{
//	//			printf("=> We are in winter");
//	//		}
//	//	}
//	//}
//
//	////Bài 06
//	//printf("\n\nBài 06:");
//	//int year;
//	//printf("\nEnter year: "); scanf("%d", &year);
//	//printf("=> Events in %d: ", year);
//	//for (int i = 1988; i <= year; i+=4)
//	//{
//	//	if (year % i == 0)
//	//	{
//	//		printf("Olympic, Euro, ");
//	//		break;
//	//	}
//	//}
//
//	//for (int i = 1990; i <= year; i+=4)
//	//{
//	//	if (year % i == 0)
//	//	{
//	//		printf("World Cup, ");
//	//		break;
//	//	}
//	//}
//
//	//for (int i = 1995; i <= year; i+=2)
//	//{
//	//	if (year % i == 0)
//	//	{
//	//		printf("SEA Games, ");
//	//		break;
//	//	}
//	//}
//
//	//for (int i = 1996; i <= year; i += 2)
//	//{
//	//	if (year % i == 0)
//	//	{
//	//		printf("Tiger Cup, ");
//	//		break;
//	//	}
//	//}
//
//	////Bài 07
//	//printf("\n\nBài 07:");
//	//int day, month, year;
//	//printf("\nEnter day: "); scanf("%d", &day);
//	//printf("Enter month: "); scanf("%d", &month);
//	//printf("Enter year: "); scanf("%d", &year);
//	//if (year > 0)
//	//{
//	//	if (month >= 1 && month <= 12)
//	//	{
//	//		switch (month)
//	//		{
//	//			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//	//				if (day >= 1 && day <= 31)
//	//				{
//	//					printf("=> The date is valid");
//	//					printf("\n=> This month has 31 days");
//	//					if (day > 1 && day < 31)
//	//					{
//	//						printf("=> Previous date: %d-%d-%d", day - 1, month, year);
//	//						printf("\n=> Next date: %d-%d-%d", day + 1, month, year);
//	//					}
//	//					else
//	//					{
//	//						if (day == 1)
//	//						{
//	//							if (month != 3 && month != 1)
//	//							{
//	//								printf("=> Previous date: %d-%d-%d", 30, month - 1, year);
//	//								printf("\n=> Next date: %d-%d-%d", day + 1, month, year);
//	//							}
//	//							if (month == 1)
//	//							{
//	//								printf("=> Previous date: %d-%d-%d", 31, 12, year - 1);
//	//								printf("\n=> Next date: %d-%d-%d", day + 1, month, year);
//	//							}
//	//							if (month == 3)
//	//							{
//	//								if (year % 4 == 0)
//	//								{
//	//									printf("=> Previous date: %d-%d-%d", 29, month - 1, year);
//	//									printf("\n=> Next date: %d-%d-%d", day + 1, month, year);
//	//								}
//	//								else
//	//								{
//	//									printf("=> Previous date: %d-%d-%d", 28, month - 1, year);
//	//									printf("\n=> Next date: %d-%d-%d", day + 1, month, year);
//	//								}
//	//							}
//	//						}
//	//						if (day == 31)
//	//						{
//	//							if (month == 12)
//	//							{
//	//								printf("=> Previous date: %d-%d-%d", day - 1, month, year);
//	//								printf("\n=> Next date: %d-%d-%d", 1, 1, year + 1);
//	//							}
//	//							else
//	//							{
//	//								printf("=> Previous date: %d-%d-%d", day - 1, month, year);
//	//								printf("\n=> Next date: %d-%d-%d", 1, month + 1, year);
//	//							}
//	//						}
//	//					}
//	//				}
//	//				break;
//
//	//			case 2:
//	//				if (year % 4 == 0)
//	//				{
//	//					if (day >= 1 && day <= 29)
//	//					{
//	//						printf("=> The date is valid");
//	//						printf("\n=> This month has 29 days");
//	//						if (day > 1 && day < 29)
//	//						{
//	//							printf("=> Previous date: %d-%d-%d", day - 1, month, year);
//	//							printf("\n=> Next date: %d-%d-%d", day + 1, month, year);
//	//						}
//	//						else
//	//						{
//	//							if (day == 1)
//	//							{
//	//								printf("=> Previous date: %d-%d-%d", 31, month - 1, year);
//	//								printf("\n=> Next date: %d-%d-%d", day + 1, month, year);
//	//							}
//	//							if (day == 29)
//	//							{
//	//								printf("=> Previous date: %d-%d-%d", day - 1, month, year);
//	//								printf("\n=> Next date: %d-%d-%d", 1, month + 1, year);
//	//							}
//	//						}
//	//					}
//	//				}
//	//				else
//	//				{
//	//					if (day >= 1 && day <= 28)
//	//					{
//	//						printf("=> The date is valid");
//	//						printf("\n=> This month has 28 days");
//	//						if (day > 1 && day < 28)
//	//						{
//	//							printf("=> Previous date: %d-%d-%d", day - 1, month, year);
//	//							printf("\n=> Next date: %d-%d-%d", day + 1, month, year);
//	//						}
//	//						else
//	//						{
//	//							if (day == 1)
//	//							{
//	//								printf("=> Previous date: %d-%d-%d", 31, month - 1, year);
//	//								printf("\n=> Next date: %d-%d-%d", day + 1, month, year);
//	//							}
//	//							if (day == 28)
//	//							{
//	//								printf("=> Previous date: %d-%d-%d", day - 1, month, year);
//	//								printf("\n=> Next date: %d-%d-%d", 1, month + 1, year);
//	//							}
//	//						}
//	//					}
//	//				}
//	//				break;
//
//	//			case 4: case 6: case 9: case 11:
//	//				if (day >= 1 && day <= 30)
//	//				{
//	//					printf("=> The date is valid");
//	//					printf("\n=> This month has 30 days");
//	//					if (day > 1 && day < 30)
//	//					{
//	//						printf("=> Previous date: %d-%d-%d", day - 1, month, year);
//	//						printf("\n=> Next date: %d-%d-%d", day + 1, month, year);
//	//					}
//	//					else
//	//					{
//	//						if (day == 1)
//	//						{
//	//							printf("=> Previous date: %d-%d-%d", 31, month - 1, year);
//	//							printf("\n=> Next date: %d-%d-%d", day + 1, month, year);
//	//						}
//	//						if (day == 30)
//	//						{
//	//							printf("=> Previous date: %d-%d-%d", day - 1, month, year);
//	//							printf("\n=> Next date: %d-%d-%d", 1, month + 1, year);
//	//						}
//	//					}
//	//				}
//	//				break;
//	//		}
//	//	}
//	//}
//	
//	////Bài 08
//	//printf("\n\nBài 08:");
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	printf("\n%d. www.stdio.vn", i + 1);
//	//}
//
//	////Bài 09
//	//printf("\n\nBài 09:");
//	//for (int i = 1; i <= 9; i++)
//	//{
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("\n%d. training.stdio.vn", i);
//	//	}
//	//	else
//	//	{
//	//		if (i % 3 == 1)
//	//		{
//	//			printf("\n%d. www.stdio.vn", i);
//	//		}
//	//		else
//	//		{
//	//			printf("\n%d. bugs.vn", i);
//	//		}
//	//	}
//	//}
//
//	////Bài 10
//	//int n, tong = 0;
//	//printf("\n\nBài 10:");
//	//printf("\nEnter n: "); scanf("%d", &n);
//	//for (int i = 1; i <= n; i++)
//	//{
//	//	tong += i;
//	//}
//	//printf("=> S: %d", tong);
//
//	////Bài 11
//	//int tich = 0;
//	//printf("\n\nBài 11:");
//	//printf("\nEnter n: "); scanf("%d", &n);
//	//for (int i = 1; i <= n; i++)
//	//{
//	//	tich *= i;
//	//}
//	//printf("=> n!: %d", tich);
//
//	////Bài 12
//	//tong = 0;
//	//int temp = 0;
//	//printf("\n\nBài 12:");
//	//printf("\nEnter n: "); scanf("%d", &n);
//	//for (int i = 1; temp <= n; i++)
//	//{
//	//	if (i % 2 == 1)
//	//	{
//	//		temp++;
//	//		tong += i;
//	//	}
//	//}
//	//printf("=> S = %d", tong);
//
//	////Bài 13
//	//int snt = 0;
	
//	//printf("\n\nBài 13:");
//	//printf("\nEnter nunmber: "); scanf("%d", &snt);
//	//bool prime = snt > 1;
//	//for (int i = 2; i < snt / 2; i++)
//	//{
//	//	if (snt % i == 0)
//	//	{
//	//		prime = false;
//	//		break;
//	//	}
//	//}
//	//if (prime)
//	//{
//	//	printf("%d is prime", snt);
//	//}
//	//else
//	//{
//	//	printf("%d is not prime", snt);
//	//}
//
//	////Bài 14
//	//int number = 0;
//	//printf("\n\nBài 14:");
//	//printf("\nEnter number: "); scanf("%d", &number);
//	//printf("=> Divisors of 10 are: ");
//	//for (int i = 1; i <= number; i++)
//	//{
//	//	if (number % i == 0)
//	//	{
//	//		printf("%d, ", i);
//	//	}
//	//}
//
//	////Bài 15
//	//int number = 0;
//	//int tong = 0;
//	//printf("\n\nBài 15:");
//	//printf("\nEnter number: "); scanf("%d", &number);
//	//for (int i = 1; i < number; i++)
//	//{
//	//	if (number % i == 0)
//	//	{
//	//		tong += i;
//	//	}
//	//}
//	//if (tong == number)
//	//{
//	//	printf("=> %d is a perfect number", number);
//	//}
//	//else
//	//{
//	//	printf("=> %d is not a perfect number", number);
//	//}
//
//	////Bài 16
//	//int number = 0;
//	//int digit = 0;
//	//printf("\n\nBài 16:");
//	//printf("\nEnter number: "); scanf("%d", &number);
//	//int temp = number;
//	//while (temp != 0)
//	//{
//	//	digit++;
//	//	temp = temp / 10;
//	//}
//	//printf("=> %d have %d digits", number, digit);
//
//	////Bài 17
//	//int number = 0;
//	//int digit = 0;
//	//printf("\n\nBài 17:");
//	//printf("\nEnter number: "); scanf("%d", &number);
//	//int temp = number;
//	//while (temp != 0)
//	//{
//	//	digit++;
//	//	temp = temp / 10;
//	//}
//	//int io = 1;
//	//for (int i = 0; i < digit; i++)
//	//{
//	//	io *= 10;
//	//}
//	//io -= number;
//	//int temp2 = io;
//	//int digit2 = 0;
//	//while (temp2 != 0)
//	//{
//	//	digit2++;
//	//	temp2 = temp2 / 10;
//	//}
//	//if (digit == digit2)
//	//{
//	//	printf("IO number of %d is %d", number, io);
//	//}
//	//else
//	//{
//	//	printf("Nope");
//	//}
//
//	////Bài 18
//	//int number = 0;
//	//printf("\n\nBài 18:");
//	//printf("\nEnter number: "); scanf("%d", &number);
//	//printf("=> Result: ");
//	//int temp = number;
//	//int digit = 0;
//	//while (temp != 0)
//	//{
//	//	digit = 0;
//	//	int temp2 = temp;
//	//	while (temp2 != 0)
//	//	{
//	//		digit++;
//	//		temp2 = temp2 / 10;
//	//	}
//	//	int max = 1;
//	//	for (int i = 0; i < digit - 1; i++)
//	//	{
//	//		max *= 10;
//	//	}
//	//	if (temp / max != 0 && temp / max != 5)
//	//	{
//	//		printf("%d", temp / max);
//	//	}
//	//	temp = temp % max;
//	//}
//
//	//Bài 19
//	printf("\n\nBài 19:");
//	int number = 0;
//	int digit = 0;
//	printf("\nEnter number: "); scanf("%d", &number);
//	int temp = number;
//	float tong = 1;
//	float tongtemp = 0;
//	while (temp > 0)
//	{
//		digit++;
//		temp = temp / 10;
//	}
//
//	int somu = digit / 2;
//	for (int i = 0; i < somu; i++)
//	{
//		tong *= 10;
//	}
//
//	tong *= 2;
//	while(tong != tongtemp)
//	{
//		tongtemp = tong;
//		tong = ((1 / 2.0) * (tong + (number / tong)));
//	}
//	printf("=> Square root of %d is %f", number, tong);
//
//	////Bài 20
//	//int number = 0;
//	//printf("\n\nBài 21:");
//	//printf("\nEnter number: "); scanf("%d", &number);
//	//for (int i = 1; i <= number; i++)
//	//{
//	//	for (int j = 1; j <= i; j++)
//	//	{
//	//		printf("* ");
//	//	}
//	//	printf("\n");
//	//}
//
//	////Bài 21
//	//int number = 0;
//	//printf("\n\nBài 22:");
//	//printf("\nEnter number: "); scanf("%d", &number);
//	//for (int i = 1; i <= number; i++)
//	//{
//	//	for (int j = number; j >= i; j--)
//	//	{
//	//		printf("* ");
//	//	}
//	//	printf("\n");
//	//}
//
//	////Bài 22
//	//int number = 0;
//	//printf("\n\nBài 23:");
//	//printf("\nEnter number: "); scanf("%d", &number);
//	//for (int i = 1; i <= number; i++)
//	//{
//	//	for (int j = number; j >= 1; j--)
//	//	{
//	//		if (j <= i)
//	//		{
//	//			printf("* ");
//	//		}
//	//		else
//	//		{
//	//			printf("  ");
//	//		}
//	//	}
//	//	printf("\n");
//	//}
//
//	////Bài 23
//	//int number = 0;
//	//printf("\n\nBài 24:");
//	//printf("\nEnter number: "); scanf("%d", &number);
//	//for (int i = 1; i <= number; i++)
//	//{
//	//	for (int j = 1; j <= number; j++)
//	//	{
//	//		if (j >= i)
//	//		{
//	//			printf("* ");
//	//		}
//	//		else
//	//		{
//	//			printf("  ");
//	//		}
//	//	}
//	//	printf("\n");
//	//}
//
//	////Bài 24
//	//int number = 0;
//	//printf("\n\nBài 25:");
//	//printf("\nEnter number: "); scanf("%d", &number);
//	//for (int i = 1; i <= number; i++)
//	//{
//	//	for (int j = 1; j <= number; j++)
//	//	{
//	//		if (i > 1 && i < number)
//	//		{
//	//			if (j == 1 || j == number)
//	//			{
//	//				printf("* ");
//	//			}
//	//			else
//	//			{
//	//				printf("  ");
//	//			}
//	//		}
//	//		else
//	//		{
//	//			printf("* ");
//	//		}
//	//	}
//	//	printf("\n");
//	//}
//
//	////Bài 25
//	//int number = 0;
//	//printf("\n\nBài 26:");
//	//printf("\nEnter number: "); scanf("%d", &number);
//	//int stt = 1;
//	//int turn = 1;
//	//for (int i = 0; i <= number; i++)
//	//{
//	//	stt = turn;
//	//	for (int j = 0; j <= number; j++)
//	//	{
//	//		printf("%d ", stt);
//	//		stt++;
//	//		if (stt > number + 1)
//	//		{
//	//			stt = 1;
//	//		}
//	//	}
//	//	printf("\n");
//	//	turn++;
//	//}
//	//printf("\n\n");
//	//char firstkitu = 'A';
//	//char kitu = 'A';
//	//char turnkt = 'A';
//	//for (int i = 0; i <= number; i++)
//	//{
//	//	kitu = turnkt;
//	//	for (int j = 0; j <= number; j++)
//	//	{
//	//		printf("%c ", kitu);
//	//		kitu++;
//	//		if (kitu > firstkitu + number)
//	//		{
//	//			kitu = firstkitu;
//	//		}
//	//	}
//	//	printf("\n");
//	//	turnkt++;
//	//}
//	
//	while (true);
//	return 0;
//}