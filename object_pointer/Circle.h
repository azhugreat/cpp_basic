#ifndef CIRCLE_H  // if not define 这个宏，则定义该宏。
#define CIRCLE_H  // 然后再初始化该类。


/*
在.h 文件中定义了类中的所有变量和函数。
*/
class Circle {
private:
	double  radius;
public:
	Circle();
	Circle(double radius_);
	double getArea();
	double getRadius();
	Circle& setRadius(double radius);
};

#endif