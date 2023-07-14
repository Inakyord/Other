#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	long long T, n, i;
	string line, now;
	vector<char> linea;
	char aux;

	scanf("%d", &T);

	while(T--) {

		fflush(stdin);
		linea.clear();
		line.clear();
		getline(cin, line);

		sort(line.begin(), line.end());
		copy(line.begin(), line.end(), back_inserter(linea));

    	printf("%s\n", line.c_str()); 

    	int i=0;
    	while (!i) {
    		next_permutation(linea.begin(), linea.end());
    		for (vector<char>::iterator it = linea.begin(); it != linea.end(); it++)
    			now.push_back(*it);
    		if(!line.compare(now)) {
    			i=1;
    			now.clear();
    		}else {
    			printf("%s\n", now.c_str()); 
    			now.clear();
    		}
    	}

	}

	return 0;
}