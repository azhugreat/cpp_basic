#ifndef CIRCLE_H  // if not define ����꣬����úꡣ
#define CIRCLE_H  // Ȼ���ٳ�ʼ�����ࡣ


/*
��.h �ļ��ж��������е����б����ͺ�����
*/
class Circle {
private:
	double  radius;
public:
	Circle();
	Circle(double radius_);
	double getArea();
	double getRadius();
	Circle& setRadius(double radius);
};

#endif