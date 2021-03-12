

//布尔变量、布尔函数的命名应该以is开头，或者can。

class Circle {
//数据成员的作用域为整个类内的所有函数。
//数据成员和函数的声明顺序不受限制。
public:
	Circle();
	Circle(double);
	double getArea();

private:
	double radius;

public:
	double getRadius();
	void setRadius(double);

};
