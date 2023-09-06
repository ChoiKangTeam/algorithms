#include <iostream>
#include <vector>
#include <queue>

int beer = 1000;
std::vector <std::pair<int, int> > shop;
bool check[101];

void	bfs(std::pair<int, int> home, std::pair<int, int> rage)
{
	int temp;
	bool output = false;
	std::queue <std::pair<int, int> > que;
	std::pair <int, int> pos;

	que.push(std::make_pair(home.first, home.second));
	while (!que.empty())
	{
		pos = que.front();
		que.pop();
		temp = std::abs(pos.first - rage.first);
		temp += std::abs(pos.second - rage.second);
		if (temp <= beer) {
			output = true;
			break;
		}
		for (int i = 0; i < shop.size(); i++) {
			temp = std::abs(pos.first - shop[i].first);
			temp += std::abs(pos.second - shop[i].second);
			if (temp <= beer && !check[i]) {
				que.push(std::make_pair(shop[i].first, shop[i].second));
				check[i] = true;
			}
		}
	}
	if (output == true) std::cout << "happy" << "\n";
	else std::cout << "sad" << "\n";
}

int		main(void)
{
	int t, n;
	std::pair <int, int> home, rage, temp;

	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::cin >> n;
		std::cin >> home.first >> home.second;
		for (int j = 0; j < n; j++) {
			std::cin >> temp.first >> temp.second;
			shop.push_back(temp);
		}
		std::cin >> rage.first >> rage.second;
		bfs(home, rage);
		std::fill_n(check, 100, false);
		shop.clear();
	}
}