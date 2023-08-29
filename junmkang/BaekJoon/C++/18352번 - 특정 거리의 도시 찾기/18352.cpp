#include <iostream>
#include <vector>
#include <queue>

std::vector <int> v[300001];
int visited[300001];

void	bfs(int k, int x)
{
	int	temp, count = 0, Qsize;
	std::queue <int> que;
	std::priority_queue <int, std::vector<int>, std::greater<int> > answer;

	que.push(x);
	visited[x] = 1;
	while (!que.empty())
	{
		Qsize = que.size();
		count++;
		for (int i = 0; i < Qsize; i++) {
			temp = que.front();
			que.pop();
			for (int j = 0; j < v[temp].size(); j++) {
				if (!visited[v[temp][j]]) {
					if (count == k) answer.push(v[temp][j]);
					else que.push(v[temp][j]);
					visited[v[temp][j]] = true;
				}
			}
		}
	}
	
	if (answer.size() == 0) std::cout << "-1" << "\n";
	else {
		while(!answer.empty()) {
			std::cout << answer.top() << "\n";
			answer.pop();
		}
	}
}

int		main(void)
{
	int n, m, k, x, a, b;

	std::cin >> n >> m >> k >> x;
	for(int i = 0; i < m; i++) {
		std::cin >> a >> b;
		v[a].push_back(b);
	}
	if (k == 0) std::cout << x << "\n";
	else bfs(k, x);

	return (0);
}