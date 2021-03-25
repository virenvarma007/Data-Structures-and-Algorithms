#include <stdio.h>


int mod(int z){
    if(z<0){
        z=z*(-1);
    }
    return z;
}


int main(){
    int n=0, k=0;
    int min=0,x=0;
    scanf("%d %d",&n,&k);
    int a[n],b[n];
    for(int i=0; i<n; i++){
        b[i]=0;
    }
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        min=min+a[i];
    }

    printf("%d",min);
}

