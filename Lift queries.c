#include <stdio.h>
#include <string.h>

int main() {
    int a=1;
    int b=7;
    int t,n;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        scanf("%d",&n);
        if(mod(n-a)<mod(n-b)){
                a=n;
            printf("A\n");
        }
        if(mod(n-a)>mod(n-b)){
            b=n;
            printf("B\n");
        }
        if(mod(n-a)==mod(n-b)){
            if(a<b){
                printf("A\n");
                a=n;
            }
            if(a>b){
                printf("B\n");
                b=n;
            }
        }
    }
    return 0;
}

int mod(int x){
    if(x<0){
        x=x*(-1);
    }
    return x;
}
