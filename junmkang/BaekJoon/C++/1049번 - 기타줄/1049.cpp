#include <iostream>

int		main(void)
{
	int n, m, s, o, six_min, one_min, money;

	std::cin >> n >> m;
	six_min = 1001;
	one_min = 1001;
	for(int i = 0; i < m; i++) {
		std:: cin >> s >> o;
		if (six_min > s) six_min = s;
		if (one_min > o) one_min = o;
	}
	if (six_min > one_min * 6) six_min = one_min * 6;
	money = (n / 6) * six_min;
	if (six_min < n % 6 * one_min) money += six_min;
	else money += n % 6 * one_min;
	std::cout << money;

	return (0);
}