#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int s_strlen(char* str)
{
	if (str == nullptr)
	{
		return -1;
	}

	int count = 0;
	
	while (*(str + count) != '\0')
	{
		count++;
	}

	return count;
}

void s_strcpy(char* des, char* src)
{
	if (src == nullptr)
	{
		*(des + 0) = '\0';
	}

	int count = 0;
	while (*(src + count) != '\0')
	{
		*(des + count) = *(src + count);
		count++;
	}
	*(des + count) = '\0';
}

int main()
{
	/*const char* s1 = "He";
	const char* s2 = "He";

	printf("%s\n", s1);
	printf("%d\n\n", s1);

	printf("%s\n", s2);
	printf("%d\n\n", s2);

	char s[5] = "text";

	printf("%s\n", s);
	printf("%d\n\n", &s);

	char* s3 = new char[5];
	int i = 0;
	while (*(s + i) != '\0')
	{
		*(s3 + i) = *(s + i);
		i++;
	}
	*(s3 + i) = '\0';

	printf("%s\n", s3);
	printf("%d\n\n", &s3);*/

	//Bài 01
	/*char s[8] = "gravity";
	printf("%d",s_strlen(s));*/

	//Bài 02
	char s[8] = "gravity";
	char* s2 = new char[8];
	s_strcpy(s2, s);
	printf("%s", s2);
	delete s2;

	while (true);
	return 0;
}