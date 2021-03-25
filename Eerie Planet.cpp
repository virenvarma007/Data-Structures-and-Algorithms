#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int H,C,Q;
    cin>>H>>C>>Q;
    long long int h[C],S[C],E[C];
    queue <int> hq,Sq,Eq;
    for(int i=0; i<C; i++){
        cin>>h[i]>>S[i]>>E[i];
        hq.push(h[i]);
        Sq.push(S[i]);
        Eq.push(E[i]);
    }
    long long int t,hi;
    int ans=0;
    for(int i=0; i<Q; i++){
        ans=0;
        cin>>hi>>t;
        for(int i=0; i<C; i++){
            if(hi<=h[i] && t>=S[i] && t<=E[i]){
                ans=ans+1;
                break;
            }
        }
        if(ans==0){
            cout<<"YES"<<endl;
        }
        else if(ans!=0){
            cout<<"NO"<<endl;
        }
    }
}
