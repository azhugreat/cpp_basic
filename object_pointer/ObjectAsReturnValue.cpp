#include "Circle.h"
#include <iostream>



int main_os() {

	Circle c = { 1.0 };
	//�˴���������������Circle�������ֵַ���о���
	//�������ʱ��������������ÿ�η��ص������������в�ͬ�ĵ�ַ��
	std::cout << c.setRadius(2.0).setRadius(3.0).getArea() << std::endl;

	return(0);
}