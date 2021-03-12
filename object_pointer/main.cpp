#include "Circle.h"
#include <iostream>


int test_object_pionter() {
	//对象指针可以指向用new创建的对象。
	Circle* c1 = new Circle{ 1.0 };
	// auto c1 = new Circle{ 1.0 }; //auto或者auto* 类型也是可以的。此时c1类型始终正确。
	Circle c3 = Circle{ 2.0 };
	Circle* c2 = &c3;


	//箭头运算符 -> ：用指针访问对象成员
	std::cout << c1->getArea() << std::endl;
	std::cout << (*c1).getArea() << std::endl;//c1要先做解引用才可以链接点运算符。
	std::cout << c2->getArea() << std::endl;

	Circle ca1[10]; //直接声明对象数组。

	Circle ca2[3] = { //使用匿名对象列表进行初始化数组。
		Circle{3},
		Circle{ },
		Circle{5} };

	/*
	* 隐式调用匿名对象初始化方法初始化一个对象数组。
	*/
	Circle ca3[3] = { 2.0, {}, 5.0 };//copy list init， 大括号可以表明调用默认构造方法。
	Circle ca4[3]{ 2.0, {}, 5.0 }; // list init

	// 在函数中声明的对象都在栈上创建,函数返回，则对象被销毁
	// 为保留对象，你可以用new运算符在堆上创建它
	// 程序结束时，动态对象（函数中创建的）会被销毁，或者用delete显式销毁
	auto c5 = new Circle[3]{ 1.0, 2.0, 3.0 };
	for (int i = 0; i < 3; i++) {
		std::cout << c5[i].getArea() << std::endl;
	}
	delete c1;
	delete[] c5; //在删除一个列表对象的额时候前面也要加上中括号。
	c1 = c5 = nullptr;
	delete c1; //在c++中删除一个空指针不会报错。


	auto p1 = new Circle[3]; //使用new对象在堆上创建能在函数外访问的对象。
	auto* p2 = new Circle[3]{ 3.1, {}, 5.0 }; //隐式调用匿名对象初始化方法初始化一个对象数组。
	delete[] p1; //内存归还操作系统。
	delete[] p2;
	p1 = p2 = nullptr; //如果不delete，则操作系统不会free这部分内存，内存就被浪费。

	return 0;
}

int main() {

	return test_object_pionter();
}