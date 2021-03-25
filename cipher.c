#include <stdio.h>
#include <string.h>

int main(){
    char a[10000];
    int k;
    scanf("%s",a);
    scanf("%d",&k);
    int l=k;
    int n=strlen(a);
    char b[n];
         if(k>26){
                k=k%26;
            }
    for(int i=0; i<n; i++){

        if(a[i]>(90-k) && a[i]<=90){
            b[i]=a[i];
        }
        if(a[i]>(122-k) && a[i]<=122){
            b[i]=a[i];
        }
        if((a[i]>=65 && a[i]<=(90-k)) || (a[i]>=97 && a[i]<=(122-k))){
            a[i]=a[i]+k;
        }
        if(b[i]>(90-k) && b[i]<=90){
            a[i]=65+(k-90+a[i]-1);
        }
        if(b[i]>(122-k) && b[i]<=122){
            a[i]=97+(k-122+a[i]-1);
        }
    }
            k=l;
            if(k>10){
                k=k%10;
            }

    for(int i=0; i<n; i++){

        if(a[i]>(57-k) && a[i]<=57){
            b[i]=a[i];
        }
        if(a[i]>=48 && a[i]<=(57-k)){
            a[i]=a[i]+k;
        }
        if(b[i]>(57-k) && b[i]<=57){
            a[i]=48+(k-57+a[i]-1);
        }
    }
    for(int i=0; i<n; i++){
        printf("%c",a[i]);
    };
}
