# Destructor ��������

- �ڶ������ٵ�ʱ���Զ����ã����û������������Ĭ������������
- ԭ�ͣ� 
```cpp 
C::~C() 
C::~C() = delete��
C::~C() = default��
```
- �����޲������������ء�Ҳû�з���ֵ��
  - ֻ�ܷ����Ѿ����ٵĶ������ֵ��
  - ����ʱ�õ���ֵ��û������ģ�ԭ�ȴ���ֵ���ڴ�ռ��Ѿ����ͷ��ˣ���

TODO�� code in https://www.icourse163.org/learn/BUPT-1003564002?tid=1461043448#/learn/content?type=detail&id=1237770687&cid=1257884582&replay=true

# Friend ��Ԫ
## ��;
˽�г�Ա�޷���������ʣ�����ʱ����Ҫ��ȨĳЩ���ŵĺ������������Щ˽�г�Ա����ʱ������Ԫ��������Ԫ�ࡣ

## ��Ԫ��������Ԫ��
- ��friend�ؼ���������Ԫ����������Ԫ�ࡣ
- ��Ԫ��ȱ�㣺�����˷�װ�ԡ�
- һ�������ض���������������

```cpp
// Kid���print����������ֱ�ӷ���Date���е�˽�г�Ա

class Date {
private:
  int year{ 2019 } , month{ 1 };
  int day{ 1 };
public:
  // �˴��������Ƕ���kid�࣬���Ҹú������Ա�kid������÷���Date���˽�б�����
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
 

 

