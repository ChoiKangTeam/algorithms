#include <iostream>
#include <string>
#include <map>

int		main(void)
{
	int	n, t, count;
	std::string	temp, clothe;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> t;
		std::map <std::string, int> map;
		std::map <std::string, int>::iterator iter;
		count = 1;
		for (int j = 0; j < t; j++) {
			std::cin >> temp >> clothe;
			if (map.find(clothe) != map.end())
				map[clothe]++;
			else
				map.insert(std::make_pair(clothe, 1));
		}
		for (iter = map.begin(); iter != map.end(); iter++) {
			count *= iter->second + 1;
		}
		std::cout << count - 1 << "\n";
	}

	return (0);
}