#include <cstdio>
#include <cstring>
#include <stack>
using namespace std;

char text[600000];

int main() {
	int cnt;
	stack<char> s1, s2;
	
	scanf("%s", text);
	scanf("%d", &cnt);
	
	int text_size = strlen(text);
	for(int i=0; i<text_size; i++) {
		s1.push(text[i]);
	}
	
	for (int i=0; i<cnt; i++) {
		char cmd;
		
		scanf(" %c", &cmd);
		
		if (cmd == 'L') {
			if (!s1.empty()) {
				s2.push(s1.top());
				s1.pop();
			}
		} else if (cmd == 'D') {
			if (!s2.empty()) {
				s1.push(s2.top());
				s2.pop();
			}
		} else if (cmd == 'B') {
			if(!s1.empty()) {
				s1.pop();
			}
		} else if (cmd == 'P') {
			char alphabet;
			scanf(" %c", &alphabet);
			s1.push(alphabet);
		}
	}
	
	while (!s1.empty()) {
		s2.push(s1.top());
		s1.pop();
	}
	
	while (!s2.empty()) {
		printf("%c", s2.top());
		s2.pop();
	}
	
	return 0;
}
