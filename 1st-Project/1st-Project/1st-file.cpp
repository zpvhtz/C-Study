#include <stdio.h>

int main()
{
	//printf, scanf
	//\n = newline, \t = tab
	printf("Hello \"World\n");
	printf("Hello \\World\n");

	//B�i 01
	printf("\n\nB�i 01:\n");
	printf("www.stdio.vn");

	//B�i 02
	printf("\n\nB�i 02:\n");
	printf("STDIO stands for StandarD Input Output");

	//B�i 03
	printf("\n\nB�i 03:\n");
	printf(
		" _______  _______  ______   ___   _______ \n"
		"|       ||       ||      | |   | |       |\n"
		"|  _____|| _     ||  _    ||   | |   _   |\n"
		"| |_____   |   |  | | |   ||   | |  | |  |\n"
		"|_____  |  |   |  | |_|   ||   | |  |_|  |\n"
		"______| |  |   |  |       ||   | |       |\n"
		"|_______|  |___|  |______| |___| |_______|\n"
	);

	//B�i 04
	printf("\n\nB�i 04:\n");
	printf(
		"Microsoft DirectX is a collection of application programming interfaces (APIs) for handling tasks related to multimedia,\nespecially game programming and video, on Microsoft platforms."
		"Originally, the names of these APIs all began with Direct, such as\n\n"
		"\t- Direct3D\n"
		"\t- DirectDraw\n"
		"\t- DirectDraw\n"
		"\t- DirectPlay\n"
		"\t- DirectSound\n"
		"\t- And so forth.\n\n"
		"The name DirectX was coined as shorthand term for all of these APIs (the X standing in for the particular API names) and\nsoon became the name of the collection."
	);

	//B�i 05
	printf("\n\nB�i 05:\n");
	printf(
		"In C++, we have some special characters:\n"
		"\t- // or /* */ for the comment.\n"
		"\t- \\t for tab.\n"
		"\t- \\n for new line.\n"
		"\t- \" and \" to mark it's a string."
	);

	while (true);
	return 0;
}