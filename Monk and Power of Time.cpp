#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    queue <int> c,i1;
    for(int i=0; i<n; i++){
        cin>>a[i];
        c.push(a[i]);
    }
    int d;
    for(int i=0; i<n; i++){
        cin>>d;
        i1.push(d);
    }
    int num=0;
    while(c.empty()==false){
        if(c.front()==i1.front()){
            num=num+1;
            c.pop();
            i1.pop();
        }
        else if(c.front()!=i1.front()){
            num=num+1;
            c.push(c.front());
            c.pop();
        }
    }
    cout<<num;
}
