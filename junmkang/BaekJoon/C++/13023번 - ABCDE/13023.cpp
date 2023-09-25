#include <iostream>
#include <vector>
#include <stack>

std::vector <int> node[2001];
bool visited[2001];
bool flag;

void	dfs(int cnt, int n, int count)
{
	if (flag) return ;
	if (count == 5 && !flag)
		flag = true;
	visited[cnt] = true;
	for (int i = 0; i < node[cnt].size(); i++) {
		int next = node[cnt][i];
		if (!visited[next]) {
			dfs(next, n, count + 1);
		}
	}
	visited[cnt] = false;
}

int		main(void)
{
	int n, m, a, b;

	std::cin >> n >> m;
	for (int i = 0; i < m; i++) {
		std::cin >> a >> b;
		node[a].push_back(b);
		node[b].push_back(a);
	}
	for (int i = 0; i < n; i++) {
		dfs(i, n, 1);
	}
	if (flag) std::cout << "1" << "\n";
	else std::cout << "0" << "\n";

	return (0);
}
