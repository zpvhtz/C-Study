#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void swap(int *number_1, int *number_2)
{
	int temp = *number_1;
	*number_1 = *number_2;
	*number_2 = temp;
}

int main()
{
	//Bài 01
	printf("Bài 01: \n");

	int x = 1;
	printf("x = %d\n", x);

	int *ptr1 = &x;
	*ptr1 = 5;
	printf("x = %d\n", x);

	int **ptr2 = &ptr1;
	**ptr2 = 6;
	printf("x = %d\n", x);

	//Bài 02
	printf("\n\nBài 02: \n");
	x = 5;
	int y = 9;
	printf("x = %d, y = %d\n", x, y);
	swap(&x, &y);
	printf("=> x = %d, y = %d", x, y);

	//Bài 03
	/*
	Cho khai báo như bên dưới(không sử dụng máy tính).

	int* p = (int*)1000;
	int k;

	Hãy cho biết 3 trường hợp sau có cho cùng kết quả không ? Giải thích.

	k = (int)p + 1;
	k = (int) ++p;
	k = (int)&p[1];

	Đáp án
	int x = 1000
	=> &x = 80
	=> p = &1000 = 80
	=> p[0] = 80
	&p = 100

	k1 = (int)80 + 1 = 81
	k2 = 84 (p là int *, ++ = dịch 4 bytes)
	k3 = 104 (&p[0] == 100, &p[1] == 104)
	*/

	//Bài 04
	/*
	Cho khai báo:

	int a[] = {1, 5, 6, 7};
	int *p = a;
	Giả sử mô hình bên dưới thể hiện địa chỉ lưu trữ của a và p trong vùng nhớ.

				_ _ _ _ _ _
			   |           |
			   |___________|
	0x00100AFD |     p     |
			   |___________|
			   |    ...    |
			   |___________|
	0x00101010 |     a     |
			   |           |
			   |___________|
			   |           |
			   |_ _ _ _ _ _|

	Không sử dụng máy tính, hãy xác định kiểu dữ liệu và giá trị của các biểu thức bên dưới:

	----

	a = {1, 5, 6, 7} : int []
	&a = 0x00101010 : int*
	*a = ?
	&a + 1 = 0x00101110 : int* 
	a++ = ?
	p = {1, 5, 6, 7} : int*
	&p = 0x00100AFD : int**
	*p = ?
	p + 1 = ?
	*p + 1 = ?
	&p + 1 = ?
	*(p + 1) = ?
	p++ = ?
	*/
	/**/
	while (true);
	return 0;
}