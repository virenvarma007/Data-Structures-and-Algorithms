#include <stdio.h>
#include <math.h>

int getfact(int a){
    int m=1;
    int x=0, b=0;
    for(int i=1; i<=a; i++){
        for(int j=7; j>=1; j--){
            b=pow(5,j);
        if(i%b==0){
            m=m+j;
            break;
        }
        }
    }
    return m;
}
int main(){
    int t,x=0,m=0,n;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        scanf("%d",&n);
        for(int j=0;;j++){
            m=getfact(j);
            if(m==n){
                printf("5\n");
                printf("%d %d %d %d %d",j,j+1,j+2,j+3,j+4);
                x=1;
                break;
            }

        }
    }
}
