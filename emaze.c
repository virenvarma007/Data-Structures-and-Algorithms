#include <stdio.h>
#include <string.h>

int main() {
    int x=0, y=0, n=0;
    char a[10000];
    scanf("%s",a);
    n=strlen(a);
    for(int i=0; i<n; i++){
        if(a[i]=='L'){
            x=x-1;
        }
        if(a[i]=='R'){
            x=x+1;
        }
        if(a[i]=='U'){
            y=y+1;
        }
        if(a[i]=='D'){
            y=y-1;
        }
    }
    printf("%d %d",x,y);
    return 0;
}
