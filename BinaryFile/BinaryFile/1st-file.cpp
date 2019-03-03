#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef unsigned char byte;

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

long GetCompressedDataSize(byte* srcData, long srcSize)
{
	long desSize = srcSize > 0 ? 2 : 0;

	for (int i = 0; i < srcSize - 1; i++)
	{
		if (srcData[i] != srcData[i + 1])
			desSize += 2;
	}

	return desSize;
}

void RLECompress(byte* srcData, long srcSize,
	byte* desData, long desSize)
{
	long count = 1;

	for (int i = 0, j = 0; i < srcSize - 1; i++)
	{
		if (srcData[i] != srcData[i + 1])
		{
			desData[j++] = count;
			desData[j++] = srcData[i];

			count = 1;
		}
		else
			count++;
	}

	desData[desSize - 2] = count;
	desData[desSize - 1] = srcData[srcSize - 1];
}

long GetDecompressedDataSize(byte* srcData, long srcSize)
{
	long desSize = 0;
	for (int i = 0; i < srcSize; i += 2)
	{
		desSize += srcData[i];
	}

	return desSize;
}

void RLEDecompress(byte* srcData, long srcSize,
	byte* desData, long desSize)
{
	for (int i = 0, j = 0; i < srcSize; i += 2)
	{
		for (int k = 0; k < srcData[i]; k++)
		{
			desData[j++] = srcData[i + 1];
		}
	}
}

void Encrypt(char* data, int size,
	char* & encrypted_data, int & encrypted_size,
	char* key, int key_length)
{
	encrypted_size = size;
	encrypted_data = new char[encrypted_size];

	for (int i = 0; i < encrypted_size; i++)
	{
		encrypted_data[i] = data[i] ^ key[i % key_length];
	}
}

void Encrypt(char* data, int size,
	char* key, int key_length)
{
	for (int i = 0; i < size; i++)
	{
		data[i] = data[i] ^ key[i % key_length];
	}
}

void Decrypt(char* data, int size,
	char* key, int key_length)
{
	Encrypt(data, size, key, key_length);
}

int main()
{
	//Bài 01
	//printf("%ld",GetFileSize("D:\\C\\C-Study\\BinaryFile\\File\\STDIOFile"));

	//Bài 02
	/*char* data = new char;
	long fileSize = 0;
	ReadFile("D:\\C\\C-Study\\BinaryFile\\File\\STDIOFile", data, fileSize);
	while (true);
	return 0;*/

	/*bool doCompress = false;

	const char* sourcePath;
	const char* destinationPath;

	if (doCompress == true)
	{
		const char* sourcePath = "D://STDIOFileCompress_normal.tar";
		const char* destinationPath = "D://STDIOFileCompress_compressed.tar";
	}
	else
	{
		const char* sourcePath = "D://STDIOFileCompress_compressed.tar";
		const char* destinationPath = "D://STDIOFileCompress_decompressed.tar";
	}

	long srcSize = 0;
	byte * srcData = NULL;
	long desSize = 0;
	byte * desData = NULL;

	srcSize = GetFileSize(sourcePath);
	srcData = new byte[srcSize];

	ReadFile(sourcePath, srcData, srcSize);

	if (doCompress == true)
	{
		desSize = GetCompressedDataSize(srcData, srcSize);
		desData = new byte[desSize];
		RLECompress(srcData, srcSize, desData, desSize);
	}
	else
	{
		desSize = GetDecompressedDataSize(srcData, srcSize);
		desData = new byte[desSize];
		RLEDecompress(srcData, srcSize, desData, desSize);
	}

	WriteFile(destinationPath, desData, desSize);

	delete srcData;
	delete desData;

	return 0;*/

	char data[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	char key[3] = { 3, 5, 9 };

	Encrypt(data, 8, key, 3);

	for (int i = 0; i < 8; i++)
	{
		printf("%d ", data[i]);
	}

	printf("\n\n");
	Decrypt(data, 8, key, 3);

	for (int i = 0; i < 8; i++)
	{
		printf("%d ", data[i]);
	}

	while (true);
	return 0;
}