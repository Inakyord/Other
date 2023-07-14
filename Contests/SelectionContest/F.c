#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

	char string[1000000];
	char *res;
    int i;
    int j;

    scanf("%s", string);
    j=strlen(string);
    res=malloc(j*sizeof(int));
  
    for (i = 0; string[i] != '\0'; i++){
    	if(string[i]=='R'){
    		if((string[i+1]=='B' && string[i+2]=='L')||(string[i+1]=='L' && string[i+2]=='B')){
    			res[j]='C';
    			i+=2;
    			j-=2;
    		}else{
    			res[j]='S';
    		}
    	
    	}else if(string[i]=='B'){
    		if((string[i+1]=='R' && string[i+2]=='L')||(string[i+1]=='L' && string[i+2]=='R')){
    			res[j]='C';
    			i+=2;
    			j-=2;
    		}else{
    			res[j]='K';
    		}

    	}
    	else{
    		if((string[i+1]=='R' && string[i+2]=='B')||(string[i+1]=='B' && string[i+2]=='R')){
    			res[j]='C';
    			i+=2;
    			j-=2;
    		}else{
    			res[j]='H';
    		}
    	}
    }

    for(i=0; i<j; i++)
    	printf("%c", res[i]);

    free(res);
	return 0;
}