#include <stdio.h>
#include <string.h>

int main(){
    int t=0,n=0,x=0;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
            x=0;
        scanf("%d",&n);
        char a[n];
        scanf("%s",a);
        for(int i=0; i<n; i++){
            if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u'){
                if(a[i+1]=='a' || a[i+1]=='e' || a[i+1]=='i' || a[i+1]=='o' || a[i+1]=='u'){
                    x++;
                }
            }
        }
    printf("%d\n",x);
    }
}
