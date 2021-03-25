#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long int n,m,q;
    cin>>n>>m>>q;
    long long int x[n], y[m];
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    int temp;
    for(int k = 0; k< n-1; k++) {
        for(int i = 0; i < n-k-1; i++) {
            if(x[ i ] > x[ i+1] ) {
                temp = x[ i ];
                x[ i ] = x[ i+1 ];
                x[ i + 1] = temp;
            }
        }
    }
    for(int i=0; i<m; i++){
        cin>>y[i];
    }
    for(int k = 0; k< m-1; k++) {
        for(int i = 0; i < m-k-1; i++) {
            if(y[ i ] > y[ i+1] ) {
                temp = y[ i ];
                y[ i ] = y[ i+1 ];
                y[ i + 1] = temp;
            }
        }
    }
    long long int z, L1, L2, R1, R2;
    long long int ans=0;
    char letter;
    for(int k=0; k<q; k++){
        cin>>z>>letter;
        if(letter==65){
            cin>>L1>>R1;
            ans=0;
            for(int i=0; i<n; i++){
                if(x[i]>=L1 && x[i]<=R1){
                    for(int j=0; j<m; j++){
                        if(pow(x[i],2)+pow(y[j],2)<=z){
                            ans=ans+1;
                        }
                    }
                }
            }
            cout<<ans<<endl;
        }
        if(letter==66){
            cin>>L1>>R1;
            ans=0;
            for(int i=0; i<m; i++){
                if(y[i]>=L2 && y[i]<=R2){
                    for(int j=0; j<n; j++){
                        if(pow(x[j],2)+pow(y[i],2)<=z){
                            ans=ans+1;
                        }
                    }
                }
            }
            cout<<ans<<endl;
        }
        if(letter==67){
            cin>>L1>>R1>>L2>>R2;
            ans=0;
            for(int i=0; i<n; i++){
                if(x[i]>=L1 && x[i]<=R1){
                    for(int j=0; j<m; j++){
                        if(y[j]>=L2 && y[j]<=R2){
                            if(pow(x[i],2)+pow(y[j],2)<=z){
                            ans=ans+1;
                        }
                        }
                    }
                }
            }
            cout<<ans<<endl;
        }
    }
}
