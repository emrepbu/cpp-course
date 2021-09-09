`#include <iostream>`
`#include <cstdio>`

`// Initialize - Ilk degerini vermek` 
`// Assign - Atamak`


`/*`

`1- Automatic storage`

`2- Static storage`

`3- Dynamic storage`
`*/`

`/*`

`1- Automatic Storage`

`Program bu kod bloguna geldiginde buradaki degiskenlere bellekte yer ayrilacak`

`program bu kod blogundan ciktiginda ise bellekte bu degiskenler tutulmayacak.`
`*/`
`void func(int a) // int a Automatic Storage`
`{`
`int x = 5; // int x Automatic Storage`
`// ...`
`}`

`/*`

`2- Static Storage`

`Bu bildirimler yapildiklari andan itibaren programin sonuna kadar bellekte yer kaplarlar.`
`*/
int g; // static
void func2(int a) // int a automatic
{
int x = 5; // automatic
static int y = 5; // static
printf(" x = %d, y = %d \n", x, y);
++x;
++y;
}
int zero_init_int;
bool zero_init_bool;
int* zero_init_ptr;`
`int main()`
`{`
`int x = 2; // Initialize - Ilk degerini vermek` 
`x = 10; // Assign - Atamak`
`// Copy initialize`
`int a = 10;`
`// Default initialize`
`int y;`
`// static ile nonstatic arasindaki fark`
`for (int i = 0; i < 10; ++i)`
`{`
	`func2(1); // output:a`
`}`
`// Zero Initialize`
`std::cout << zero_init_int << std::endl; // 0`
`std::cout << std::boolalpha << zero_init_bool << std::endl; // 0-false`
`if (zero_init_ptr == nullptr)`
	`std::cout << "Dogru" << std::endl;`


`}`
`/*`

`output:a`

`x = 5, y = 5`

`x = 5, y = 6`

`x = 5, y = 7`

`x = 5, y = 8`

`x = 5, y = 9`

`x = 5, y = 10`

`x = 5, y = 11`

`x = 5, y = 12`

`x = 5, y = 13`

`x = 5, y = 14`
 `*/`