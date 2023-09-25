#include <iostream>
#include <algorithm>

int abcd[5];

int		main(void)
{
	std::cin >> abcd[0] >> abcd[1] >> abcd[2] >> abcd[3];
	std::sort(abcd, abcd+4);
	std::cout << abcd[0] * abcd[2] << "\n";
	return (0);
}