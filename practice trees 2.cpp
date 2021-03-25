#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* CreateNode(int data){
    Node* newnode= new Node();
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}

Node* SearchNode(int data,Node *root)
{
    stack<Node *> s;
    Node *curr = root;

    while (curr != NULL || s.empty() == false)
    {
        /* Reach the left most Node of the
           curr Node */
        while (curr !=  NULL)
        {
            /* place pointer to a tree node on
               the stack before traversing
              the node's left subtree */
            s.push(curr);
            curr = curr->left;
        }

        /* Current must be NULL at this point */
        curr = s.top();
        s.pop();

        if(data==curr->data){
            return curr;
        }

        /* we have visited the node and its
           left subtree.  Now, it's right
           subtree's turn */
        curr = curr->right;

    } /* end of while */
}


void SearchNode2(Node* root){

}


void inorder(Node* root){
    if (root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node* root=CreateNode(1);
    root->right=CreateNode(3);
    root->left=CreateNode(2);
    root->right->right=CreateNode(5);
    root->left->left=CreateNode(4);
    root->left->right=CreateNode(6);
    root->right->left=CreateNode(7);
    root->right->right->left=CreateNode(8);
    inorder(root);
    cout<<endl;
    SearchNode2(root);
}
