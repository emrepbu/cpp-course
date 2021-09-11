#include <iostream>


int main(int argc, char* argv[])
{
	int a[] = { 10,20,30,40,50 };
	int* ptr{ a };
	int*& r{ ptr };
	++r;
	++* r;
	for(const auto val : a)
		std::cout << val << "\n";

}
