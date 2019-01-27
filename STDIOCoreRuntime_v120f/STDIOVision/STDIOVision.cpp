#include "STDIOCoreRuntime.h"

void STDIOVisionMinMaxRange(double* min, double* max, double* init)
{
	*min = 0.0;
	*max = 255;
	*init = 1;
}

void STDIOVisionProcess(int width, int height, int byte_per_pixel, byte*& data, double value)
{
	SimpleEncryptImage(width, height, byte_per_pixel, data, value);
}

void BGR888ToBGR565(unsigned char* color565, const unsigned char* color888)
{
	
}

void ByteArrayToInteger(int des, const unsigned char* src)
{
	des = src[3];
	des = des | (src[2] << 8);
	des = des | (src[1] << 16);
	des = des | (src[0] << 24);

	printf("DES: %x\n", des);
	printf("SRC: %x %x %x %x", src[0], src[1], src[2], src[3]);
}

void IntegerToByteArray(unsigned int des, unsigned char* src)
{
	src[0] = des >> 24;
	src[1] = des >> 16; //(des & 0x00ff0000) >> 16;
	src[2] = des >> 8; //(des & 0x0000ff00) >> 8;
	src[3] = des;

	printf("DES: %x\n", des);
	printf("SRC: %x %x %x %x", src[0], src[1], src[2], src[3]);
}

void GrayscaleImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
}

void IncreaseBrightnessOfImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
	int X = 0, Y = 1, W = 200, H = 150;

	// Rectangle: X, Y, W, H
	int rect[4] = { 100, 100, 200, 150 };

	// Recompute rectangle
	if (rect[X] < 0)
		rect[X] = 0;
	if (rect[X] + rect[W] > width)
		rect[W] = width - rect[X];
	if (rect[Y] < 0)
		rect[Y] = 0;
	if (rect[Y] + rect[H] > height)
		rect[H] = height - rect[Y];

	int index = 0;
	int component = 0;

	for (int r = rect[Y]; r < rect[Y] + rect[H]; r++)
	{
		for (int c = rect[X]; c < rect[X] + rect[W]; c++)
		{
			index = (r * width + c) * byte_per_pixel;

			component = *(data + index + 0) * value;
			*(data + index + 0) = component > 255 ? 255 : component;

			component = *(data + index + 1) * value;
			*(data + index + 1) = component > 255 ? 255 : component;

			component = *(data + index + 2) * value;
			*(data + index + 2) = component > 255 ? 255 : component;
		}
	}
}

void IncreaseBrightnessArtOfImage(int width, int height, int byte_per_pixel, byte* &data, double value)
{
	double bright_1 = value;
	int resolution = width * height;
	for (int row = 0; row < height; row++)
	{
		for (int col = 0; col < width; col++)
		{
			int index = (row * width + col) * byte_per_pixel;

			if (col < width / 8)
			{
				*(data + index + 1) = *(data + index + 1) * value > 255 ? 255 : *(data + index + 1) * value;
				*(data + index + 2) = *(data + index + 2) * value > 255 ? 255 : *(data + index + 2) * value;
				*(data + index + 3) = *(data + index + 3) * value > 255 ? 255 : *(data + index + 3) * value;
			}
			else if (col < width / 4)
			{
				*(data + index + 1) = *(data + index + 1) * (value - 0.2) > 255 ? 255 : *(data + index + 1) * (value - 0.2);
				*(data + index + 2) = *(data + index + 2) * (value - 0.2) > 255 ? 255 : *(data + index + 2) * (value - 0.2);
				*(data + index + 3) = *(data + index + 3) * (value - 0.2) > 255 ? 255 : *(data + index + 3) * (value - 0.2);
			}
			else if (col < width / 2)
			{
				*(data + index + 1) = *(data + index + 1) * (value - 0.4) > 255 ? 255 : *(data + index + 1) * (value - 0.4);
				*(data + index + 2) = *(data + index + 2) * (value - 0.4) > 255 ? 255 : *(data + index + 2) * (value - 0.4);
				*(data + index + 3) = *(data + index + 3) * (value - 0.4) > 255 ? 255 : *(data + index + 3) * (value - 0.4);
			}
		}
	}
}

void IncreaseContrastOfImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
}

void BoundingBoxImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
	int borderWidth = (int)value;

	byte color[3] = { 0, 136, 255 };

	int index = 0;

	// ooooo
	// x   x
	// ooooo
	for (int r = 0; r < borderWidth; r++)
	{
		for (int c = 0; c < width; c++)
		{
			index = (r * width + c) * byte_per_pixel;
			*(data + index + 0) = color[0];
			*(data + index + 1) = color[1];
			*(data + index + 2) = color[2];

			index = ((height - r - 1) * width + c) * byte_per_pixel;
			*(data + index + 0) = color[0];
			*(data + index + 1) = color[1];
			*(data + index + 2) = color[2];
		}
	}

	// oxxxo
	// o   o
	// oxxxo
	for (int r = 0; r < height; r++)
	{
		for (int c = 0; c < borderWidth; c++)
		{
			index = (r * width + c) * byte_per_pixel;
			*(data + index + 0) = color[0];
			*(data + index + 1) = color[1];
			*(data + index + 2) = color[2];

			index = (r * width + (width - c - 1)) * byte_per_pixel;
			*(data + index + 0) = color[0];
			*(data + index + 1) = color[1];
			*(data + index + 2) = color[2];
		}
	}
}

void DecreaseOpacityOfHalfImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
	for (int row = 0; row < height; row++)
	{
		for (int col = width / 2; col < width; col++)
		{
			int index = (row * width + col) * byte_per_pixel;

			*(data + index + 3) = (*(data + index + 3) * (255 - value)) / 255;
		}
	}
}

void SplitingAndSortingImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
	int index[4] = { 0 };
	byte component = 0;

	int halfWidth = width / 2;
	int halfHeight = height / 2;

	for (int r = 0; r < halfHeight; r++)
	{
		for (int c = 0; c < halfWidth; c++)
		{
			index[0] = (r * width + c) * byte_per_pixel;
			index[1] = ((r + height / 2) * width + c) * byte_per_pixel;
			index[2] = ((r + height / 2) * width + c + width / 2) * byte_per_pixel;
			index[3] = (r * width + c + width / 2) * byte_per_pixel;

			for (int i = 0; i < byte_per_pixel; i++)
			{
				component = *(data + index[0] + i);
				*(data + index[0] + i) = *(data + index[1] + i);
				*(data + index[1] + i) = *(data + index[2] + i);
				*(data + index[2] + i) = *(data + index[3] + i);
				*(data + index[3] + i) = component;
			}
		}
	}	
}

void BlendingAreasOfImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
	int X = 0, Y = 1, W = 2, H = 3;

	int square[4] = { 100, 100, 100, 100 };

	if (square[X] < 0)
		square[X] = 0;
	if (square[X] + square[W] > width)
		square[W] = width - square[X];
	if (square[Y] < 0)
		square[Y] = 0;
	if (square[Y] + square[H] > height)
		square[H] = height - square[Y];

	byte* layer = new byte[width * height * 4];
	
	for (int index = 0; index < width * height; index++)
	{
		int i = index * 4;

		int r = index / width;
		int c = index % width;

		*(layer + i + 0) = 0;
		*(layer + i + 1) = 0;
		*(layer + i + 2) = 255;

		if (c < square[X] ||
			c > square[X] + square[W] ||
			r < square[Y] ||
			r > square[Y] + square[H])
			*(layer + i + 3) = (int)value;
		else
			*(layer + i + 3) = 0;
	}

	printf("Alpha: %d\n", (int)value);

	int iData;
	int iLayer;
	int alpha;

	for (int index = 0; index < width * height; index++)
	{
		iData = index * byte_per_pixel;
		iLayer = index * 4;

		alpha = layer[iLayer + 3];

		data[iData + 0] = (data[iData + 0] * (255 - alpha) + layer[iLayer + 0] * alpha) / 255;
		data[iData + 1] = (data[iData + 1] * (255 - alpha) + layer[iLayer + 1] * alpha) / 255;
		data[iData + 2] = (data[iData + 2] * (255 - alpha) + layer[iLayer + 2] * alpha) / 255;
	}

	delete layer;
}

void ReplaceAnAreaOfImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
	/*int X = 0, Y = 1, W = 2, H = 3;

	int square[4] = { 100, 100, 100, 100 };

	if (square[X] < 0)
		square[X] = 0;
	if (square[X] + square[W] > width)
		square[W] = width - square[X];
	if (square[Y] < 0)
		square[Y] = 0;
	if (square[Y] + square[H] > height)
		square[H] = height - square[Y];

	byte* layer = new byte[square[W] * square[H] * 4];
	int pos = 0;

	for (int row = square[Y]; row < square[Y] + square[H]; row++)
	{
		for (int col = square[X]; col < square[X] + square[W]; col++)
		{
			int index = (row * width + col) * 4;
			*(layer + pos + 0) = *(data + index + 0);
			*(layer + pos + 1) = *(data + index + 1);
			*(layer + pos + 2) = *(data + index + 2);
			*(layer + pos + 3) = *(data + index + 3);
			
			if (*(data + index + 3) >= 0 && *(data + index + 3) <= 255)
			{
				*(layer + pos + 3) = *(data + index + 3);
			}
			else
			{
				*(layer + pos + 3) = 0;
			}

			pos++;
		}
	}

	pos = 0;

	int newPosition[2] = { 200, 200 };
	for (int row = newPosition[Y]; row < newPosition[Y] + square[H]; row++)
	{
		for (int col = newPosition[X]; col < newPosition[X] + square[W]; col++)
		{
			int index = (row * width + col) * 4;
			*(data + index + 0) = *(layer + pos + 0);
			*(data + index + 1) = *(layer + pos + 1);
			*(data + index + 2) = *(layer + pos + 2);
			*(data + index + 3) = *(layer + pos + 3);
			pos++;
		}
	}

	delete layer;*/

	int X = 0, Y = 1, W = 2, H = 3;
	int rect[4] = { 100, 100, 100, 100 };

	if (rect[X] < 0)
		rect[X] = 0;
	if (rect[X] + rect[W] > width)
		rect[W] = width - rect[X];
	if (rect[Y] < 0)
		rect[Y] = 0;
	if (rect[Y] + rect[H] > height)
		rect[H] = height - rect[Y];

	int dataIndex = 0;
	int tempIndex = 0;

	byte* imgTemp = new byte[rect[W] * rect[H] * byte_per_pixel];

	for (int r = 0; r < rect[H]; r++)
	{
		for (int c = 0; c < rect[W]; c++)
		{
			tempIndex = (r * rect[W] + c) * byte_per_pixel;
			dataIndex = ((r + rect[Y]) * width + c + rect[X]) * byte_per_pixel;

			*(imgTemp + tempIndex + 0) = *(data + dataIndex + 0);
			*(imgTemp + tempIndex + 1) = *(data + dataIndex + 1);
			*(imgTemp + tempIndex + 2) = *(data + dataIndex + 2);
			if (byte_per_pixel == 4)
				*(imgTemp + tempIndex + 3) = *(data + dataIndex + 3);
		}
	}

	int newPosition[2] = { 200, 200 };

	for (int r = 0; r < rect[H]; r++)
	{
		for (int c = 0; c < rect[W]; c++)
		{
			tempIndex = (r * rect[W] + c) * byte_per_pixel;
			dataIndex = ((r + newPosition[Y]) * width + c + newPosition[X]) * byte_per_pixel;

			*(data + dataIndex + 0) = *(imgTemp + tempIndex + 0);
			*(data + dataIndex + 1) = *(imgTemp + tempIndex + 1);
			*(data + dataIndex + 2) = *(imgTemp + tempIndex + 2);
			if (byte_per_pixel == 4)
				*(data + dataIndex + 3) = *(imgTemp + tempIndex + 3);
		}
	}

	delete[] imgTemp;

}

void FlipAnAreaOfImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
}

void ZoomOutAnAreaOfImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
}

void ZoomInAndBlendingImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
}

void InvertImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
	for (int row = 0; row < height; row++)
	{
		for (int col = 0; col < width; col++)
		{
			int index = (row * width + col) * byte_per_pixel;
			*(data + index + 0) = ~*(data + index + 0);
			*(data + index + 1) = ~*(data + index + 1);
			*(data + index + 2) = ~*(data + index + 2);
		}
	}
}

void CompressImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
}

void DecompressImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
}

void SimpleEncryptImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
	int resolution = width * height;
	int i = 0;

	byte color[3] = { 0, 136, 255 };

	for (int index = 0; index < resolution; index++)
	{
		i = index * byte_per_pixel;

		*(data + i + 0) = *(data + i + 0) ^ color[0];
		*(data + i + 1) = *(data + i + 1) ^ color[1];
		*(data + i + 2) = *(data + i + 2) ^ color[2];
	}
}

void BlurImage(int width, int height, int byte_per_pixel, byte* &data, double value)
{
}

void MotionBlurImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
}

void BloomImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
}

void CCBlurImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
}

void CCBloomImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
}

void EdgeImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
}

void MakeHalfImageTransparent(int width, int height, int byte_per_pixel, byte*& data, double value)
{
}

void FlipAnImageHorizontal(int width, int height, int byte_per_pixel, byte*& data, double value)
{
}

void FlipAnImageVertical(int width, int height, int byte_per_pixel, byte*& data, double value)
{
}

void CompressImageTo16bit(int width, int height, int byte_per_pixel, byte*& data, double value)
{
}

void SoftlightImage(int width, int height, int byte_per_pixel, byte *& data, double value)
{
}