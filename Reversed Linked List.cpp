#include <bits/stdc++.h>
using namespace std;


int main(){
	long long int n,item,temp;
	cin>>n;
	list<long long int> l1;
	list<long long int> :: iterator it,a,b;
	for(int i=0; i<n; i++){
		cin>>item;
		l1.push_back(item);
	}
	for(it=l1.begin(); it!=l1.end(); it++){
		if(it==l1.begin()){
            a=l1.begin();
            continue;
		}
		if(*it%2==0 && *a%2==0 && *it>*a){
            swap(*it,*a);
            if(a!=l1.begin()){
                it--;
                it--;
            }
		}
		a=it;
	}
	for(it=l1.begin(); it!=l1.end(); it++){
		cout<<*it<<" ";
	}
}
