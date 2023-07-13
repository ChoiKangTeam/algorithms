#include <iostream>
#include <algorithm>
#include <vector>

// 가로 0, 세로 1
int		main(void)
{
	int		y, x, n, dir, num, rowMax = -1, columnMax = -1;
	std::vector <int> row, column;

	std::cin >> x >> y;
	std::cin >> n;
	row.push_back(0);
	row.push_back(x);
	column.push_back(0);
	column.push_back(y);
	for(int i = 0; i < n; i++) {
		std::cin >> dir >> num;
		if (dir == 1) row.push_back(num);
		else column.push_back(num);
	}
	std::sort(row.begin(), row.end());
	std::sort(column.begin(), column.end());
	
	for (int i = 0; i < row.size(); i++)
		if (row.size() > i + 1 && row[i + 1] - row[i] > rowMax)
			rowMax = row[i + 1] - row[i];
	for (int i = 0; i < column.size(); i++)
		if (column.size() > i + 1 && column[i + 1] - column[i] > columnMax)
			columnMax = column[i + 1] - column[i];
	std::cout << rowMax * columnMax;
	
	return (0);
}