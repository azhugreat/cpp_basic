#pragma once
class Circle
{
public:
	Circle();
	Circle(double radius) {
	//�����в�Ӧ��ʹ��ͬ�������������Ǻ����Ĳ�����
	//�������������ı������������е���ͬ���Ͳ�����
		this->radius = radius;//this��c++�ڽ�ָ�룬��ָ��ǰ��ʵ����Ϊ�Ķ����ָ�롣
	}
	/*
	* ��һ�ָ��õķ����ǰ���ʽ�������������ݳ�Ա������ͬ����β����»��ߺ�׺��
	* �ϵı���淶��������������ǰ�û���õ��»��ߡ�
	*/
	Circle(int radius_) {
		radius = (double)radius_;

	}

private:
	double radius;

public:
	void setRadius(double);

};

