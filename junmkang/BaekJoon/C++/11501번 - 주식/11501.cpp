#include <iostream>
#include <algorithm>
#include <vector>

int		main(void)
{
	int t, n;
	long long m, temp, max;
	std::vector <long long> v;

	std::cin >> t;
	for(int i = 0; i < t; i++)
	{
		std::cin >> n;
		for(int j = 0; j < n; j++) {
			std::cin >> temp;
			v.push_back(temp);
		}
		m = 0;
		max = 0;
		for (int k = v.size() - 1; k >= 0; k--) {
			if (v[k] > max) max = v[k];
			else if (v[k] < max) m += max - v[k];
		}
		std::cout << m << "\n";
		v.clear();
	}

	return (0);
}