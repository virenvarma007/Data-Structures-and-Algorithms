#include <iostream>
#include <string>
using namespace std;


int main(){
    int t;
    cin>>t;
    if(t>=1 && t<=20){
        for(int p=0; p<t; p++){
        unsigned int n, k;
        cin>>n>>k;
        unsigned int a[n], b[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            b[i]=a[i];
        }
        for(int j=0; j<n; j++){
            if(j-k>=0){
                a[j]=b[j-k];
            }
            if(j-k<0){
                a[j]=b[n+j-k];
            }
        }
        for(int x=0; x<n; x++){
            cout<<a[x]<<" ";
        }
    }
    }
}
