#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a,b;
    list<int> x1,y1;
    int ans=n*n;
    for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                x1.push_back(i);
                y1.push_back(j);
            }
    }
    list<int>::iterator itr;
    for(int i=0; i<k; i++){
        cin>>a>>b;
        x1.remove(a);
        y1.remove(b);
        ans=x1.size()*y1.size();
        cout<<ans<<" ";
    }
}
