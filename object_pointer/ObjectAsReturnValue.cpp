#include "Circle.h"
#include <iostream>



int main_os() {

	Circle c = { 1.0 };
	//此处连续声明了三个Circle对象，其地址值得研究。
	//如果返回时创建了匿名对象，每次返回的匿名对象都是有不同的地址。
	std::cout << c.setRadius(2.0).setRadius(3.0).getArea() << std::endl;

	return(0);
}