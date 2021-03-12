#include "Circle.h"
#include <iostream>

int main() {
	/*
		是构造函数。
		创建对象的方法，无参数的时候使用默认无参函数；
	*/
	Circle circle1;

	/*
		调用构造函数初始化。
		不推荐使用这种初始化方式。
	*/
	Circle circle0(5.0);
	/*
		使用大括号进行列表初始化来给定参数值。
		使用大括号包含值这种方法来进行窄化检查。
		当宽窄类型进行隐式类型变换的时候更安全。

		直接列表初始化。
	*/
	Circle circle2{ 20.0 };

	/*
		拷贝列表初始化。
	*/
	Circle circle3 = { 30.0 };

	/*
		匿名对象初始化。
		创建一个不需要名称的对象，通常只需要调用其中的一个方法。
	*/
	auto circle5 = Circle{ 2.0 };

	/*
		成员copy。
		默认为逐个数据域成员进行复制，函数不会复制。
		结果是两个独立的相同对象。
	*/
	Circle circle4 = circle3;

	/*
		使用点运算符作为可访问对象成员的访问运算符。
	*/
	// circle1.radius = 10;
	std::cout << circle1.getArea() << std::endl;
	std::cout << circle2.getArea();

	return 0;
}
