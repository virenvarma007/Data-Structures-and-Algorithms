#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int T=0; T<t; T++){
        int n;
        cin>>n;
        int A[n];
        for(int i=0; i<n; i++){
            cin>>A[i];
        }
        sort(A,A+n);
        int x;
        int ans=0;
        for(int i=0; i<n; i++){
            x=i/6;
            A[i]=A[i]-x;
            if(A[i]==i){
                cout<<"Goodbye Rick"<<endl;
                cout<<i<<endl;
                ans=ans+1;
                break;
            }
        }
        if(ans==0){
            cout<<"Rick now go and save Carl and Judas"<<endl;
        }
    }
}
