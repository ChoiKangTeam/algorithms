#include <iostream>
#include <algorithm>
#include <vector>

int		binary_search(std::vector <int>& n, int temp)
{
	int low, high, mid, num;

	num = 0;
	low = 0;
	high = n.size() - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (temp < n[mid])
			high = mid - 1;
		else if (temp >= n[mid])
			low = mid + 1;
	}
	num = n.size() - low;
	return num;
}

int		main(void)
{
	int t, a, b, temp, count;
	std::vector <int> n;

	std::cin >> t;
	for(int i = 0; i < t; i++) {
		std::cin >> a >> b;
		for(int j = 0; j < a; j++) {
			std::cin >> temp;
			n.push_back(temp);
		}
		std::sort(n.begin(), n.end());
		count = 0;
		for(int j = 0; j < b; j++) {
			std::cin >> temp;
			count += binary_search(n, temp);
		}
		n.clear();
		std::cout << count << "\n";
	}

	return (0);
}