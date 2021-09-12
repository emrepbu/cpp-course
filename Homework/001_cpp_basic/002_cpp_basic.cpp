#include <iostream>

typedef long long ll;

// unsigned tek basina kullanilirsa default olarak unsigned int olarak kabul edilir.
// unsigned sozcugunun devaminde bir tur sozcugu olamaz.

void func(unsigned ll) // buradaki ll unsigned int turunden bir nesne
{
	std::cout << '1';
}

void func(unsigned long long)
{
	std::cout << '2';
}

int main(int argc, char* argv[])
{
	func(0Ull);
}
