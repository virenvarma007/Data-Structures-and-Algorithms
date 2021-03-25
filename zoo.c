#include <stdio.h>
#include <string.h>

int main() {
    char a[20];
    int n,x1,y1,x,y;
    scanf("%s",a);
    for(int i=0; i<20; i++){
        if(a[i]=='\0'){
            n=i;
            break;
        }
    }
    if(n%3!=0){
        printf("No");
        goto end;
    }
    for(int i=0; a[i]=='z'; i++){
        x=i;
    }
    ++x;
    y=n-x;
    for(int i=x; i<n; i++){
        if(a[i]!='o'){
            printf("No");
            goto end;
        }
    }
    if(y==(2*x)){
        printf("Yes");
    }
    end:
    return 0;
}
