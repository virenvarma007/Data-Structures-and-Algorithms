void allnums(vector<int> &B,string str,int index,vector<int> &C){
    int ans=stoi(str,0,2);
    if(B[ans]==NULL && ans!=0){
        B[ans]=ans;
        C.push_back(ans);
    }
    for(int i=index; i>=0; i--){
        str[i]='1';
        allnums(B,str,index-1,C);
        str[i]='0';
        allnums(B,str,index-1,C);
    }
    return;
}

vector<int> Solution::grayCode(int A) {
    string str;
    /*itoa(A,str,2);*/
    vector<int> B;
    vector<int> C;
    B.resize(pow(2,A));
    B[0]=0;
    C.push_back(0);
    for(int i=0; i<A; i++){
        str = str + "0";
    }
    allnums(B,str,A-1,C);
    return C;
}
