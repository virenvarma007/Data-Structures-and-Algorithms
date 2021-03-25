#include <stdio.h>
#include <string.h>

int main(){
    int t=0,l=0;
    char m[10000];
    scanf("%d",&t);
    for(int i=0; i<t; i++){
            int n=0;
     scanf("%d",n);
     l=strlen(m);

     if(n%2==0){
        for(int i=0; i<(n/2); i++){
            printf("1");
        }
     }
     if(n%2!=0){
        printf("7");
        for(int i=0; i<((n/2)-1); i++){
            printf("1");
        }
     }
     printf("\n");
    }
}
