#include <stdio.h>

int sum(int a, int b)
{
	return a + b;
}

void Print(int a, char b)
{

}

int increase(int age)
{
	return age + 1;
}

int decrease(int age)
{
	return age - 1;
}

int main()
{
	/*int(*p)(int, int);
	p = nullptr;
	p = &sum;
	
	int v = p(1, 2);
	printf("%d", v);

	void(*q)(int, char) = nullptr;
	q = &Print;*/
	
	int season = 0;
	int age = 5;

	int(*changeAge)(int) = nullptr;
	changeAge = season == 0 ? &decrease : &increase;

	if (changeAge != nullptr)
		age = changeAge(age);

	while (true);
	return 0;
}