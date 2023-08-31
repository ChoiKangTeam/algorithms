#include <iostream>

bool		arr[10000001];

int	main(void)
{
	std::ios_base :: sync_with_stdio(false); 
	std::cin.tie(NULL); 
	std::cout.tie(NULL);

	int n, temp;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		if (!arr[temp]) arr[temp] = true;
		else {
			std::cout << temp << "\n";
			return (0);
		}
	}
	return (0);
}