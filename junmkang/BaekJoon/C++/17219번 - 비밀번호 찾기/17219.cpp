#include <iostream>
#include <string>
#include <map>

std::map<std::string, std::string> map;

int		main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int n, m;
	std::pair <std::string, std::string> idPa;

	std::cin >> n >> m;
	for (int i = 0; i < n; i++) {
		std::cin >> idPa.first >> idPa.second;
		map.insert(std::make_pair(idPa.first, idPa.second));
	}
	for (int i = 0; i < m; i++) {
		std::cin >> idPa.first;
		std::cout << map.find(idPa.first)->second << "\n";
	}

	return (0);
}