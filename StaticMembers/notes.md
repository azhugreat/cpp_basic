# 实例成员与静态成员
## 声明或定义静态成员
- 静态成员的声明：  
在类定义中，关键字 **static** 声明不绑定到类实例的成员；  
该成员可以通过类访问，而无需对象。
 
- 静态数据成员的定义：
    - 声明为**constexpr**类型的静态数据成员必须在类中**声明并初始化**。自C++17 起，可不在类外**定义**。
    - 声明为“inline”(C++17 起) 或者 “const int”  类型的静态数据成员可以 在类中声明 并初始化；
    - 其它须在类外定义并初始化，且不带static 关键字。
    - 我们一般情况下只要在类外定义静态成员就不会出错。  
- 参考： https://en.cppreference.com/w/cpp/language/static

## Static member (静态成员)
- 静态数据成员具有静态存储期，或者C++11线程存储期特性。
- 静态存储期： 对象的存储在程序开始时分配，而在程序结束时解回收。
    - 只存在对象的一个实例
    - 静态存储器对象未明确初始化时会被自动“零初始化”
- 实例成员和静态成员的异同：
    - 每个对象中都有各自的side成员。这个side私有变量就叫做实例成员。
    - numberOfObjects只存在一个，是由所有的Square对象共享的，叫做静态成员。
    
```cpp
class Square {
private:
  double side;
    //此处在类内声明了该静态成员。
  static int numberOfObjects;
public:
  Square():Square(1.0){
  }
  Square(double side){
    this->side = side;
    numberOfObjects++;
  }
};

// 此处静态数据成员会被编译器自动初始化为0。
// 此处为在类外定义的数据成员。
// 保存在堆中（全局变量、静态变量保存区）
int Square::numberOfObjects;

int main() {
    Square s1{}, s2{5.0};
}
```

TODO: code in https://www.icourse163.org/learn/BUPT-1003564002?tid=1461043448#/learn/content?type=detail&id=1237770686&cid=1257884578&replay=true