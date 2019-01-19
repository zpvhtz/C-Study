#include "STDIOCoreRuntime.h"

void STDIOVisionMinMaxRange(double* min, double* max, double* init)
{
	*min = 0.0;
	*max = 255;
	*init = 1;
}

void STDIOVisionProcess(int width, int height, int byte_per_pixel, byte*& data, double value)
{
	printf("STDIO DEBUG");
	//GrayscaleImage(width, height, byte_per_pixel, data, value);
	DecreaseOpacityOfHalfImage(width, height, byte_per_pixel, data, value);
	//IncreaseBrightnessArtOfImage(width, height, byte_per_pixel, data, value);
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
}

void ReplaceAnAreaOfImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
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
}

void CompressImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
}

void DecompressImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
}

void SimpleEncryptImage(int width, int height, int byte_per_pixel, byte*& data, double value)
{
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