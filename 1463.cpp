#include <cstdio>

int d[1000000];

int main() {
	int N;
	
	scanf("%d", &N);
	
	d[1] = 0;
	for (int i=2; i<=N; i++) {
		d[i] = d[i-1] + 1;
		
		if (i % 2 == 0 && d[i] > d[i/2] + 1) {
			d[i] = d[i/2] + 1;
		}
		
		if (i % 3 == 0 && d[i] > d[i/3] + 1) {
			d[i] = d[i/3] + 1;
		}
	}
	printf("%d", d[N]);
	
	return 0;
}
