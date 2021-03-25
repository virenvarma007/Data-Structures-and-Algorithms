#include <iostream>
#include <string>
using namespace std;

int main(){

        string a,d;
        char b;
        int z=0, y=0;
        getline(cin,a);
        d=a;
        for(int i=0; i<a.size(); i++){
            if(a[i]='Z' && a[i+1]=='O'){
                b=a[i];
                a[i]=a[i+1];
                a[i+1]=b;
                if(i!=0){
                --i;
                }
                ++z;
            }
        }
        for(int i=0; i<d.size(); i++){
            if(d[i]='O' && d[i+1]=='Z'){
                b=d[i];
                d[i]=d[i+1];
                d[i+1]=b;
                if(i!=0){
                --i;
                }
                ++y;
            }
        }
            if(z<y){
                cout<<z<<endl;
            }
            if(y<=z){
                cout<<y<<endl;
            }


}
