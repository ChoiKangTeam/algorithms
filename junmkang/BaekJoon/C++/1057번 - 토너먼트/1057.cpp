#include <iostream>
#include <algorithm>

int		main(void)
{
	int		n, k, l, count;

	std::cin >> n >> k >> l;
	count = 0;
	while (true)
	{
		count++;
		if (k - l == -1 || k - l == 1) 
			if (std::max(k, l) % 2 == 0)
				break;
		if (k % 2 != 0) k++;
		if (l % 2 != 0) l++;
		k = k / 2;
		l = l / 2;
	}
	std::cout << count;

	return (0);
}