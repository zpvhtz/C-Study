#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <bitset>
using namespace std;
#include <fstream>

typedef unsigned char BYTE;
typedef unsigned int DWORD;

bool ReadFile_N(const char* filePath, BYTE* & data, long & fileSize)
{
	FILE* fileStream = fopen(filePath, "rb");

	if (fileStream == nullptr)
		return false;

	fseek(fileStream, 0, SEEK_END);
	fileSize = ftell(fileStream);
	fseek(fileStream, 0, SEEK_SET);

	data = new BYTE[fileSize];

	fread(data, sizeof(BYTE), fileSize, fileStream);

	fclose(fileStream);
	return true;
}

bool DecodeUTF16_N(DWORD* & o_utf16Value, int & o_countValue, BYTE* i_utf16Code, int i_countCode)
{
	/*o_countValue = 0;

	for (int i = 0; i < i_countCode; i++)
	{
		if (i_utf16Code[i] & 0xff00 == 0xf0)
			i += 4;
		else if (i_utf16Code[i] & 0xc0 == 0xc0)
			i += 2;
		o_countValue += 1;
	}*/

	int W1 = (i_utf16Code & 0xff00) >> 16, W2;

}

bool DecodeUTF8_N(DWORD* & o_utf8Value, int & o_countValue, BYTE* i_utf8Code, int i_countCode)
{
	o_countValue = 0;

	for (int i = 0; i < i_countCode; i++)
	{
		if (i_utf8Code[i] & 0xf0 == 0xf0)
			i += 4;
		else if (i_utf8Code[i] & 0xe0 == 0xe0)
			i += 3;
		else if (i_utf8Code[i] & 0xc0 == 0xc0)
			i += 2;
		else
			i += 1;
		o_countValue += 1;
	}

	o_utf8Value = new DWORD[o_countValue];

	for (int i = 0, j = 0; i < i_countCode; i++)
	{
		if (i_utf8Code[i] & 0xf0 == 0xf0)
		{
			o_utf8Value[j] = ((o_utf8Value[i] & 0x07) << 18) | ((o_utf8Value[i] & 0x3f) << 12) | ((o_utf8Value[i + 1] & 0x3f) << 6) | (o_utf8Value[i + 2] & 0x3f);
			i += 4;
		}
		else if (i_utf8Code[i] & 0xe0 == 0xe0)
		{
			o_utf8Value[j] = ((o_utf8Value[i] & 0x0f) << 12) | ((o_utf8Value[i + 1] & 0x3f) << 6) | (o_utf8Value[i + 2] & 0x3f);
			i += 3;
		}
		else if (i_utf8Code[i] & 0xc0 == 0xc0)
		{
			o_utf8Value[j] = ((o_utf8Value[i] & 0x1f) << 6) |
				(o_utf8Value[i + 1] & 0x3f);
			i += 2;
		}
		else
		{
			o_utf8Value[j] = o_utf8Value[i];
			i += 1;
		}
		j++;
	}
}

int main()
{
	const char* filePath = "C:\\Users\\hieut\\Desktop\\Unicode.txt";

	string line;
	ifstream myfile(filePath);
	if (myfile.is_open())
	{
		while (myfile.good())
		{
			getline(myfile, line);
			cout << line << endl;
		}
		myfile.close();
	}

	else cout << "Unable to open file";


	/*unsigned char buffer[100];
	FILE* file = fopen(filePath, "r");

	if (file == NULL)
	{
		return false;
	}

	while (!feof(file))
	{
		if (fgets(buffer, 100, file) == NULL)
			break;

		cout << buffer << endl;
	}*/
	   
	//fclose(file);

	while (true);
	return 0;
}