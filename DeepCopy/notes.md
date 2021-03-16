# Deep Copy 深拷贝

## 浅拷贝和深拷贝

- 浅拷贝：数据域是一个指针，只拷指针的地址，而非指针指向的内容；
    - 创建新对象时，调用类的隐式/默认构造函数；
    - 为已有对象赋值时，使用默认赋值运算符 $ = $；
- 深拷贝：不仅copy地址，还拷贝指针指向的内容；

## 浅拷贝
 
``` cpp
Employee e1{"Jack", Date(1999, 5, 3),  Gender::male};

Employee e2{"Anna", Date(2000, 11, 8), Gender:female};

Employee e3{ e1 };  //cp ctor，执行一对一成员拷贝（指针），属于浅copy。

// e3.birthday指针指向了 e1.birthday所指向的那个Date对象
```

## 定制拷贝构造函数

- 如何深拷贝
    - **自行编写**拷贝构造函数，不使用编译器隐式生成的（默认）拷贝构造函数
    - **重载**赋值运算符，不使用编译器隐式生成的（默认）赋值运算符函数
    
```cpp
class Employee {
public:
  Employee(const Employee &e) = default; //自动定义的浅拷贝ctor
  Employee(const Employee& e){    //手动编写的深拷贝ctor
    // 把数据域中的指针类型的内容（对象），使用新建对象来防止指针赋值。
    // 此时date对象不包含指针类型的私有内容，不会导致浅copy指针的问题。
    birthdate = new Date{ e.birthdate };
  } // ...
}
Employee e1{"Jack", Date(1999, 5, 3), Gender::male};
Employee e2{"Anna", Date(2000, 11, 8),, Gender:female};
Employee e3{ e1 };  //cp ctor 深拷贝 得到e3.
```