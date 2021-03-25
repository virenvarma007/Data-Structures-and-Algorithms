#include <stdio.h>
#include <string.h>


int main(){
    char a[100], b[100],c[101];
    scanf("%99s%99s",a,b);
     int x,y,z,d;
    for(int i=99;i<=0; --i){
            z=0;
            d=0;
        switch(a[i]){
            case 48: x=0;
            break;
            case 49: x=1;
            break;
            case 50: x=2;
            break;
            case 51: x=3;
            break;
            case 52: x=4;
            break;
            case 53: x=5;
            break;
            case 54: x=6;
            break;
            case 55: x=7;
            break;
            case 56: x=8;
            break;
            case 57: x=9;
            break;
        }
        switch(b[i]){
            case 48: y=0;
            break;
            case 49: y=1;
            break;
            case 50: y=2;
            break;
            case 51: y=3;
            break;
            case 52: y=4;
            break;
            case 53: y=5;
            break;
            case 54: y=6;
            break;
            case 55: y=7;
            break;
            case 56: y=8;
            break;
            case 57: y=9;
            break;
        }
        z=x+y;
        if(c[i]=='1'){
            ++z;
        }
        if(z>9){
            c[(i-1)]='1';
        }
        d=(z%10);
        switch(d){
            case 0: c[i]='0';
            break;
            case 1: c[i]='1';
            break;
            case 2: c[i]='2';
            break;
            case 3: c[i]='3';
            break;
            case 4: c[i]='4';
            break;
            case 5: c[i]='5';
            break;
            case 6: c[i]='6';
            break;
            case 7: c[i]='7';
            break;
            case 8: c[i]='8';
            break;
            case 9: c[i]='9';
            break;
        }
    }
    printf("%s",c);
}
