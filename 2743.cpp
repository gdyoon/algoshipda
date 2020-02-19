#include <cstdio>

int main() {
	char c[100];
	int size = 0;
	
	scanf("%s", c);
	for (int i=0; c[i]; i++)
		size += 1;
	printf("%d\n", size);
	
	return 0;
}
