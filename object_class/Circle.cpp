#include "Circle.h"
#include <iostream>





/*
	����ͬ����public���������캯����
	���캯������û�в�����Ҳ����ͨ����ͬ���������ء�
	�ú���û�з���ֵ��
	�ú����ᱻ�Զ����á�
	һ������Բ������������캯���������������ṩһ���޲�����Ĭ�Ϲ��캯����
	�ú�����Ӧ������Ϊinline��
*/
Circle::Circle() {
	// radius Ӧ����double�������޷���ֵ��
	radius = 1.0;
}

Circle::Circle(double radius_) {
	this->radius = radius_;

}

/*
	.get_area()Ϊʵ��������
	���һ������������������ʵ�֣���ô���Զ���һ����������������inline��
	�������� inline fn
*/
double Circle::getArea() {
	/*
		����ֵ��Ҫ��С�����ڰ���������
	*/
	return (radius * radius);
}



/*
* �ú�����������������
*/
double Circle::getRadius() {
	return (radius);
}

/*
* �ú���������������ʹ��inline��ʶ����
*/
inline double Circle::getType() {
	return (radius);
}




/*
	��C++�е�struct��class�ǿ����໥�Ի�ʹ�õġ�
	Ψһ����������class��ĺ�����������Ҫpublic�����ſ��Ա������ʡ�
*/

/*
	�ֲ����Ƕ���ࡣ
	�ֲ������ں����ж�����ࡣ
	�����ں����С�
	Ƕ�����������ж�����ࡣ
	��java�и�������ʹ��Ƕ���ࡣ
*/

void f() {

	class c {
		// ����һ��Ƕ���ࡣ
	};
}

