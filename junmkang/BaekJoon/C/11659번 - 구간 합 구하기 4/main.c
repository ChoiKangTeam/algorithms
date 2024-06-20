#include <stdio.h>

int arr[100001];

int main(void) {
	int n, m;

	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
		arr[i] = arr[i - 1] + arr[i];
	}
	int x, y;
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &x, &y);
		printf("%d\n", arr[y] - arr[x-1]);
	}

	return (0);
}