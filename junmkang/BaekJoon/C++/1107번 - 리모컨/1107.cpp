#include <iostream>
#include <string>

int		number[10];
bool	arr[1000001];

int		main(void)
{
	int n, m, temp, max, min, answer;
	std::string s, x;

	std::cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		std::cin >> temp;
		number[temp] = 1;
	}
	for (int i = 0; i <= 1000000; i++) {
		s = std::to_string(i);
		for (int j = 0; j < s.length(); j++) {
			if (number[s[j] - '0']) {
				arr[i] = true;
				break;
			}
		}
	}
	for (int i = n; ; i++) {
		if (!arr[i]) {
			max = i;
			break;
		}
	}
	min = -1;
	for (int i = n; ; i--) {
		if (!arr[i]) {
			min = i;
			break;
		}
	}
	int minLength, maxLength;

	minLength = (std::to_string(min)).length();
	maxLength = (std::to_string(max)).length();
	answer = std::min(n - min + minLength, max - n + maxLength);
	if (min == -1) answer = max - n + maxLength;
	answer = std::min(answer, std::abs(n - 100));
	std::cout << answer << "\n";

	return (0);
}
