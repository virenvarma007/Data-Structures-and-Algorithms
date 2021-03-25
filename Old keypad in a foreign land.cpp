#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    int b[k][51];
    int maxi=0;
    int sum=0;
    for(int i=0; i<k; i++){
        cin>>b[i][0];
        if(maxi<b[i][0]){
            maxi=b[i][0];
        }
        sum=sum+b[i][0];
    }
    int maximum;
    int ans=0;
        for(int i = 0; i < n-1 ; i++)  {
             maximum = i ;
            for(int j = i+1; j < n ; j++ ) {
                if(a[ j ] > a[ maximum ])  {
                maximum = j ;
                }
             }
          swap ( a[ maximum ], a[ i ]) ;
        }
        for(int i=1; i<=maxi; i++){
            for(int j=0; j<k; j++){
                if(b[j][0]>0){
                    for(int l=0; l<n; l++){
                        if(a[l]!=0){
                            b[j][i]=a[l];
                            ans=ans+(a[l]*i);
							cout<<ans<<endl;
							cout<<endl;
                            a[l]=0;
                            b[j][0]=b[j][0]-1;
                            break;
                        }
                    }
                }
            }
        }
        if(n>sum){
            cout<<-1<<endl;
        }
        if(n<=sum){
            cout<<ans<<endl;
        }

}
