void Ans(vector<int> A, vector<vector<int>> &B){
    int n=A.size();
    if(n==1){
        B.push_back(A);
        return;
    }
    else if(n>1){
        B.push_back(A);
        vector<int>::iterator it;
        vector<int> C=A;
        for(it=A.begin(); it!=A.end(); it++){
            A.erase(it);
            Ans(A,B);
            A=C;
        }
    }
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<vector<int>> B;
    sort(A.begin(),A.end());
    int n = A.size();
    Ans(A,B);
    vector<int> C;
    B.push_back(C);
    
    return B;
}
