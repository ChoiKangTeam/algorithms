#include <iostream>
#include <vector>

const int	INF = 10001;

bool	arr[10001];

void	eratos()
{
	for (int i = 2; i <= INF; i++) {
		if (!arr[i]) {
			for (int j = i * i; j <= INF; j += i) {
				arr[j] = true;
			}
		}
	}
}

int		main(void)
{
	int n;
	std::vector <int> v;

	std::cin >> n;
	if (n == 1) {
		std::cout << "6" << "\n";
		return (0);
	}
	eratos();
	for (int i = 1; i <= INF; i++) {
		if (!arr[i]) v.push_back(i);
	}
	for (int i = 0; i < v.size(); i++) {
		if (v[i] * v[i + 1] > n) {
			std::cout << v[i] * v[i + 1] << "\n";
			break;
		}
	}

	return (0);
}
