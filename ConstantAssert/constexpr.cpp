#include <iostream>
#include <array>
#include <cassert> 

using namespace std;

// 该函数应该在主函数之前。
constexpr int factorial(int n) {
	if (n == 0) {
		return 1;
		
	}
	else {
		return n * factorial(n - 1);
	}
}

int main() {
	int x = 3;
	auto f = factorial(x);
	static_assert(factorial(3) == 6, "error");
	// assert(f == 6);
	cout << "3! =" << f << endl;
	cin.get();
	return(0);
}

