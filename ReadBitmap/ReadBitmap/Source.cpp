#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct BitmapHeader
{
	char          m_type[2]; //m_type : Kiểu file (File bitmap thì sẽ có giá trị BM)
	unsigned char m_size[4]; //m_size : Kích thước của file (byte)
	unsigned char m_reserved1[2]; //m_reserved : Phần dự trữ, có giá trị được quyết định bởi phần mềm tạo ra file bitmap
	unsigned char m_reserved2[2]; //m_reserved : Phần dự trữ, có giá trị được quyết định bởi phần mềm tạo ra file bitmap
	unsigned char m_data_offset[4]; //m_data_offset : offset của dữ liệu của hình ảnh (Tính từ vị trí bắt đầu của file bitmap là 0)
};

struct BitmapInformation
{
	unsigned char m_size[4]; //m_size: Kích thước của struct (khác nhau với các cấu trúc Information)
	unsigned char m_width[4]; //m_width, m_height: Chiều dài và chiều rộng của bức ảnh (tính theo pixel)
	unsigned char m_height[4];
	unsigned char m_planes[2]; //m_planes: Đối với bitmap, giá trị buộc phải bằng 1
	unsigned char m_bit_depth[2]; //m_bit_depth: Độ sâu màu của hình ảnh, thông dụng có giá trị 24 (8bit cho mỗi mỗi kênh R-G-B)
	unsigned char m_compression_type[16]; //m_compression_type: Kiểu nén của ảnh
	unsigned char m_color_used[4]; //m_color_used: Số màu có trong color table (Thường là 0 do color table không được sử dụng)
	unsigned char m_color_important[4]; //m_color_important: Số index cần để hiện thị hình ảnh (Đối với index color table)
};

bool LoadBitmap(const char* filePath, BitmapHeader & header, BitmapInformation & _information, char* & data)
{
	FILE* _imageFile = fopen(filePath, "rb");

	if (_imageFile == nullptr)
	{
		return false;
	}

	fread(&header, sizeof(BitmapHeader), sizeof(char), _imageFile);
	fread(&_information, sizeof(BitmapInformation), sizeof(char), _imageFile);

	int width = *(int*)_information.m_width;
	int height = *(int*)_information.m_height;
	int bitdepth = *(int*)_information.m_bit_depth;
	int data_offset = *(int*)header.m_data_offset;

	int _rowSize = (bitdepth * width + 31) / 32 * 4;

	if (data != nullptr)
	{
		delete[] data;
		data = nullptr;
	}
	data = new char[_rowSize * height];

	fseek(_imageFile, data_offset, SEEK_SET);
	fread(data, _rowSize * height, sizeof(char), _imageFile);
	fclose(_imageFile);
	return true;
}

void saveImage(const char * _filePath, BitmapHeader & _header, BitmapInformation & _information, const unsigned char * _data)
{
	int _width = *(int*)_information.m_width;
	int _height = *(int*)_information.m_height;
	int _bitdepth = *(int*)_information.m_bit_depth;
	int _offset = *(int*)_header.m_data_offset;

	FILE * _imageFile = fopen(_filePath, "wb");

	fwrite(&_header, sizeof(BitmapHeader), sizeof(char), _imageFile);
	fwrite(&_information, sizeof(BitmapInformation), 1, _imageFile);

	int _rowSize = (_bitdepth * _width + 31) / 32 * 4;

	fseek(_imageFile, _offset, SEEK_SET);
	fwrite(_data, _rowSize * _height, sizeof(char), _imageFile);
	fclose(_imageFile);
}

int main()
{
	const char* path = "D:\\C\\C-Study\\Image\\STDIOIoT.bmp";
	BitmapHeader header;
	BitmapInformation information;
	char* data = NULL;
	bool load = LoadBitmap(path, header, information, data);
	printf("%d", load);
	while (true);
	return 0;
}