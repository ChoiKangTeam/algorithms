#include <iostream>
#include <map>

int		main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, m, count = 0;

	std::map <std::string, bool> ma;
	std::string	temp;

	std::cin >> n >> m;
	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		ma.insert(std::make_pair(temp, true));
	}
	for (int i = 0; i < m; i++)
	{
		std::cin >> temp;
		if (ma.find(temp) != ma.end())
			count++;
	}
	std::cout << count;

	return (0);
}