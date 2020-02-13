#include <cstdio>

int main() {
	char ans[100];
	
	while(fgets(ans, sizeof(ans), stdin) != NULL) {
		printf("%s\n", ans);
	}
	
	return 0;
}
