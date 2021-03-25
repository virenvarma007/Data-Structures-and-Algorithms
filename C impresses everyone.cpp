#include <iostream>
using namespace std;

int binarySearch(int low, int high, int key, int a[]){
    int mid;
    while(low<=high){
        mid=(low+high)/2;
		if(high-low==1){
			break;
		}
        if(a[mid]<key){
            low=mid-1;
        }
        if(a[mid]>key){
            high=mid+1;
        }
        if(a[mid]==key){
            return mid;
        }
    }
    return high;
}

int main(){
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i]=0;
        if(i==0){
            b[i]=a[i];
            continue;
        }
        b[i]=b[i-1]+a[i];
    }
    int q,k;
	int ans;
    cin>>q;
    for(int t=0; t<q; t++){
        cin>>k;
        ans=binarySearch(0,n-1,b[n-1]-k,b);
        if(ans==1){
            cout<<"B"<<endl;
        }
        if(ans==0){
            cout<<"A"<<endl;
        }
    }
}
