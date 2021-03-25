#include <iostream>
using namespace std;

int main(){
    int t=2;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,k,mini;
        cin>>n>>k;
        int a[n];
        for(int j=0; j<n; j++){
            cin>>a[j];
        }
        for(int j=0; j<n-1; j++){
            if(a[j]<a[j+1]){
                mini=a[j];
            }
            else{
                mini=a[j+1];
            }
        }
        cout<<mini<<endl;
        if(k-mini>=0){
            cout<<k-mini<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}
