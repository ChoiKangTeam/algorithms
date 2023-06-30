from sys import stdin
import heapq

n = int(stdin.readline())
heap = []

for i in range(n):
	x = int(stdin.readline())
	if x == 0:
		if heap:
			print(-heapq.heappop(heap))
		else:
			print(0)
	else:
		heapq.heappush(heap, -x)