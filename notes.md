# Destructor 析构函数

- 在对象销毁的时候自动调用，如果没有声明会生成默认析构函数。
- 原型： 
```cpp 
C::~C() 
C::~C() = delete；
C::~C() = default；
```
- 函数无参数。不能重载。也没有返回值。
  - 只能返回已经销毁的对象里的值；
  - 而此时得到的值是没有意义的（原先储存值的内存空间已经被释放了）。

TODO： code in https://www.icourse163.org/learn/BUPT-1003564002?tid=1461043448#/learn/content?type=detail&id=1237770687&cid=1257884582&replay=true

# Friend 友元
## 用途
私有成员无法从类外访问，但有时又需要授权某些可信的函数和类访问这些私有成员。此时引入友元函数和友元类。

## 友元函数和友元类
- 用friend关键字声明友元函数或者友元类。
- 友元的缺点：打破了封装性。
- 一般用于重定义流输出运算符。

```cpp
// Kid类和print函数都可以直接访问Date类中的私有成员

class Date {
private:
  int year{ 2019 } , month{ 1 };
  int day{ 1 };
public:
  // 此处声明而非定义kid类，而且该函数可以被kid对象调用访问Date类的私有变量。
  friend class Kid;
  friend void print(const Date& d);
};
void print(const Date& d) {
  cout << d.year << "/" << d.month 
       << "/" << d.day << endl;
}
```

``` cpp
class Kid {
private:
  Date birthday;
public:
  Kid() { 
    cout << "I was born in " 
         << birthday.year << endl; 
  }
};

int main() {
  print(Date());
  Kid k;
  cin.get();
}
```
 

 

