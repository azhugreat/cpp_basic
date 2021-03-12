
#include <iostream>

class Circle {
	/*类中的未声明局域变量为全部私有。必须声明。*/
public:
	/*
		radius为实例变量。
	*/
	double radius;

	/*
		与类同名的public函数，构造函数。
		- 构造函数可以没有参数，也可以通过不同参数表重载。
		- 该函数没有返回值。
		- 该函数会被自动调用。
		一个类可以不主动声明构造函数，编译器可以提供一个无参数的默认构造函数。
	*/
	Circle() {
		// radius 应该是double，否则无法赋值。
		radius = 1.0;
	}

	Circle(double r) {
		radius = r;

	}

	/*
		get_area()为实例函数。
		如果一个函数在类声明中有实现，那么它自动是一个内联函数，无需inline。
		内联函数 inline fn
	*/
	double getArea() {
		/*
			返回值需要在小括号内包含起来。
		*/
		return (radius * radius);
	}


};







/*
	在C++中的struct和class是可以相互对换使用的。
	唯一的区别在于class里的函数、变量需要public声明才可以被外界访问。
*/
