#include <iostream>
#include <queue>
#include <vector>

std::vector <int> party[51];
std::vector <int> graph[51];
int	trueParty[51];

void	bfs()
{
	int	temp, node;
	std::queue <int> q;

	// 진실쟁이들의 개수
	for (int i = 0; i < party[0].size(); i++) {
		// 진실쟁이들과 묶인 노드들의 개수
		for (int j = 0; j < graph[party[0][i]].size(); j++) {
			q.push(graph[party[0][i]][j]);
		}
	}
	while (!q.empty())
	{
		// 진실쟁이들과 연결된 얘들
		node = q.front();
		trueParty[node] = true;
		q.pop();
		for (int i = 0; i < graph[node].size(); i++) {
			temp = graph[node][i];
			if (!trueParty[temp]) {
				q.push(temp);
				trueParty[temp] = true;
			}
		}
	}
}

int		main(void)
{
	int n, m, t, temp, count;

	std::cin >> n >> m;
	for (int i = 0; i < m + 1; i++)
	{
		std::cin >> t;
		for (int j = 0; j < t; j++) {
			std::cin >> temp;
			party[i].push_back(temp);
		}
	}

	for (int i = 0; i < m + 1; i++) {
		for (int j = 0; j < party[i].size(); j++) {
			if (j + 1 < party[i].size()) {
				graph[party[i][j]].push_back(party[i][j + 1]);
				graph[party[i][j + 1]].push_back(party[i][j]);
			}
		}	
	}
	bfs();
	count = 0;
	for (int i = 1; i < m + 1; i++) {
		count++;
		for (int j = 0; j < party[i].size(); j++) {
			if (trueParty[party[i][j]]) {
				count--;
				break;
			}
		}
	}
	std::cout << count << "\n";

	return (0);
}