#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};


Node* searchkey(Node* root, int a)
{
    Node* ans;
    if(root->data==a){
        ans=root;
    }
    else if(root->left->data==a){
        ans=root->left;
    }
    else if(root->right->data==a){
        ans=root->right;
    }
    else if(ans==nullptr){
        ans=searchkey(root->left,a);
    }
    else if(ans==nullptr){
        ans=searchkey(root->right,a);
    }
    return ans;
}

int nextmirrorser(int key, Node* left, Node* right){
    int ans;
    if(left==nullptr || right==nullptr){
        ans=-1;
        return ans;
    }
    else if(left->data==key){
        ans=right->data;
        return ans;
    }
    else if(right->data==key){
        ans=left->data;
        return ans;
    }
    else if(!ans){
        ans=nextmirrorser(key,left->left,right->right);
        return ans;
    }
    else if(!ans){
        ans=nextmirrorser(key,left->right,right->left);
        return ans;
    }

}

int mirrorser(Node* root, int key){

    if(root==nullptr){
        return -1;
    }

    if(key==root->data){
        return root->data;
    }
    return nextmirrorser(key,root->left,root->right);

}


int main(){
    int N,Q;
    cin>>N>>Q;
    Node* A[N+1];
    Node* se;
    char C[N];
    int a,b;
    char c;
    A[0]->data=1;
    for(int i=1; i<N; i++){
        cin>>a>>b>>c;
        A[i]->data=b;
        for(int j=0; j<i; j++){
            if(A[j]->data==a){
                if(c=='L'){
                se->left=A[i];
                }
            else if(c=='R'){
                se->right=A[i];
                }
            }
        }
    }
    Node* root=A[0];
    Node* ele;
    cin>>ele->data;
    for(int i=0; i<Q; i++){
        int mir=mirrorser(root,ele->data);
        cout<<mir<<endl;
    }
}
