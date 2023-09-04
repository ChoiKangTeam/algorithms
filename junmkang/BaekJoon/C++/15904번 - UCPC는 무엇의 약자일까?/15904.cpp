#include <iostream>
#include <string>

int		main(void)
{
	int t = 0;
	std::string s, ucpc = "UCPC";

	std::getline(std::cin, s);
	for (int i = 0; i < s.length(); i++) {
		if (ucpc[t] == s[i])
			t++;
	}
	if (t == 4) std::cout << "I love UCPC" << "\n";
	else std::cout << "I hate UCPC" << "\n";

	return (0);
}