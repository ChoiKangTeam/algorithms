#include <iostream>

int		rps(char p1, char p2)
{
	if ((p1 == 'R' && p2 == 'S') || (p1 == 'P' && p2 == 'R') || (p1 == 'S' && p2 == 'P')) return (1);
	else if (p1 == p2) return (0);
	else return (-1);
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
			p1win += rps(p1, p2);
		}
		if (0 == p1win) std::cout << "TIE" << "\n";
		else if (1 <= p1win) std::cout << "Player 1" << "\n";
		else std::cout << "Player 2" << "\n"; 
	}

	return (0);
}