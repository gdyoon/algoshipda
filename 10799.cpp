#include <iostream>
#include <stack>
using namespace std;

int main() {
	string bracket;
	stack<int> s;
	int ans = 0;
	
	cin >> bracket;
	
	int size = bracket.size();
	
	for (int i=0; i<bracket.size(); i++) {
		if (bracket[i] == '(') {
			s.push(i);
		}
		
		if (bracket[i] == ')') {
			int t = s.top();
			s.pop();
			
			if (i == t+1) {
				ans += s.size();
			} else {
				ans += 1;
			}
		}
	}
	cout << ans << endl;
	
	return 0;
}
