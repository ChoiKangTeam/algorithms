#include <iostream>
#include <queue>

int		map_scan(int map[1001][1001], int new_map[1001][1001], int n, int m, int start_y, int start_x)
{
	int	map_check_y[4] = {0, 0, -1, 1};
	int	map_check_x[4] = {1, -1, 0, 0};
	std::queue<std::pair<int, int> > q;

	q.push(std::make_pair(start_y, start_x));
	new_map[start_y][start_x] = 0;
	while(!q.empty())
	{
		std::pair<int, int> temp = q.front();
		q.pop();
		for(int i = 0; i < 4; i++) {
			int temp_y = temp.first + map_check_y[i];
			int temp_x = temp.second + map_check_x[i];
			if (0 > temp_y || 0 > temp_x || temp_y >= n || temp_x >= m) continue;
			if (new_map[temp_y][temp_x] != -1 || map[temp_y][temp_x] != 1) continue;
			new_map[temp_y][temp_x] = new_map[temp.first][temp.second] + 1;
			q.push(std::make_pair(temp_y, temp_x));
		}
	}
	
	return (0);
}

int		main(void)
{
	int n, m, start_y, start_x;
	int map[1001][1001] = {0,};
	int new_map[1001][1001] = {0,};

	std::cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			std::cin >> map[i][j];
			if (map[i][j] == 2) {
				start_y = i;
				start_x = j;
			}
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if (map[i][j] == 0) new_map[i][j] = 0;
			else new_map[i][j] = -1;
		}
	}

	map_scan(map, new_map, n, m, start_y, start_x);

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			std::cout << new_map[i][j] << " ";
		}
		std::cout << "\n";
	}

	return (0);
}