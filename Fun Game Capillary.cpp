#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int s[n];
    stack <int> a,b;
    for(int i=0; i<n; i++){
        cin>>s[i];
        b.push(s[i]);
    }
    for(int i=n-1; i>=0; i--){
        a.push(s[i]);
    }
    while(a.empty()==false && b.empty()==false){
        if(a.top()>b.top()){
            cout<<"1"<<" ";
            b.pop();
        }
        else if(a.top()<b.top()){
            cout<<"2"<<" ";
            a.pop();
        }
        else if(a.top()==b.top()){
            cout<<"0"<<" ";
            a.pop();
            b.pop();
        }
    }
}
