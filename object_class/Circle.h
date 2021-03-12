#pragma once //C++03中的防止头文件多次包含的方法。 #pragma是一个编译预处理指令。

// _Pragma("once")  //C++11中的防止头文件多次包含的方法。_Pragma是一个运算符，可以在宏里使用。
// __pragma("once") //微软的要求。

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
	double get_area();
};

#endif