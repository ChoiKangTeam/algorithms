#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

std::vector <std::pair<int, int> > vec[100001];
int		dp[1001];
int INF = 100000001;

void	dijkstra(int n, int sPos)
{
	std::priority_queue <std::pair <int, int> > pQue;

	dp[sPos] = 0;
	pQue.push(std::make_pair(sPos, 0));
	while (!pQue.empty())
	{
		int posCity = pQue.top().first;
		int posCost = -pQue.top().second;
		pQue.pop();
		if (dp[posCity] < posCost) continue;
		for (int i = 0; i < vec[posCity].size(); i++)
		{
			int nextCity = vec[posCity][i].first;
			int nextCost = posCost + vec[posCity][i].second;
			if (nextCost < dp[nextCity]) {
				dp[nextCity] = nextCost;
				pQue.push(std::make_pair(nextCity, -nextCost));
			}
		}
	}
}

int		main(void)
{
	int n, m, stmp, etmp, sPos, ePos, cost;

	std::cin >> n >> m;
	for (int i = 0; i < m; i++) {
		std::cin >> stmp >> etmp >> cost;
		vec[stmp].push_back(std::make_pair(etmp, cost));
	}
	std::cin >> sPos >> ePos;
	for (int i = 1; i <= n; i++) {
		dp[i] = INF;
	}
	dijkstra(n, sPos);
	std::cout << dp[ePos] << "\n";

	return (0);
}