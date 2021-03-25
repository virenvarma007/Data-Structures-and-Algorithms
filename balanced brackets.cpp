#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int l;
    cin>>n;
    for(int t=0; t<n; t++){
        string s;
        cin>>s;
        int ans=0;
        stack <char> st;
        l=s.length();
        for(int i=0; i<l; i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
                continue;
               }
			   if((s[i]==')' || s[i]=='}' || s[i]==']') && st.empty()==true){
				   ans=ans+1;
				   break;
			   }
               if(s[i]==')' && st.top()=='(' && st.empty()==false){
                st.pop();
               }
               else if(s[i]=='}' && st.top()=='{' && st.empty()==false){
                st.pop();
               }
               else if(s[i]==']' && st.top()=='[' && st.empty()==false){
                st.pop();
               }else{
                ans=ans+1;
                break;
               }
        }
        if(ans==1 || st.empty()==false){
            cout<<"NO"<<endl;
        }
        if(ans==0 && st.empty()==true){
            cout<<"YES"<<endl;
        }
    }
}
