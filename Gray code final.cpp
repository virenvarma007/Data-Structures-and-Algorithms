void allnums(int A,int index, vector<string> &B){
    int tnum = pow(2,index);
    if(index>A){
        return;
    }
    int a;
    if(index>1){
        a=tnum/2-1;
        for(int i=tnum/2; i<tnum; i++){
            B[i]=B[a];
            a--;
        }
    }
    for(int i=0; i<tnum; i++){
        if(i<tnum/2){
            B[i]='0'+B[i];
        }
        else{
            B[i]='1'+B[i];
        }
    }
    allnums(A,index+1,B);
}

vector<int> Solution::grayCode(int A) {
    string str;
    /*itoa(A,str,2);
    stoi(str,0,2)*/
    vector<string> B;
    for(int i=0; i<pow(2,A); i++){
        B.push_back("");
    }
    allnums(A,1,B);
    vector<int> C;
    int a=0;
    for(int i=0; i<pow(2,A); i++){
        a=stoi(B[i],0,2);
        C.push_back(a);
    }
    return C;
}
