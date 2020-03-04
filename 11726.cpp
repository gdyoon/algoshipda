/**
 *  NOTE: https://www.acmicpc.net/problem/11726
 */
#include <cstdio>

int d[1000];

int main() {
	int N;
	
	scanf("%d", &N);
	
	d[0] = 1;
	d[1] = 1;
	
	for (int i=2; i<=N; i++) {
		d[i] = d[i-1] + d[i-2];
		d[i] = d[i] % 10007;
	}
	
	printf("%d\n", d[N]);
	
	return 0;
}
