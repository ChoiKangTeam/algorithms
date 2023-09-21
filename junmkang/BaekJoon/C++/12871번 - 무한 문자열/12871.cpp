#include <iostream>
#include <string>

void	strCheck(std::string str1, std::string str2)
{
	int len = 0;

	for (int i = 0; i < str1.length(); i++) {
		if (len == str2.length()) len = 0;
		if (str1[i] == str2[len]) len++;
		else {
			std::cout << "0" << "\n";
			return ;
		}
	}
	std::cout << "1" << "\n";
	return ;
}

int		main(void)
{
	std::string s, t;

	std::cin >> s >> t;
	if (s.length() <= t.length()) strCheck(t + t, s + s);
	else strCheck(s + s, t + t);

	return (0);
}