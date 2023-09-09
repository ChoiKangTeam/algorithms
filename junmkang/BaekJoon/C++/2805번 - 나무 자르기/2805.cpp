#include <iostream>
#include <algorithm>
#include <vector>

std::vector <int> trees;

void		binarySearch(int n, int m)
{
	long long start, end, mid, sum;

	start = 0;
	end = trees[trees.size() - 1];

	while (true)
	{
		mid = (start + end) / 2;
		sum = 0;
		for (int i = 0; i < trees.size(); i++) {
			if (mid < trees[i])
				sum += trees[i] - mid;
		}
		if (sum == m || start > end) break;
		if (sum > m) start = mid + 1;
		else if (sum < m) end = mid - 1;
	}
	std::cout << mid << "\n";
}

int		main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, m, tree;

	std::cin >> n >> m;
	for (int i = 0; i < n; i++) {
		std::cin >> tree;
		trees.push_back(tree);
	}
	std::sort(trees.begin(), trees.end());
	binarySearch(n, m);

	return (0);
}

// 4 26 40 42 46
// 20
// 40 8
// 26