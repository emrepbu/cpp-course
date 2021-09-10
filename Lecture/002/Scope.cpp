
#include <iostream>
 //using namespace std;

  // :: => Scope Resolution
  // unary tek olarak kullanildiginda global namespace de arar.
namespace emre
{
	int x = 0;
}

namespace pbu
{
	int x = -1;
}

int x = 1;
int main()
{
	const int x{ 10 };

	std::cout << x << std::endl;
	std::cout << ::x << std::endl;
	std::cout << pbu::x << std::endl;
	std::cout << emre::x << std::endl;


	return 0;
}
