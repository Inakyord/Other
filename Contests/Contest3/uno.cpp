//Template completo, todas las bibliotecas y I/O archivos

#include <bits/stdc++.h>
using namespace std;



void setIO() {
    string file = __FILE__;
    file = string(file.begin(), file.end()-3);
    string input_file = file + "in";
    string output_file = file + "out";
    freopen(input_file.c_str(), "r", stdin);
    freopen(output_file.c_str(), "w", stdout);
}


// ---------------------------------------------------------------
// Here begins our solution
// ---------------------------------------------------------------


void solve() {
	
	string word;
	bool flagL=0;
	char ante, actual, sig;
	int resultado=0;
	int consonantes=0;
	int vocales=0;
	int mixto=0;
	bool prob=0;
	int arr[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	int j=0;
	int k;

	getline(cin, word);		

	s = word.size();

	for(int i=0; i<s; i++){
		if(word[i]=='L'){
			flagL=1;
		}
		if(word[i]='_'){
			arr[j]=i;
			j++;
		}else if(word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U'){
			word[i]='1';
		}else{
			word[i]='0';
		}
	}

	for(int i=1; i<s; i++){
		if(word[i-1]==word[i] && word[i]==word[i+1] && word[i]!='_'){
			prob = 1;
			i=s;
		}
	}
	if(!prob){
		if(word[0]==word[1] && word[1]==word[2] && word[0]!='_'){
			prob = 1;
		}
	}

	if(!prob){

		if(arr[0]==0){ // _ en primera letra
			k++;

		}

		if(arr[j-1]==s-1){ // _ en última letra
			j--;

		}

		for(int i=k; i<j; i++){

			if(word[arr[i]-1]==word[arr[i]+1]){
				if(word[arr[i]-1]=='0'){ // rodeado de consonantes
					word[arr[i]]='1';
					vocales++;
				}else{ // rodeado de vocales
					word[arr[i]]='0';
					consonantes++;
				}
			}

			if(word[arr[i]-1]=='_' && word[arr[i]+1]=='_'){

			}else


		}



	}


	if(!flagL){ // no hay una L
		if(consonantes==0){
			prob=1;
		}else{
			consonantes--;
		}
	}
	resultado = consonantes*21+vocales*5;

	if(prob){
		printf("0");
	}else{
		printf("%d", resultado);
	}

}


int main() {

	// I/O archivos
	setIO();
	
	solve();
	
	return 0;
}