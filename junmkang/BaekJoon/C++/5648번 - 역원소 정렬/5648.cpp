#include <iostream>
#include <algorithm>
#include <vector>

long long reverse(long long num)
{
	long long temp = 0;

	while (0 < num)
	{
		temp *= 10;
		temp += num % 10;
		num = num / 10;
	}
	return (temp);
}

int		main(void)
{
	long long n, num;
	std::vector <long long> vec;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> num;
		vec.push_back(reverse(num));
	}
	std::sort(vec.begin(), vec.end());
	for (long long i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << "\n";
	}

	return (0);
}