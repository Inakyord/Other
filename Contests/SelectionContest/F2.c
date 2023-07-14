#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

	char string[1000000];
    int i;
    int j;

    scanf("%s", string);
  
    for (i = 0; string[i] != '\0'; i++){
    	if(string[i]=='R'){
    		if((string[i+1]=='B' && string[i+2]=='L')||(string[i+1]=='L' && string[i+2]=='B')){
    			printf("C");
    			i+=2;
    			j-=2;
    		}else{
    			printf("S");
    		}
    	
    	}else if(string[i]=='B'){
    		if((string[i+1]=='R' && string[i+2]=='L')||(string[i+1]=='L' && string[i+2]=='R')){
    			printf("C");
    			i+=2;
    			j-=2;
    		}else{
    			printf("K");
    		}

    	}
    	else{
    		if((string[i+1]=='R' && string[i+2]=='B')||(string[i+1]=='B' && string[i+2]=='R')){
    			printf("C");
    			i+=2;
    			j-=2;
    		}else{
    			printf("H");
    		}
    	}
    }

	return 0;
}