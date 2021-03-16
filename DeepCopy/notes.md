# Deep Copy ���

## ǳ���������

- ǳ��������������һ��ָ�룬ֻ��ָ��ĵ�ַ������ָ��ָ������ݣ�
    - �����¶���ʱ�����������ʽ/Ĭ�Ϲ��캯����
    - Ϊ���ж���ֵʱ��ʹ��Ĭ�ϸ�ֵ����� $ = $��
- ���������copy��ַ��������ָ��ָ������ݣ�

## ǳ����
 
``` cpp
Employee e1{"Jack", Date(1999, 5, 3),  Gender::male};

Employee e2{"Anna", Date(2000, 11, 8), Gender:female};

Employee e3{ e1 };  //cp ctor��ִ��һ��һ��Ա������ָ�룩������ǳcopy��

// e3.birthdayָ��ָ���� e1.birthday��ָ����Ǹ�Date����
```

## ���ƿ������캯��

- ������
    - **���б�д**�������캯������ʹ�ñ�������ʽ���ɵģ�Ĭ�ϣ��������캯��
    - **����**��ֵ���������ʹ�ñ�������ʽ���ɵģ�Ĭ�ϣ���ֵ���������
    
```cpp
class Employee {
public:
  Employee(const Employee &e) = default; //�Զ������ǳ����ctor
  Employee(const Employee& e){    //�ֶ���д�����ctor
    // ���������е�ָ�����͵����ݣ����󣩣�ʹ���½���������ָֹ�븳ֵ��
    // ��ʱdate���󲻰���ָ�����͵�˽�����ݣ����ᵼ��ǳcopyָ������⡣
    birthdate = new Date{ e.birthdate };
  } // ...
}
Employee e1{"Jack", Date(1999, 5, 3), Gender::male};
Employee e2{"Anna", Date(2000, 11, 8),, Gender:female};
Employee e3{ e1 };  //cp ctor ��� �õ�e3.
```