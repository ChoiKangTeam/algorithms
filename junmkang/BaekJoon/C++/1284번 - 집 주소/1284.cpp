#include <iostream>
#include <string>

int		main(void)
{
	int size;
	std::string num;

	while (true)
	{
		std::cin >> num;
		if (num == "0") break;
		size = 0;
		size += num.length() + 1;
		for (int i = 0; i < num.length(); i++) {
			if (num[i] == '1') size += 2;
			else if (num[i] == '0') size += 4;
			else size += 3;
		}
		std::cout << size << "\n";
	}

	return (0);
}