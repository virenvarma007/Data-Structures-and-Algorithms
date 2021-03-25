#include <stdio.h>
#include <string.h>

int main(){
    int t=0;
    int n=0;
    char m[10000];
    scanf("%d",&t);
    for(int j=0; j<t; j++){
            n=0;
        scanf("%s",m);
        int l=strlen(m);
    for(int i=0; i<l; i++){
        if(m[i]==48){
            n=n+6;
        }
        if(m[i]=='1'){
            n=n+2;
        }
        if(m[i]=='2'){
            n=n+5;
        }
        if(m[i]=='3'){
            n=n+5;
        }
        if(m[i]=='4'){
            n=n+4;
        }
        if(m[i]=='5'){
            n=n+5;
        }
        if(m[i]=='6'){
            n=n+6;
        }
        if(m[i]=='7'){
            n=n+3;
        }
        if(m[i]=='8'){
            n=n+7;
        }
        if(m[i]=='9'){
            n=n+6;
        }
     }

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
