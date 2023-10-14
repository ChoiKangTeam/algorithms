#include <iostream>

int		main(void) {
	int n, i = 5, num = 0;
	while (i--)
	{
		std::cin >> n;
		num += n;
	}
	std::cout << num;
}