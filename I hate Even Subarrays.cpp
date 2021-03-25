#include <iostream>
#include <string>
#include <vector>
using namespace std;
int top = -1;

    void push (char stack[ ] , int x , int n)
    {
        if ( top == n-1 )
        {
            cout << "Stack is full.Overflow condition!" ;
        }
        else
        {
            top = top +1 ;
            stack[ top ] = x ;
        }
    }
    bool isEmpty ( )
    {
        if ( top == -1 )  //Stack is empty
            return true ;
        else
            return false;
    }
    void pop ( )
    {

        if( isEmpty ( ) )
        {

        }
        else
        {
             top = top - 1 ; //Decrementing top’s position will detach last element from stack
        }
    }
    int size ( )
    {
        return top + 1;
    }
    int topElement (char stack[])
    {
        return stack[ top ];
    }

int main(){
    int t;
    cin>>t;
	vector<char> g1;
    for(int T=0; T<t; T++){
        string a;
		cin>>a;
        int n=a.length();
        char b[n],c[n];
        for(int i=0; i<n; i++){
            push(b,a[i],n);
        }
        int k=0;
        for(int i=0; i<n; i++){
			if(top-1<0){
				break;
			}
            if(b[top]!=b[top-1]){
                g1.push_back(b[top]);
				pop();
            }
            if(b[top]==b[top-1]){
                pop();
                pop();
				push(b,g1.back(),n);
				g1.pop_back();

            }
        }
		for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";
        cout<<endl;
    }
}
