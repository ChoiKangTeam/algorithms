#include <iostream>
#include <algorithm>
#include <vector>

int		main()
{
	int n, m, p, l, temp, count;
	std::vector <int> v, v_temp;

	std::cin >> n >> m;
	for(int i = 0; i < n; i++)
	{
		std::cin >> p >> l;
		for(int j = 0; j < p; j++) {
			std::cin >> temp;
			v_temp.push_back(temp);
		}
		std::sort(v_temp.begin(), v_temp.end());
		if (l - p > 0) v.push_back(1);
		else v.push_back(v_temp[p - l]);
		v_temp.clear();
	}
	std::sort(v.begin(), v.end());
	count = 0;
	for(int i = 0; i < v.size(); i++) {
		if (m >= v[i]) {
			m = m - v[i];
			count++;
		}
	}
	std::cout << count;
	
	return (0);
}
