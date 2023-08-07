#include <iostream>
#include <stdlib.h>

int		main(void)
{	
	int	sum;
	std::string	str, temp = "";

	std::cin >> str;
	// 4 2 1
	if (str.length() % 3 != 0) {
		for (int i = 0; i < (str.length() % 3); i++)
			str = "0" + str;
	}
	for (int i = 0; i < str.length(); i += 3) {
		temp = temp + str[i] + str[i+1] + str[i+2];
		sum =  std::stoi(temp, 0, 2);
		temp = "";
	}
	std::cout << sum;

	return (0);
}