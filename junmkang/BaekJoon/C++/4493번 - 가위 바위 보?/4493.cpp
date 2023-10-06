#include <iostream>

int r[3] = {0, -1, 1};
int p[3] = {1, 0, -1};
int s[3] = {-1, 1, 0};

int		rps(char p2, int x[3])
{
	if (p2 == 'R') return x[0];
	else if (p2 == 'P') return x[1];
	else return x[2];
}

int		main(void)
{
	int t, n, p1win;
	char p1, p2;

	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::cin >> n;
		p1win = 0;
		for (int j = 0;j < n; j++) {
			std::cin >> p1 >> p2;
			if (p1 == 'R') p1win += rps(p2, r);
			if (p1 == 'P') p1win += rps(p2, p);
			if (p1 == 'S') p1win += rps(p2, s);
		}
		if (0 == p1win) std::cout << "TIE" << "\n";
		else if (1 <= p1win) std::cout << "Player 1" << "\n";
		else std::cout << "Player 2" << "\n"; 
	}

	return (0);
}