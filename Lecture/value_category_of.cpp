#include <iostream>

#define pvc(x) (std::cout << "value category if '"#x <<"'is : " << Valcat<decltype((x))>::pvcat<< "\n")

template<typename T>
struct Valcat
{
	constexpr static const char* pvcat = "PR value";
};

template<typename T>
struct Valcat<T&>
{
	constexpr static const char* pvcat = "L value";
};


template<typename T>
struct Valcat<T&&>
{
	constexpr static const char* pvcat = "R value";
};


int main(int argc, char* argv[])
{
	int x = 10;

	pvc(x);
}
