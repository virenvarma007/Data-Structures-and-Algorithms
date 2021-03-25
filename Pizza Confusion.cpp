#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    string b[n];
    for(int i=0; i<n; i++){
        cin>>b[i]>>a[i];
        cout<<endl;
    }
    int temp;
    string bemp;
    for(int k = 0; k< n-1; k++) {
        for(int i = 0; i < n-k-1; i++) {
            if(a[ i ] < a[ i+1] ) {
                temp = a[ i ];
                a[ i ] = a[ i+1 ];
                a[ i + 1] = temp;
                bemp = b[ i ];
                b[ i ] = b[ i+1 ];
                b[ i + 1] = bemp;

            }
        }
    }
    int lemp=a[0];
    string demp=b[0];
    for(int i=1; i<n; i++){
        if(a[i]!=lemp){
            break;
        }
        if(b[i-1].length()>b[i].length()){
            demp=b[i];
        }
        if(b[i-1].length()<b[i].length()){
            demp=b[i-1];
        }
    }
    cout<<demp;

}
