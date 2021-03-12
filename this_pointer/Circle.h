#pragma once
class Circle
{
public:
	Circle();
	Circle(double radius) {
	//在类中不应该使用同名参数，除非是函数的参数。
	//否则函数中命名的变量会屏蔽类中的相同类型参数。
		this->radius = radius;//this是c++内建指针，是指向当前类实例成为的对象的指针。
	}
	/*
	* 另一种更好的方法是把形式参数的名和数据成员的名不同，结尾添加下划线后缀。
	* 老的编码规范是让类的数据添加前置或后置的下划线。
	*/
	Circle(int radius_) {
		radius = (double)radius_;

	}

private:
	double radius;

public:
	void setRadius(double);

};

