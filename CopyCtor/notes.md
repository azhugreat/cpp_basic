# Copy Constructor  拷贝构造函数
 


## 拷贝构造：
- 用一个对象初始化另一个同类对象.
- 拷贝构造函数可以简写为cp ctor。
- 声明拷贝构造函数：
```cpp
// 给定同类型对象的引用，后面可以有构造参数。
Circle (Circle&);
Circle (const Circle&);
```
```cpp
class X {  //来自C++11标准: 12.8节
// 带有额外的默认参数的拷贝构造函数
public:
  X(const X&, int = 1);
};
X b(a, 0); // calls X(const X&, int);
X c = b;   // calls X(const X&, int);
```

- 调用拷贝构造函数:
Circle c1( 5.0 );	//构造原对象
Circle c2( c1 );    //cpp03 直接使用c1做参数。
Circle c3 = c1;     //cpp03 在c3（新对象）定义的时候使用等号调用cpfn，而非赋值。
Circle c4 = { c1 }; //cpp11 
Circle c5{ c1 };    //cpp11

- 如果两个对象obj1和obj2已经定义则 **obj1 = obj2;** 不是调用拷贝构造函数，而是对象赋值。
- 在 **AClass aObject = bObject**;   // bObject也是AClass类型的对象    
中，虽然有“等号（=）”，但由于是在定义对象的时候“赋值”，此时的“等号（=）”被解释为初始化，需要调用拷贝构造函数。

 
## 隐式声明的拷贝构造函数

- 一般情况下，如果程序员不编写拷贝构造函数，那么编译器会自动生成一个.
- 自动生成的拷贝构造函数叫做“隐式声明/定义的拷贝构造函数”.
- 隐式声明的copy ctor简单地将作为参数的对象中的每个数据域复制到新对象中.

 TODO：https://www.icourse163.org/learn/BUPT-1003564002?tid=1461043448#/learn/content?type=detail&id=1237770687&cid=1257884591

 

