#include <iostream>
using namespace std;

int main(){
    long long int n, a[n], b[n];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i]=i;
    }
    int temp, bemp;
    for(int k = 0; k< n-1; k++) {
        for(int i = 0; i < n-k-1; i++) {
            if(a[ i ] > a[ i+1] ) {
                temp = a[ i ];
                a[ i ] = a[ i+1 ];
                a[ i + 1] = temp;
                bemp=b[i];
                b[i]=b[i+1];
                b[i+1]=bemp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
