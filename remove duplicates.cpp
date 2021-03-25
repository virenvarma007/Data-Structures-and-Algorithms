#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    int b[26];
    for(int k=0; k<26; k++){
        b[k]=0;
    }
    for(int i=0; i<a.size(); i++){
        for(int j=97; j<=122; j++){
            if(a[i]==j){
                b[j-96]=b[j-96]+1;
                if(b[j-96]==1){
                  cout<<a[i];
                }
            }
        }
    }
    cout<<endl;
}
