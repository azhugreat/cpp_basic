// ��C++�ı�׼���ļ���β������.h��
#include<iostream>

/*
	namespace ���޶�ĳЩ������������������
	ʹ��using�Ѹ������ռ��е����з��ţ����������������뵱ǰ����
	���ַ����������롣
*/
using namespace std;

/*
	����ȫ�����뷽����Ҳ���԰�����std���ڳ�����д�ϡ�
*/
using std::cout;
using std::cin;

// main�������벻���κ������ռ��ڡ�
int main() { // This is main fn.
	// ͨ������������Ǵ�������ȡ�����ַ��������ַ���
	// cin/cout �������������к������롢���������
	cout << "Aloha, world" << endl; //���������� << �� ��ĩ��ʶ�� endl��

	std::cout << "Enter anything to close." << endl;
	cin.get();

	// ���û��ָ������ֵ �򷵻�int��
	return 0;
}