#include <iostream>
#include <string>

int		main(void)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, m, count, k;
	std::string str;
	
	std::cin >> n >> m >> str;
	count = 0;
	for (int i = 0; i < m; i++) {
		if (str[i] == 'I') {
			k = 0;
			while (str[i + 1] == 'O' && str[i + 2] == 'I')
			{
				k++;
				if (k == n) {
					k--;
					count++;
				}
				i += 2;
			}
		}
	}
	std::cout << count << "\n";

	return (0);
}