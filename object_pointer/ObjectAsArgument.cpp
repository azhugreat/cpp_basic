#include "Circle.h"
#include <iostream>

//对于一个函数来讲传入的是引用还是原函数的声明是相同的，因此不能区分。
//要想区分二者，只能保留一个。
/*
void print(Circle c) {//需要形参到实参的转变，需要拷贝。
	std::cout << c.getArea() << std::endl;
}
*/


void print(Circle& c) {//无需拷贝，性能相对高一点。
	std::cout << c.getArea() << std::endl;
}

void print(Circle* c) {
	std::cout << c->getArea() << std::endl;
}

int main_op() {
	//初始化对象数组的时候不能用auto自动推导类型。
	Circle ca[] = { 1.0,2.0,3.0 };
	print(ca[1]);
	print(ca[2]);
	print(ca + 2);//c语言的针对数组的指针运算符。

	return (0);
}
