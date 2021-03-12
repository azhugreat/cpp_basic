#include "Circle.h"
#include <iostream>

class Circle{
	/*类中的未声明局域变量为全部私有。必须声明。*/
public:
	/*
		radius为实例变量。
	*/
	double radius;

	/*
		与类同名的public函数，构造函数。
		构造函数可以没有参数，也可以通过不同参数表重载。
		该函数没有返回值。
		该函数会被自动调用。
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
		.get_area()为实例函数。
		如果一个函数在类声明中有实现，那么它自动是一个内联函数，无需inline。
		内联函数 inline fn
	*/
	double get_area() {
		/*
			返回值需要在小括号内包含起来。
		*/
		return (radius * radius);
	}
	/*
	该函数没在类声明中实现，也不是内联函数。
	*/
	double get_radius();

	/*
	该函数没在类声明中实现，但是仍然属于内联函数。
	*/
	double get_type();

private:
	int x = 0;
};

/*
* 该函数不是内联函数。
*/
double Circle::get_radius() {
	return (radius);
}

/*
* 该函数是内联函数，使用inline标识符。
*/
inline double Circle::get_type() {
	return (radius);
}



int main_circle() {
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
	auto circle5 = Circle{ 2. };

	/*
	成员copy。
	默认为逐个数据域成员进行复制，函数不会复制。
	结果是两个独立的相同对象。
	*/
	Circle circle4 = circle3;

	/*
		使用点运算符作为对象成员的访问运算符。
	*/
	circle1.radius = 10;
	std::cout << circle1.get_area() << std::endl;
	std::cout << circle2.get_area();

	return 0;
}

/*
	在C++中的struct和class是可以相互对换使用的。
	唯一的区别在于class里的函数、变量需要public声明才可以被外界访问。
*/

/*
	局部类和嵌套类。
	局部类是在函数中定义的类。
	生存于函数中。
	嵌套类是在类中定义的类。
	在java中更倾向于使用嵌套类。
*/
void f() {

	class c {
		// 这是一个嵌套类。
	};
}