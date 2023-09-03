#include <iostream>
#include <algorithm>
#include <vector>

const int INF = 10001;
int m[INF];
std::vector <std::pair<int, int> > vec[INF];

void	dijkstra(int d)
{
	m[0] = 0;
	for (int i = 1; i <= d; i++) {
		m[i] = m[i - 1] + 1;
		for (int j = 0; j < (int)vec[i].size(); j++) {
			m[i] = std::min(m[i], m[vec[i][j].first] + vec[i][j].second);
		}
	}
}

int		main(void)
{
	int n, d, u, v, num;

	std::cin >> n >> d;
	std::fill_n(m, INF, INF);
	for (int i = 0; i < n; i++) {
		std::cin >> u >> v >> num;
		if (d < v || v - u < num) continue;
		vec[v].push_back(std::make_pair(u, num));
	}
	dijkstra(d);
	std::cout << m[d];

	return (0);
}