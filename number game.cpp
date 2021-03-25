#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int la[n],sa[n];
    stack <int> s,l;
    vector <int> ans;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=n-1; i>=0; i--){

        while(l.empty()==false && a[l.top()]<a[i]){
            l.pop();
        }
        if(l.empty()==true){
            la[i]=-1;
        }
        if(l.empty()==false){
            la[i]=l.top();
        }
        while(s.empty()==false && a[s.top()]>a[i]){
            s.pop();
        }
        if(s.empty()==true){
            sa[i]=-1;
        }
        if(s.empty()==false){
            sa[i]=s.top();
        }
        if(sa[i]==-1 || la[i]==-1){
            ans.push_back(-1);
        }
        if(sa[i]!=-1 && la[i]!=-1){
            ans.push_back(a[sa[i]]);
        }
        s.push(i);
        l.push(i);
    }
    for(auto ir=ans.crbegin(); ir!=ans.crend();ir++){
        cout<<*ir<<" ";
    }
}
