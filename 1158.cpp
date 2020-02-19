#include <cstdio>
#include <queue>
using namespace std;

int main() {
	int N, M;
	queue<int> q;
	
	scanf("%d %d", &N, &M);
	
	for (int i=1; i<=N; i++)
		q.push(i);
	
	printf("<");
	while (!q.empty()) {
		for (int i=0; i<M-1; i++) {
			int front = q.front();
			q.pop();
			q.push(front);
		}
		int front = q.front();
		
		if (q.size() == 1)
			printf("%d", front);
		else 
			printf("%d, ", front);
		q.pop();
	}
	printf(">");
	
	return 0;
}
