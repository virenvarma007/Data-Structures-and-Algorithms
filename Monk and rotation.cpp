#include <iostream>
using namespace std;

int main(){
    int t,n,k;
    cin>>t;
    for(int i=0; i<t; i++){
    int m;
    cin>>n>>k;
    int a[n],b[n];
    for(int j=0; j<n; j++){
    cin>>a[j];
    b[j]=a[j];
    }
    for(int j=0; j<n; j++){
        m=j-k;
        if(m<0){
            m=n+m;
        }
        a[j]=b[m];
        cout<<a[j]<<" ";
    }
    cout<<endl;
    }
}
