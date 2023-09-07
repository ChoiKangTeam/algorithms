#include <iostream>
#include <vector>
#include <queue>

std::vector<int> vec[101];
int	check[101];

void		bfs()
{
	std::queue <std::pair<int, int> > que;
	std::pair<int, int> pos;

	std::fill_n(check, 101, 101);
	que.push(std::make_pair(1, 0));
	while (!que.empty())
	{
		pos = que.front();
		if (pos.first == 100) break;
		que.pop();
		for(int i = pos.first; i <= pos.first + 6; i++) {
			if (100 < i) break;
			if (!vec[i].empty()) {
				if (pos.second + 1 < check[i]) {
					que.push(std::make_pair(vec[i].front(), pos.second + 1));
					check[i] = pos.second + 1;
				}
			}
			else if (pos.first < i) {
				if (pos.second + 1 < check[i]) {
					que.push(std::make_pair(i, pos.second + 1));
					check[i] = pos.second + 1;
				}
			}
		}
	}
	std::cout << pos.second << "\n";
}

int		main(void)
{
	int n, m, u, v;

	std::cin >> n >> m;
	for (int i = 0; i < n + m; i++) {
		std::cin >> u >> v;
		vec[u].push_back(v);
	}
	bfs();

	return (0);
}