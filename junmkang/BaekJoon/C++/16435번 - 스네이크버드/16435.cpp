#include <iostream>
#include <algorithm>
#include <vector>

int		main(void)
{
	int n, l, temp;
	std::vector <int> h;

	std::cin >> n >> l;
	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		h.push_back(temp);
	}
	std::sort(h.begin(), h.end());
	for (int i = 0; i < h.size(); i++) {
		if (l >= h[i]) l++;
		else break;
	}
	std::cout << l << "\n";

	return (0);
}