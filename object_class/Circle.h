#pragma once //C++03�еķ�ֹͷ�ļ���ΰ����ķ����� #pragma��һ������Ԥ����ָ�

// _Pragma("once")  //C++11�еķ�ֹͷ�ļ���ΰ����ķ�����_Pragma��һ��������������ں���ʹ�á�
// __pragma("once") //΢���Ҫ��

//#ifndef CIRCLE_H  // if not define ����꣬����úꡣ
//#define CIRCLE_H  // Ȼ���ٳ�ʼ�����ࡣ


/*
��.h �ļ��ж��������е����б����ͺ�����
*/
class Circle {

private:
	/*
	* radiusΪʵ��������
	* �Ǿ�̬�����ݳ�Ա�����������ⶨ�塣
	* ���������������ں����ڲ���
	*/
	double  radius = 1.0 ;
public:
	Circle();
	Circle(double radius_);
	double getArea();
	/*
	�ú���û����������ʵ�֣�Ҳ��������������
*/


	double getRadius();
/*
	�ú���û����������ʵ�֣�������Ȼ��������������
	����ҲҪ��class�����г��֡�
*/
	double getType();
};

//#endif