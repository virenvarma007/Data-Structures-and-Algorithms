#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, num, key=-1;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=n-1; i>=0; i--){
            num=0;
        if(a[i]<key){
            continue;
        }
        if(a[i]==key){
            b[i]=a[i];
            continue;
        }
        for(int j=i+1; j<n; j++){
            if(a[i]>=a[j]){
                ++num;
            }
        }
    if(num==(n-1-i)){
        b[i]=a[i];
        key=a[i];
    }
    }
    for(int i=0; i<n; i++){
        if(b[i]!= 0){
            cout<<b[i]<<" ";
        }
    }
    cout<<endl;
    exit(0);
}
