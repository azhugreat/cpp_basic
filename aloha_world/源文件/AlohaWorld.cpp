// 在C++的标准库文件结尾不包含.h。
#include<iostream>

/*
	namespace 来限定某些函数、变量的作用域。
	使用using把该命名空间中的所有符号（变量、函数）引入当前程序。
	这种方法并不理想。
*/
using namespace std;

/*
	更安全的引入方法。也可以把所有std均在程序中写上。
*/
using std::cout;
using std::cin;

// main函数必须不在任何命名空间内。
int main() { // This is main fn.
	// 通过运算符重载是从流中提取出来字符、插入字符。
	// cin/cout 都是流对象。其中含有输入、输出函数。
	cout << "Aloha, world" << endl; //流输出运算符 << ， 行末标识符 endl。

	std::cout << "Enter anything to close." << endl;
	cin.get();

	// 如果没有指定返回值 则返回int。
	return 0;
}