#include <iostream>
using namespace std;


int main(){
    int t,n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        int x[n], y[n], h[n], a[n];
        int m=0;
        int med;
        int tot=0, ans=0;
        for(int i=0; i<n; i++){
            cin>>x[i]>>y[i]>>h[i];
            m=m+h[i];
            a[i]=y[i]-x[i];
        }
        int b[m];
        int temp;
    for(int k = 0; k< n-1; k++) {
        for(int i = 0; i < n-k-1; i++) {
            if(a[ i ] > a[ i+1] ) {
                temp = a[ i ];
                a[ i ] = a[ i+1 ];
                a[ i + 1] = temp;
                temp = h[ i ];
                h[ i ] = h[ i+1 ];
                h[ i + 1] = temp;
            }
        }
    }
    if(m%2==0){
        med=m/2;
        for(int i=0; i<n; i++){
            tot=tot+h[i];
            if(tot==med){
                ans=ans+1;
                break;
            }
        }
    }
    if(m%2!=0){
        med=(m/2)+1;
        for(int i=0; i<n; i++){
            tot=tot+h[i];
            if(tot==med){
                ans=ans+1;
                break;
            }
        }
    }
    if(ans!=0){
        cout<<"YES"<<endl;
    }
    if(ans==0){
        cout<<"NO"<<endl;
    }
    }
}
