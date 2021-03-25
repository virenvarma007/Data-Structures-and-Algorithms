#include<bits/stdc++.h>
using namespace std;

long long SimilarElementsPairs (vector<int> A,int N) {
   int i, key, j, num=0, rec;
    for (i = 1; i < N; i++)
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }
    for(int i=0; i<N; i++){
        cout<<A[i]<< " ";
    }
    cout<<endl;
    rec=0;
    for(int i=0; i<=N-1; i++){
        if(i==N-1){
            num=num+(rec*(rec-1))/2;
            break;
        }
       if(rec==0){
        if(A[i+1]-A[i]==1){
            rec=rec+1;
        }
        else{
            rec=0;
        }
       }
       if(rec!=0){
        if(A[i+1]-A[i]==1){
            rec=rec+1;
        }
        else{
            num=num+(rec*(rec-1))/2;
        }
       }
    }
    return num;

}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> A[i_A];
    }

    long long out_;
    out_ = SimilarElementsPairs(A,N);
    cout << out_;
}
