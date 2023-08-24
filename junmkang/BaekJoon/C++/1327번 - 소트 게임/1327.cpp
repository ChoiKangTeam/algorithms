#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <map>

int n, k;

int		bfs(std::string s)
{
	int cnt;
	std::queue <std::pair<std::string, int> > que;
	std::map <std::string, int> map;
	std::string answer, current, temp;

	for (int i = 1; i <= n; i++) {
		answer += i + '0';
	}

	que.push(std::make_pair(s, 0));
	while (!que.empty())
	{
		current = que.front().first;
		cnt = que.front().second;
		if (current == answer) return cnt;
		for (int i = 0; i <= s.length() - k; i++) {
			temp = current.substr(i, k);
			std::reverse(temp.begin(), temp.end());
			temp = current.substr(0, i) + temp + current.substr(i + k, s.length() - i - k);
			if (map[temp] != true) {
				map[temp] = true;
				que.push(std::make_pair(temp, cnt + 1));
			}
		}
		que.pop();
	}
	return (-1);
}

int		main(void)
{
	char c;
	std::string s;

	std::cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		std::cin >> c;
		s += c;
	}
	std::cout << bfs(s) << "\n";
	

	return (0);
}