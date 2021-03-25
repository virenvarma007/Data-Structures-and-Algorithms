#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int T=0; T<t; T++){
        int n,k;
    cin>>n>>k;
    int c[n];
    list<int> l1;
    for(int i=0; i<n; i++){
        cin>>c[i];
        l1.push_back(c[i]);
    }
    list<int> :: iterator it,a,b;
    b=l1.begin();
    l1.reverse();
    for(int i=0; i<k; i++){
        bool deleteFriend= false;
        for(it=b; it!=l1.end(); it++){
            if(it==l1.begin()){
                a=l1.begin();
                continue;
            }
            if(*it<*a){
                l1.erase(it);
                deleteFriend=true;
                b=a;
                break;
            }
            a=it;
        }
        if(deleteFriend==false){
            l1.pop_back();
            b=l1.end();
        }
    }
    l1.reverse();
    for(it=l1.begin();it!=l1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    }
}
