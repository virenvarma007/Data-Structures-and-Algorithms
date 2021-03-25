#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    queue <int> q,w;
    for(int i=0; i<n; i++){
        cin>>a[i];
        q.push(a[i]);
    }
    w=q;
    int b=a[0];
    for(int i=1; i<=n; i++){
        while(q.empty()==false){
            b=q.front();
            q.pop();
            if(q.empty()==false && b<q.front()){
                cout<<b<<" "<<q.front()<<" ";
                q.pop();
            }
            else if(q.empty()==false && b>q.front()){
                cout<<b<<" ";
                q.pop();
                break;
            }
        }
        cout<<"\n";
    }
}
