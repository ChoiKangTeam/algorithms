#include <iostream>
#include <queue>

int		main(void)
{
	int	n, dasom, temp, count = 0;
	std::priority_queue <int> que;

	std::cin >> n;
	std::cin >> dasom;
	for (int i = 0; i < n - 1; i++)
	{
		std::cin >> temp;
		que.push(temp);
	}

	while (!que.empty())
	{
		temp = que.top();
		if (dasom <= temp) {
			temp--;
			dasom++;
			count++;
			que.pop();
			que.push(temp);
		}
		else
			que.pop();
	}
	std::cout << count << "\n";

	return (0);
}