#include <iostream>
using namespace std;

long long int binarySearch(long long int low, long long int high,long long int key, long long int a[])
{
   while(low<=high)
   {
     long long int mid=(low+high)/2;
     if(a[mid]<key)
     {
         low=mid+1;
     }
     else if(a[mid]>key)
     {
         high=mid-1;
     }
     else
     {
         return mid;
     }
   }
   return -1;               //key not found
 }

int main(){
    long long int n, q;
    cin>>n>>q;
    long long int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int t=0; t<q; t++){
        long long int k;
        cin>>k;
        long long int temp;
    for(int k1 = 0; k1< n-1; k1++) {
        for(int i = 0; i < n-k1-1; i++) {
            if(a[ i ] > a[ i+1] ) {
                temp = a[ i ];
                a[ i ] = a[ i+1 ];
                a[ i + 1] = temp;
            }
        }
    }
    long long int low=0, high=n-1;
	long long int ans=binarySearch(low,high,k,a);
	if(ans!=-1){
        cout<<"YES"<<endl;
	}
	if(ans==-1){
        cout<<"NO"<<endl;
	}

    }
}
