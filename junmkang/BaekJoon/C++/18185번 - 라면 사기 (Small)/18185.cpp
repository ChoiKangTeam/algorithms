#include <iostream>
#include <algorithm>

int		main(void)
{
	int		n, temp, money, a[10001] = {0};

	std::cin >> n;
	money = 0;
	for(int i = 0; i < n; i++)
		std::cin >> a[i];
	for(int i = 0; i < n; i++) {
		while (0 < a[i]) {
			if (a[i+1] <= a[i+2] && 0 < a[i] && 0 < a[i+1] && 0 < a[i+2]) {
				temp = std::min(std::min(a[i], a[i+1]), a[i+2]);
				money += 7;
				a[i+2]--;
				a[i+1]--;
				a[i]--;
			}
			else if (0 < a[i] && 0 < a[i+1]) {
				temp = std::min(a[i], a[i+1]);
				money += 5;
				a[i+1]--;
				a[i]--;
			}
			else if (0 < a[i]) {
				money += 3;
				a[i]--;
			}
		}
	}
	std::cout << money;

	return (0);
}