#include <iostream>
#include <vector>
#include <queue>

std::vector<int> a[1001];

int		bfs(int start, int n)
{
	std::queue<int> q;
	int	visit[1001] = {0};
	int	count = 0;

	for(int i = 1; i <= n; i++)
	{
		if (!visit[i])
		{
			q.push(i);
			visit[i] = true;
			while (!q.empty())
			{
				int x = q.front();
				q.pop();
				for(int j = 0; j < a[x].size(); j++) {
					int y = a[x][j];
					if (!visit[y]) {
						q.push(y);
						visit[y] = true;
					}
				}
			}
			count++;
		}
	}
	return (count);
}

int		main()
{
	int	n, m, u, v;
	int	count = 0;
	std::cin >> n >> m;
	for(int i = 0; i < m; i++)
	{
		std::cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	std::cout << bfs(1, n);
	return (0);
}