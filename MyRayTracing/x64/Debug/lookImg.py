from PIL import Image
img = Image.open('image.ppm')
img.save('image.bmp')
img.show()