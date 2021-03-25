#include <stdio.h>

int main(){
    int a=0,b=0,d=0;
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
            d=0;
        scanf("%d%d",&a,&b);
        if(a>b){
            d=a/b;
        }
        if(b>a){
            d=b/a;
        }
        if(d==0){
            d=1;
        }
        printf("%d\n",d);
    }
}
