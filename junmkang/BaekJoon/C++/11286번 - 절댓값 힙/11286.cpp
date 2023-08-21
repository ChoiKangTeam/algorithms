#include <iostream>
#include <algorithm>
#include <queue>

int		main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, temp;
	std::priority_queue <int, std::vector<int>, std::greater<int> > plusQue;
	std::priority_queue <int, std::vector<int>, std::less<int> > minusQue;
	
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> temp;
		if (temp == 0)
		{
			if (plusQue.empty() && minusQue.empty()) {
				std::cout << "0" << "\n";
			}
			else {
				if (!plusQue.empty() && minusQue.empty()) {
					std::cout << plusQue.top() << "\n";
					plusQue.pop();
				}
				else if (plusQue.empty() && !minusQue.empty()) {
					std::cout << minusQue.top() << "\n";
					minusQue.pop();
				}
				else if (plusQue.top() < -minusQue.top()) {
					std::cout << plusQue.top() << "\n";
					plusQue.pop();
				}
				else {
					std::cout << minusQue.top() << "\n";
					minusQue.pop();
				}
			}
		}
		else 
		{
			if (temp < 0) minusQue.push(temp);
			else plusQue.push(temp);
		}
	}

	return (0);
}