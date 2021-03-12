#include "Circle.h"

Circle::Circle() {
	radius = 1.0;
}

Circle::Circle(double radius_) {
	radius = radius_;
}

double Circle::getArea() {
	return (3.14 * radius * radius);
}

double Circle::getRadius() {
	return(radius);
}

Circle& Circle::setRadius(double radius) {
	this->radius = radius;
	// return(Circle{ radius }); //单纯返回一个circle对象。
	return(*this); //返回this指针。this指针指向调用该函数的对象本身。
}