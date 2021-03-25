#include <stdio.h>

int main(){
    int t,n=0,m;
    scanf("%d",&t);
    for(int i=0; i<t;i++){
        scanf("%d",&n);
        if(n==0){
                printf("5\n");
            printf("0 1 2 3 4");
        }
        if(n>=1 && n<5){
            m=5+5*(n-1);
            printf("5");
            printf("%d %d %d %d %d\n",m,(m+1),(m+2),(m+3),(m+4));
        }
        if(n>=6 && n<25){
            m=(5*5)+5*(n-6);
        printf("5\n");
            printf("%d %d %d %d %d\n",m,(m+1),(m+2),(m+3),(m+4));
        }
        if(n>=28 && n<125){
            m=(5*5*5)+5*(n-28);
            printf("5\n");
            printf("%d %d %d %d %d\n",m,(m+1),(m+2),(m+3),(m+4));
        }
        if(n>=131 && n<625){
            m=(5*5*5*5)+5*(n-131);
            printf("5\n");
            printf("%d %d %d %d %d\n",m,(m+1),(m+2),(m+3),(m+4));
        }
        if(n>=635 && n<3125){
            m=(5*5*5*5*5)+5*(n-635);
            printf("5\n");
            printf("%d %d %d %d %d\n",m,(m+1),(m+2),(m+3),(m+4));
        }
        if(n>=3140 && n<15625){
            m=(5*5*5*5*5*5)+5*(n-3140);
            printf("5\n");
            printf("%d %d %d %d %d\n",m,(m+1),(m+2),(m+3),(m+4));
        }
        if(n>=15646 && n<390625){
            m=(5*5*5*5*5*5*5)+5*(n-15646);
            printf("5\n");
            printf("%d %d %d %d %d\n",m,(m+1),(m+2),(m+3),(m+4));
        }
        if(n==5 || (n>=25 && n<28) || (n>=125 && n<131) || (n>=625 && n<635) || (n>=3125 && n<3140) || (n>=15625 && n<15646)){
            printf("0\n");
        }

    }
}
