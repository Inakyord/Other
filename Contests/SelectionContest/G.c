#include <stdio.h>
#include <stdlib.h>

int main(void){

	char string[1000];
	int res[]={0,0,0};
    int i;

    scanf("%s", string);

    if(string[0]=='U'){
    	if(string[1]=='U'){
    		res[0]+=0;
    		res[1]+=1;
    		res[2]+=0;
    	}else{
    		res[0]+=2;
    		res[1]+=1;
    		res[2]+=1;
    	}
    }else{
    	if(string[1]=='U'){
    		res[0]+=1;
    		res[1]+=2;
    		res[2]+=1;
    	}else{
    		res[0]+=1;
    		res[1]+=0;
    		res[2]+=0;
    	}
    }

    for (i = 2; string[i] != '\0'; i++){
    	if(string[i-1]=='U'){
    		if(string[i]=='U'){
    			res[0]+=0;
    			res[1]+=2;
    			res[2]+=0;
    		}else{
    			res[0]+=2;
    			res[1]+=0;
    			res[2]+=1;
    		}
    	}else{
    		if(string[i]=='U'){
    			res[0]+=0;
    			res[1]+=2;
    			res[2]+=1;
    		}else{
    			res[0]+=2;
    			res[1]+=0;
    			res[2]+=0;
    		}
    	}
    }

    printf("%d", res[0]);
    for(i=1; i<3; i++)
    	printf("\n%d", res[i]);

	return 0;
}