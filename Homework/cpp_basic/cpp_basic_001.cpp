#include <iostream>

int foo(int* p, int* q)
{
	*p = 1;
	*q = 2;

	//std::cout << p << std::endl;
	//std::cout << q << std::endl;
	return *p + *q;
}
char str[] = "0123";

int main(int argc, char* argv[])
{
	int a = 3;
	int b = 4;
	int c = foo(&a, &a);
	std::cout << c;
	(c == a + b ? a : b) = 5;
	std::cout << a << b;
	int i = 0;
	// i[str + 2] == *(i + str + 2)
	// str[2]
	str[i] = i[str + 2];
	std::cout << str; // 2123
	return 0;
}

//4252123
