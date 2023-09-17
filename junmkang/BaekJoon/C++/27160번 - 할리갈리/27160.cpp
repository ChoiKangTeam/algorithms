#include <iostream>
#include <string>
#include <map>

int		main(void)
{
	int n, num;
	std::string fruit;
	std::map <std::string, int> halli;
	std::map <std::string, int>::iterator iter;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> fruit >> num;
		if (halli.find(fruit) != halli.end())
			halli[fruit] += num;
		else 
			halli.insert(std::make_pair(fruit, num));
	}
	for (iter = halli.begin(); iter != halli.end(); iter++) {
		if (iter->second == 5) {
			std::cout << "YES" << "\n";
			return (0);
		}
	}
	std::cout << "NO" << "\n";
	return (0);
}