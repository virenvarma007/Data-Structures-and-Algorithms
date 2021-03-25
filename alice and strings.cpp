#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,b;
    int c;
    getline(cin, a);
    getline(cin, b);
    if(a.size()!=b.size()){
        cout<<"NO"<<endl;
    }
    else{
      for(int i=0; i<a.size(); i++){
        if(a[i]=='z'){
            cout<<"NO"<<endl;
            break;
        }
        c=b[i]-a[i];
        if(c<0){
            cout<<"NO"<<endl;
            break;
        }
        if(i==(a.size()-1)){
            cout<<"YES"<<endl;
        }
      }
    }
}
