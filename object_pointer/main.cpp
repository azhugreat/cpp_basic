#include "Circle.h"
#include <iostream>


int test_object_pionter() {
	//����ָ�����ָ����new�����Ķ���
	Circle* c1 = new Circle{ 1.0 };
	// auto c1 = new Circle{ 1.0 }; //auto����auto* ����Ҳ�ǿ��Եġ���ʱc1����ʼ����ȷ��
	Circle c3 = Circle{ 2.0 };
	Circle* c2 = &c3;


	//��ͷ����� -> ����ָ����ʶ����Ա
	std::cout << c1->getArea() << std::endl;
	std::cout << (*c1).getArea() << std::endl;//c1Ҫ���������òſ������ӵ��������
	std::cout << c2->getArea() << std::endl;

	Circle ca1[10]; //ֱ�������������顣

	Circle ca2[3] = { //ʹ�����������б���г�ʼ�����顣
		Circle{3},
		Circle{ },
		Circle{5} };

	/*
	* ��ʽ�������������ʼ��������ʼ��һ���������顣
	*/
	Circle ca3[3] = { 2.0, {}, 5.0 };//copy list init�� �����ſ��Ա�������Ĭ�Ϲ��췽����
	Circle ca4[3]{ 2.0, {}, 5.0 }; // list init

	// �ں����������Ķ�����ջ�ϴ���,�������أ����������
	// Ϊ���������������new������ڶ��ϴ�����
	// �������ʱ����̬���󣨺����д����ģ��ᱻ���٣�������delete��ʽ����
	auto c5 = new Circle[3]{ 1.0, 2.0, 3.0 };
	for (int i = 0; i < 3; i++) {
		std::cout << c5[i].getArea() << std::endl;
	}
	delete c1;
	delete[] c5; //��ɾ��һ���б����Ķ�ʱ��ǰ��ҲҪ���������š�
	c1 = c5 = nullptr;
	delete c1; //��c++��ɾ��һ����ָ�벻�ᱨ��


	auto p1 = new Circle[3]; //ʹ��new�����ڶ��ϴ������ں�������ʵĶ���
	auto* p2 = new Circle[3]{ 3.1, {}, 5.0 }; //��ʽ�������������ʼ��������ʼ��һ���������顣
	delete[] p1; //�ڴ�黹����ϵͳ��
	delete[] p2;
	p1 = p2 = nullptr; //�����delete�������ϵͳ����free�ⲿ���ڴ棬�ڴ�ͱ��˷ѡ�

	return 0;
}

int main() {

	return test_object_pionter();
}