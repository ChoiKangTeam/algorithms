#include <iostream>

int		main(void)
{
	int		t, r, c, count;
	char	candys[401][401];

	std::cin >> t;
	for (int i = 0; i < t; i++) 
	{
		std::cin >> r >> c;
		for (int j = 0; j < r; j++)
			for (int k = 0; k < c; k++)
				std::cin >> candys[j][k];

		count = 0;
		// 오른쪽 아래.
		for (int j = 0; j < r; j++) {
			for (int k = 0; k < c; k++) {
				if (k + 2 < c && candys[j][k] == '>' && candys[j][k + 1] == 'o' && candys[j][k + 2] == '<')
					count++;
				if (j + 2 < r && candys[j][k] == 'v' && candys[j + 1][k] == 'o' && candys[j + 2][k] == '^')
					count++;
			}
		}
		std::cout << count << "\n";
	}

	return (0);
}