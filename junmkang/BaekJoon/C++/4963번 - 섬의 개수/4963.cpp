#include <iostream>
#include <cstring>
#include <queue>

int		dir[2][8] = {{-1, -1, -1, 0, 0, 1, 1, 1}, {-1, 0, 1, -1, 1, -1, 0, 1}};
int		island[51][51];

void	bfs(int h, int w, int y, int x)
{
	int tempY, tempX;
	std::queue <std::pair<int, int> > que;
	std::pair <int, int> temp;

	que.push(std::make_pair(y, x));
	island[y][x] = -1;
	while (!que.empty())
	{
		temp = que.front();
		que.pop();
		for (int j = 0; j < 8; j++) {
			tempY = temp.first + dir[0][j];
			tempX = temp.second + dir[1][j];
			if (h <= tempY || w <= tempX || tempY < 0 || tempX < 0) continue;
			if (island[tempY][tempX] == 1) {
				island[tempY][tempX] = -1;
				que.push(std::make_pair(tempY, tempX));
			}
		}
	}
}

int		main(void)
{
	int w, h, count;

	while (true)
	{
		std::cin >> w >> h;
		if (w == 0 && h == 0) break;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				std::cin >> island[i][j];
			}
		}
		count = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (island[i][j] == 1) {
					bfs(h, w, i, j);
					count++;
				}
			}
		}
		std::memset(island, -1, sizeof(island));
		std::cout << count << "\n";
	}
	
	return (0);
}