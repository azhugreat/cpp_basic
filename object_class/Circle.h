#pragma once //C++03中的防止头文件多次包含的方法。 #pragma是一个编译预处理指令。

// _Pragma("once")  //C++11中的防止头文件多次包含的方法。_Pragma是一个运算符，可以在宏里使用。
// __pragma("once") //微软的要求。

//#ifndef CIRCLE_H  // if not define 这个宏，则定义该宏。
//#define CIRCLE_H  // 然后再初始化该类。


/*
在.h 文件中定义了类中的所有变量和函数。
*/
class Circle {

private:
	/*
	* radius为实例变量。
	* 非静态的数据成员不可以在类外定义。
	* 内联声明仅适用于函数内部。
	*/
	double  radius = 1.0 ;
public:
	Circle();
	Circle(double radius_);
	double getArea();
	/*
	该函数没在类声明中实现，也不是内联函数。
*/


	double getRadius();
/*
	该函数没在类声明中实现，但是仍然属于内联函数。
	而且也要在class声明中出现。
*/
	double getType();
};

//#endif