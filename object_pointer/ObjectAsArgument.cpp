#include "Circle.h"
#include <iostream>

//����һ��������������������û���ԭ��������������ͬ�ģ���˲������֡�
//Ҫ�����ֶ��ߣ�ֻ�ܱ���һ����
/*
void print(Circle c) {//��Ҫ�βε�ʵ�ε�ת�䣬��Ҫ������
	std::cout << c.getArea() << std::endl;
}
*/


void print(Circle& c) {//���追����������Ը�һ�㡣
	std::cout << c.getArea() << std::endl;
}

void print(Circle* c) {
	std::cout << c->getArea() << std::endl;
}

int main_op() {
	//��ʼ�����������ʱ������auto�Զ��Ƶ����͡�
	Circle ca[] = { 1.0,2.0,3.0 };
	print(ca[1]);
	print(ca[2]);
	print(ca + 2);//c���Ե���������ָ���������

	return (0);
}
