#include <bits/stdc++.h>

using namespace std;

void setIO(){
    string file = FILE;

    file = string(file.begin(), file.end()-3);
    string out_file = file + "out";
    string in_file = file + "in";

    freopen(in_file.c_str(), "r", stdin);
    freopen(out_file.c_str(), "w", stdout);
}

void solution(int a,int b, int c){
    int hip ;

    (c*c == a*a + b*b) ? cout<<"right\n" : cout<<"wrong\n";


}

int main(){
    if(getenv("CP_IO"))
        setIO();

    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c) == 1,a,b,c){
        solution(a,b,c);
    }
    return 0;
}