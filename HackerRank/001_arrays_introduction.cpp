#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int n;
	std::cin >> n;


	int arr[10000];
	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];
	}

	for (int i = n - 1; i >= 0; --i)
	{
		std::cout << arr[i] << " ";
	}
	return 0;
}
