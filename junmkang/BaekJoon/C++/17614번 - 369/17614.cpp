#include <iostream>
#include <string>

int		outCount(int num)
{
	std::string str;
	int	count = 0;

	str = std::to_string(num);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '3' || str[i] == '6' || str[i] == '9')
			count++;
	}
	return (count);
}

int		main(void)
{
	int n, count = 0;

	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		count += outCount(i);
	}
	std::cout << count << "\n";

	return (0);
}