#include <iostream>

int		main(void)
{
	long long n, cats = 0, count = 0;
	std::cin >> n;
	while (cats < n)
	{
		if (cats == 0) cats++;
		else cats *= 2;
		count++;
	}
	std::cout << count;

	return (0);
}