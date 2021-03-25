#include <bits/stdc++.h>
using namespace std;

typedef struct Node {
    char c;
    int u;
    Node* left;
    Node* right;
} ;

Node* searchnode(int a,Node* root){
    Node* ans;
    if(root->u==a){
        ans=root;
    }
    else{
        ans=searchnode(a,root->left);
        ans=searchnode(a,root->right);
    }
    return ans;
}

void createnode(int a, int b, char c, Node* root){
    Node* newnode;
    newnode->c=c;
    newnode->u=b;
    newnode->left=nullptr;
    newnode->right=nullptr;
    Node* newroot=searchnode(a,root);
    if(newroot->left==nullptr){
        newroot->left=newnode;
    }
    else if(newroot->right==nullptr){
        newroot->right=newnode;
    }
}

int countsubnodes(int in, char ch, Node* root){
    int ans=0;
    if(root->u==in){
        if(root->left!=nullptr){
            ans=1+countsubnodes(in,ch,root->left);
            if(root->right!=nullptr){
                ans=1+countsubnodes(in,ch,root->right);
            }
        }
        else{
            ans=ans+0;
        }
    }
    return ans;

}

int main(){
    int N,Q;
    string s;
    Node* root;
    root->left=nullptr;
    root->right=nullptr;
    cin>>N>>Q;
    cin>>s;
    root->u=1;
    root->c=s[0];
    int a,b;
    for(int i=0; i<N-1; i++){
        cin>>a>>b;
        createnode(a,b,s[b-1],root);
    }
    int u,ans;
    char c;
    for(int i=0; i<Q; i++){
        cin>>u>>c;
        Node* x=searchnode(u,root);
        ans=countsubnodes(u,c,x);
        cout<<ans<<endl;
    }
}
