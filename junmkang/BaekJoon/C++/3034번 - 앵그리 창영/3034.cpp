#include <iostream>
#include <cmath>

int		main(void)
{
	int n, w, h;
	int temp;

	std::cin >> n >> w >> h;
	double size = sqrt(w * w + h * h);
	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		if (temp <= size) std::cout << "DA" << "\n";
		else std::cout << "NE" << "\n";
	}

	return 0;
}
