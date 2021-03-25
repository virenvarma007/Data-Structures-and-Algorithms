#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int T=0; T<t; T++){
        map<int,int> map1;
        int b;
        list<int> l1[10];
        for(int i=0; i<32; i++){
            b=(i*i)%10;
            l1[b].push_back(i*i);
            if(i<11){
            b=(i*i*i)%10;
            l1[b].push_back(i*i*i);
            }
        }
        int n,c,d, ans=0;
        list<int>:: iterator itr;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                c=a[i]+a[j];
                if(c%10==0 || c%10==2 || c%10==3){
                    continue;
                }
                d=c%10;
                for(itr=l1[d].begin(); itr!=l1[d].end(); itr++){
                    if(*itr==c){
                        ++ans;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}
