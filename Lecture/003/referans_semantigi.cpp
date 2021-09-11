/*
 *
 * L Value Reference - Sol taraf referansi
 *	Bir nesnenin yerine gecen bir isim
 *
 * R Value Reference - Sag taraf referansi
 *	Tasima semantigi - move semantics
 *	Mukkemmel gonderi - perfect forwarding
 *
 */

 /*
  * Neden referans kullaniyoruz
  *	en cok fonksiyonun paramatre degiskeni olarak kullaniriz
  *	a) call by reference
  *	b)
  */


  // call by reference
void foo(int& r)
{
	r = 45;
	/*
		int x = 10;
		foo(x);
		std::cout << x;
	*/
}


int g = 20;
int& func2()
{
	return g;
}


// int turden iki degiskeni takas eden bi fonksiyon
// swap pointer
#include <iostream>
void swap_p(int* p1, int* p2)
{
	const int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

// swap reference
void swap_r(int& r1, int& r2)
{
	const int temp = r1;
	r1 = r2;
	r2 = temp;
}



int main()
{

	//int x = 10;
	//int& r = x; // L Value Reference
	//// r x'in yerine gecen bir isim. r demek x demek
	//std::cout << r;
	//++x;
	//std::cout << r;


	// r ile x baglaniyor
	// bind islemi
	/*int x = 23;
	int& r = x;*/

	int x = 10, y = 34;

	std::cout << x << " " << y << std::endl;
	//swap_p(&x, &y);
	swap_r(x, y);
	std::cout << x << " " << y << std::endl;

	std::cout << g << std::endl;
	++func2();
	std::cout << g << std::endl;

	int a[] = { 0,1,2,3 };
	int& r = a[2];
	r = 40;
	// range-based for loop
	for (const auto val : a)
		std::cout << val << std::endl;


}


/*
 int& r = x;
	r = 30;
 main:
		push    rbp
		mov     rbp, rsp
		mov     DWORD PTR [rbp-12], 110
		lea     rax, [rbp-12]
		mov     QWORD PTR [rbp-8], rax
		mov     rax, QWORD PTR [rbp-8]
		mov     DWORD PTR [rax], 30
		mov     eax, 0
		pop     rbp
		ret
--------------------------------------
int* p = &x;
	*p = 10;
main:
		push    rbp
		mov     rbp, rsp
		mov     DWORD PTR [rbp-12], 110
		lea     rax, [rbp-12]
		mov     QWORD PTR [rbp-8], rax
		mov     rax, QWORD PTR [rbp-8]
		mov     DWORD PTR [rax], 10
		mov     eax, 0
		pop     rbp
		ret

 */
