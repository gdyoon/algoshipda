#include <iostream>
#include <stack>
using namespace std;

int main() {
	int T;
	
	cin >> T;
	
	for (int i=0; i<T; i++) {
		string c, ans;
		stack<char> s;
		int j;
		
		cin >> c;
		
		for (j=0; j<c.size(); j++) {
			if (c[j] == '(') {
				s.push(c[j]);
			}
			if (c[j] == ')') {
				// '('가 없는데, ')'가 남은 경우 
				if (s.empty()) {
					ans = "NO";
					break;
				}
				s.pop();
			}
		}
		
		if (s.empty() && j == c.size()) {
			ans = "YES";
		} else {
			ans = "NO";
		}
		
		cout << ans << endl;
	}
	
	return 0;
}
