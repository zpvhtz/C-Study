#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long GetFileSize(const char* filePath);
bool ReadFile(const char* filePath, char* data, long fileSize);
bool WriteFile(const char* filePath, char* data, long fileSize);

int main()
{
	//Bài 01
	//printf("%ld",GetFileSize("D:\\C\\C-Study\\BinaryFile\\File\\STDIOFile"));
	
	//Bài 02
	char* data = new char;
	long fileSize = 0;
	ReadFile("D:\\C\\C-Study\\BinaryFile\\File\\STDIOFile", data, fileSize);
	while (true);
	return 0;
}

long GetFileSize(const char* filePath)
{
	FILE* file = fopen(filePath, "r");

	if (file == NULL)
	{
		return -1;
	}

	fseek(file, 0, SEEK_END);
	long fileSize = ftell(file);
	fclose(file);

	return fileSize;
}

bool ReadFile(const char* filePath, char* data, long fileSize)
{
	FILE* file = fopen(filePath, "r");

	if (file == NULL)
	{
		return false;
	}

	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	fseek(file, 0, SEEK_SET);

	data = new char[fileSize];
	fread(data, 1, fileSize, file);
	fclose(file);

	printf("File size: %ld\n", fileSize);

	printf("Size of data: %d\n", sizeof(data));
	for (int i = 0; i < 100; i++)
	{
		//printf("%hd\n", data[i]);
		printf("%d\n", data[i]);
	}

	return true;
}

bool WriteFile(const char* filePath, char* data, long fileSize)
{
	FILE* f = fopen(filePath, "wb");

	if (f == nullptr)
		return false;

	fwrite(data, 1, fileSize, f);

	fclose(f);

	return true;
}