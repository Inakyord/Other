#include <stdio.h>

int main(){

	char string[1000000];
	char aux;
    int n, i, max;	

    scanf("%s", string);
    
    aux=string[0];
    n=1;
    max=1;

    for (i = 1; string[i] != '\0'; i++){
    	
    	if(string[i]==aux)
    		n++;
    	else{
    		if(max<n)
    			max=n;
    		aux=string[i];
    		n=1;
    	}
    }
    
    if(max<n)
    	printf("%d", n);
    else
    	printf("%d", max);

	return 0;
}