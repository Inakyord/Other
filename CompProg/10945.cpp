#include <stdio.h>
#include <iostream>
#include <string>
#include <queue>
#include <stack>
using namespace std;

int main() {

	string line;
	queue<char> order;
	stack<char> reverse;
	char a;
	int result;

	while (getline(cin, line) , line!="DONE") {
		result=0;

		for(int i=0; i<line.size(); i++){
			a=tolower(line.at(i));
			if(a!='.' && a!=',' && a!='!' && a!='?' && a!=' '){
				order.push(a);
				reverse.push(a);
			}
		}

		while (!order.empty() && !result) {
			if (!(order.front()==reverse.top())) {
				result=1;
			}
			order.pop();
			reverse.pop();
		}

		if(result) {
			printf("Uh oh..\n");
		}else {
			printf("You won't be eaten!\n");
		}
		
		while(!order.empty()) {
			order.pop();
			reverse.pop();
		}

	}



	return 0;
}