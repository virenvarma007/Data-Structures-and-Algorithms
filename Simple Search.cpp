#include <iostream>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int a[n];
    for(long long int i=0; i<n; i++){
        cin>>a[i];
    }
    long long int k;
    cin>>k;
    for(long long int i=0; i<n; i++){
        if(a[i]==k){
            cout<<i<<endl;
            break;
        }
    }
}
