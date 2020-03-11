#include <cstdio>

int d[11];

int main() {
	int T;
	scanf("%d", &T);
	
	d[1] = 1;
	d[2] = 2;
	d[3] = 4;
	
	for(int i=4; i<=11; i++) {
		d[i] = d[i-1] + d[i-2] + d[i-3];
	}
	
	for(int i=0; i<T; i++) {
		int N;
		scanf("%d", &N);
		
		printf("%d\n", d[N]);
	}
	
	return 0;
}
