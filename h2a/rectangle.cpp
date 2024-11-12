#include "rectangle.h"

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

double Rectangle::getArea() const
{
    double area = width * height;
    return area;
}

double Rectangle::getCircum() const
{
    double circum = 2 * (width + height);
    return circum;
}

Rectangle::Rectangle() {}
