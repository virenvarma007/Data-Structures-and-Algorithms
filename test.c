#include <stdio.h>


int main(){
	int n=0,t=0,a=0,b=0,c=0;
	scanf("%d",&t);
	repeat:
	for(int i=0; i<t; i++){
		scanf("%d",&n);
        if(n>108){
            printf("error");
            goto repeat;
        }
		a=n/12;
		a++;
		if(n%12==0){
			--a;
		}
		b=24*(a-1)+13-n;
		printf("%d",b);
		c=b-n;
		if(c<0){
            c=c*(-1);
		}
		switch(c){
			case 11:
			case 1: printf(" WS");
			break;
			case 9:
			case 3: printf(" MS");
			break;
			case 7:
			case 5: printf(" AS");
			break;
		}
		printf("\n");
	}       // Writing output to STDOUT
}
