#include <iostream>
#include <queue>

char campus[601][601];
char checkMap[601][601];

int		bfs(int n, int m, int placeY, int placeX)
{
	int count = 0;
	std::queue <std::pair<int, int> > que;
	std::pair <int, int> Doyeon;

	que.push(std::make_pair(placeY, placeX));
	while (!que.empty())
	{
		Doyeon = que.front();
		que.pop();
		if (!checkMap[Doyeon.first][Doyeon.second]) {
			// std::cout << campus[Doyeon.first][Doyeon.second] << "\n";
			if (campus[Doyeon.first][Doyeon.second] == 'P')
				count++;
			if (Doyeon.first + 1 < n && !checkMap[Doyeon.first + 1][Doyeon.second]) {
				if (campus[Doyeon.first + 1][Doyeon.second] != 'X')
					que.push(std::make_pair(Doyeon.first + 1, Doyeon.second));
			}
			if (0 <= Doyeon.first - 1 && !checkMap[Doyeon.first - 1][Doyeon.second]) {
				if (campus[Doyeon.first - 1][Doyeon.second] != 'X')
					que.push(std::make_pair(Doyeon.first - 1, Doyeon.second));
			}
			if (Doyeon.second + 1 < m && !checkMap[Doyeon.first][Doyeon.second + 1]) {
				if (campus[Doyeon.first][Doyeon.second + 1] != 'X')
					que.push(std::make_pair(Doyeon.first, Doyeon.second + 1));
			}
			if (0 <= Doyeon.second - 1 && !checkMap[Doyeon.first][Doyeon.second - 1]) {
				if (campus[Doyeon.first][Doyeon.second - 1] != 'X')
					que.push(std::make_pair(Doyeon.first, Doyeon.second - 1));
			}
			checkMap[Doyeon.first][Doyeon.second] = 1;
		}
	}
	return count;
}

int		main(void)
{
	int n, m;
	int	placeX, placeY, count;

	std::cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> campus[i][j];
			if (campus[i][j] == 'I') {
				placeY = i;
				placeX = j;
			}

		}
	}
	count = bfs(n, m, placeY, placeX);
	if (count == 0) std::cout << "TT" << "\n";
	else std::cout << count << "\n";

	return (0);
}
