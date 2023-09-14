#include <iostream>
#include <vector>

int check[1001][1001];

// [학년][반][번호]
int		main(void)
{
	int n, student, temp, count, max, number;
	std::vector <int> vec[6][10];

	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 5; j++) {
			std::cin >> student;
			vec[j][student].push_back(i);
		}
	}
	for (int i = 1; i <= 5; i++) {
		// std::cout << i << " 학년" << "\n";
		for (int j = 1; j <= 9; j++) {
			// std::cout << j << " 반 : " << " ";
			for (int k = 0; k < vec[i][j].size(); k++) {
				temp = vec[i][j][k];
				// std::cout << temp << " ";
				for (int l = 0; l < vec[i][j].size(); l++) {
					check[temp][vec[i][j][l]] = 1;
				}
			}
			// std::cout << "\n";
		}
		// std::cout << "\n";
	}
	max = -1;
	number = 0;
	for(int i = 1; i <= n; i++) {
		count = 0;
		for (int j = 1; j <= n; j++) {
			if (check[i][j])
				count++;
		}
		if (max < count) {
			max = count;
			number = i;
		}
	}

	std::cout << number;
}