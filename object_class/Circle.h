#pragma once //C++03�еķ�ֹͷ�ļ���ΰ����ķ����� #pragma��һ������Ԥ����ָ�

// _Pragma("once")  //C++11�еķ�ֹͷ�ļ���ΰ����ķ�����_Pragma��һ��������������ں���ʹ�á�
// __pragma("once") //΢���Ҫ��

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
	double get_area();
};

#endif