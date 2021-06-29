#include "Image.h"

Image::Image() {

}
Image::Image(int image_width, int image_height) {
	this->image_height = image_height;
	this->image_width = image_width;
}

Image::~Image() {};