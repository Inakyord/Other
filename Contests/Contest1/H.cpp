//Template muy sencillo para problemas directos

#include <bits/stdc++.h>

using namespace std;

int main() {
	
    int test; 
    deque <long long> listNum;
    long long value;
    char aux[11];
    string operation;
    
    scanf("%d", &test);

    while(test--) {
    	
    	scanf("%11s", aux);
        operation = aux;
        scanf("%lld", &value);

        if (!operation.compare("push_back")){
            listNum.push_back(value);

        } else if (!operation.compare("push_front")){
            listNum.push_front(value);

        } else if (!operation.compare("push_middle")){
            listNum.insert(listNum.begin()+((listNum.size()+1)/2),value);

        } else {
            printf("%lld\n", listNum[value]);
        }

    }

	return 0;
}