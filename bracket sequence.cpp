#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    cin>>a;
    int count=0, dir=0, x=0, num=0;
    for(int i=0; i<a.length(); i++){
            if(a[i]=='('){
                count++;
               }
            if(a[i]==')'){
                count--;
               }
    }
    if(count==0){
        for(int i=0; i<a.length(); i++){
            if(a[i]=='('){
                num++;
               }
    }
    cout<<num;
    }
    else{
        cout<<endl;
    }
}
