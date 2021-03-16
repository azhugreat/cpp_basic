# vector类
用数组存放数据时，容量大小不可变;
vector对象容量可自动增大.
 
- 声明:
```cpp
// 保存指定类型的vector
vector<int> iV {-2, -1, 0}; 
```

- 使用最简单的示例
```cpp
// Store numbers 1, ..., 10 to the vector
for (int i = 1; i < 10; i++)

    iV.push_back(i + 1);// 从尾部放入数据
 
```


__迭代变量名应该用 i, j, k 等。此外，变量名 j, k应只被用于嵌套循环。__