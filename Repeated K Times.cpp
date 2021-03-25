#include <iostream>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int a[n][2];
    long long int k;
    for(int i=0; i<n; i++){
        cin>>a[i][0];
        a[i][1]=1;
    }
    cin>>k;
    for(int i=0; i<n; i++){
        if(a[i][0]==-2){
            continue;
        }
        for(int j=i+1; j<n; j++){
            if(a[i][0]==a[j][0]){
                a[i][1]=a[i][1]+1;
                a[j][0]=-2;
            }
        }
    }

	long long int min=0;
    for(int i=0; i<n; i++){
        if(a[i][1]==k){
            min=i;
			break;
        }
    }
	for(int i=min; i<n; i++){
		if(a[i][1]==k){
			if(a[i][0]<a[min][0]){
				min=i;
			}
		}
	}
	cout<<a[min][0];
}
