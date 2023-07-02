#include <iostream>
#include <vector>
#include <queue>

int	a[1001][1001];
int visit[1001] = {0,};

void	bfs(int v, int n)
{
	std::queue<int> q;
	int visit[1001] = {0,};
	q.push(v);
	visit[v] = true;
	std::cout << v << " ";
	while (!q.empty()) {
		int temp = q.front();
		q.pop();
		for(int j = 1; j <= n; j++) {
			if (a[j][temp] && !visit[j]) {
				std::cout << j << " ";
				q.push(j);
				visit[j] = true;
			}
		}
	}
}

void	dfs(int v, int n)
{
	visit[v] = true;
	std::cout << v << " ";
	for(int i = 1; i <= n; i++) {
		if (a[v][i] && !visit[i]) {
			dfs(i, n);
		}
	}
}

int	main(void)
{
	int n, m, v;
	int y, x;
	
	std::cin >> n >> m >> v;
	for(int i = 0; i < m; i++) {
		std::cin >> y >> x;
		a[y][x] = 1;
		a[x][y] = 1;
	}
	dfs(v, n);
	std::cout << "\n";
	bfs(v, n);

	return (0);
}