# String Literals 字符串字面量

## C++11 Raw String literals (C++11“原始/生”字符串字面量)
- 声明的语法:  
R "delimiter( raw_characters )delimiter" 

- 声明示例：
``` cpp 
#include <iostream>

const char* s1 = R"(Hello

World)";

// s1效果与下面的s2和s3相同

const char* s2 = "Hello\nWorld";

const char* s3 = R"NoUse(Hello 

World)NoUse";

int main(){

  std::cout << s1 << std::endl;

  std::cout << s2 << std::endl;

  std::cout << s3 << std::endl;

}
```
我们不需要为“Raw String literals”中的换行、双引号等特殊字符进行转义。
## cpp14: String Literals (cpp14的字符串字面量)
 

C++14将运算符  **""s**  进行了重载，赋予了它新的含义，使得用这种运算符括起来的字符串字面量，自动变成了一个 std::string 类型的对象。

 
```cpp
auto hello = "Hello!"s;              // hello is of std::string type

auto hello = std::string{"Hello!"};  // equals to the above

auto hello = "Hello!";               // hello is of const char* type
```
 
```cpp
#include <string>

#include <iostream>

int main() {

  using namespace std::string_literals; // 命名空间

  std::string s1 = "abc\0\0def";  

  std::string s2 = "abc\0\0def"s; 

  std::cout << "s1: " << s1.size() << " \"" << s1 << "\"\n"; // s1: 3 "abc"

  std::cout << "s2: " << s2.size() << " \"" << s2 << "\"\n"; // s2: 8 "abc^@^@def"

}
```
 


 





 