#include <stdio.h>

int main()
{
    char x[20];
    int k,l;
    scanf("%s%d",x,&k);
    l=strlen(x);
    int i=-1;
    while(k>0 && i++<l){
        if(x[i]==57)continue;
        x[i]=57;
        k--;
    }
    printf("%s",x);
    return 0;
}
