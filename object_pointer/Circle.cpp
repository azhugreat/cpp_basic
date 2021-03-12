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
	// return(Circle{ radius }); //��������һ��circle����
	return(*this); //����thisָ�롣thisָ��ָ����øú����Ķ�����
}