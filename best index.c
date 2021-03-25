#include <stdio.h>
#include <string.h>

int main(){
    int n=0;
    scanf("%d",&n);
    int a[n];
    int sum=0;
    int b[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<(n-2); i++){
            sum=0;
        for(int j=i; j<(n-2); j=j+3){
            sum=sum+a[j]+a[j+1]+a[j+2];
        }
        b[i]=sum;
    }
    b[n-2]=a[n-2];
    b[n-1]=a[n-1];
    for(int i=0; i<(n-1); i++){
        if(b[i]>b[(i+1)]){
            b[(i+1)]=b[i];
        }
    }
    printf("%d",b[n-1]);
    return 0;
}
