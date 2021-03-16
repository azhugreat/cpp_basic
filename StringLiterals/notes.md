# String Literals �ַ���������

## C++11 Raw String literals (C++11��ԭʼ/�����ַ���������)
- �������﷨:  
R "delimiter( raw_characters )delimiter" 

- ����ʾ����
``` cpp 
#include <iostream>

const char* s1 = R"(Hello

World)";

// s1Ч���������s2��s3��ͬ

const char* s2 = "Hello\nWorld";

const char* s3 = R"NoUse(Hello 

World)NoUse";

int main(){

  std::cout << s1 << std::endl;

  std::cout << s2 << std::endl;

  std::cout << s3 << std::endl;

}
```
���ǲ���ҪΪ��Raw String literals���еĻ��С�˫���ŵ������ַ�����ת�塣
## cpp14: String Literals (cpp14���ַ���������)
 

C++14�������  **""s**  ���������أ����������µĺ��壬ʹ����������������������ַ������������Զ������һ�� std::string ���͵Ķ���

 
```cpp
auto hello = "Hello!"s;              // hello is of std::string type

auto hello = std::string{"Hello!"};  // equals to the above

auto hello = "Hello!";               // hello is of const char* type
```
 
```cpp
#include <string>

#include <iostream>

int main() {

  using namespace std::string_literals; // �����ռ�

  std::string s1 = "abc\0\0def";  

  std::string s2 = "abc\0\0def"s; 

  std::cout << "s1: " << s1.size() << " \"" << s1 << "\"\n"; // s1: 3 "abc"

  std::cout << "s2: " << s2.size() << " \"" << s2 << "\"\n"; // s2: 8 "abc^@^@def"

}
```
 


 





 