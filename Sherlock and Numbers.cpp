#include <iostream>
using namespace std;

long long int binarySearch(long long int low, long long int high, long long int key, long long int a[]){
	int mid;
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]<key){
			high=mid-1;
		}
		else if(a[mid]>key){
			low=mid+1;
		}
		else{
			return mid;
		}
	}
	return -1;
}

int main(){
	int t;
	cin>>t;
	for(int T=0; T<t; T++){
		long long int n,k,p,val,num=0;
		long long int ans=-1;
		cin>>n>>k>>p;
		long long int a[n+1];
		for(long long int i=1; i<=n; i++){
			a[i]=i;
		}
		for(long long int i=0; i<k; i++){
			cin>>val;
			a[val]=0;
		}
		for(long long int i=1; i<=n; i++){
			if(a[i]!=0){
				num=num+1;
				if(num==p){
					ans=a[i];
					break;
				}
			}
		}
		cout<<ans<<endl;
	}
}
