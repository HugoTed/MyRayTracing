#pragma once
#include <iostream>
#include <fstream>
#include <string>

class Image
{
public:
	Image();
	Image(int image_width, int image_height);
	~Image();
	int image_width = 256;
	int image_height = 256;


private:

};
