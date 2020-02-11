#include <cstdio>
#define EOF 2

int main(){
	int a, b;
	
	while (scanf("%d %d", &a, &b) == EOF) {
		printf("%d\n", a + b);
	}
	
	return 0;
}
