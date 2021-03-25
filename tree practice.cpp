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
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

void inordersearch(Node* root)
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

        cout<<curr->data<<" ";

        /* we have visited the node and its
           left subtree.  Now, it's right
           subtree's turn */
        curr = curr->right;

    } /* end of while */
}


void insertnode(Node* newnode, int b, Node* root){
    /*Node* newroot=inordersearch(b,root);*/
    Node* newroot=root->right->right;
    if(root->left==NULL){
        newroot->left=newnode;
    }
    else if(root->right==NULL){
        newroot->right=newnode;
    }
}

void inorder(Node* temp)
{
    if (temp == NULL)
        return;

    inorder(temp->left);
    cout << temp->data << ' ';
    inorder(temp->right);
}

int main(){
    Node* root=CreateNode(10);
    root->left = CreateNode(11);
    root->left->left = CreateNode(7);
    root->right = CreateNode(9);
    root->right->left = CreateNode(15);
    root->right->right = CreateNode(8);

    cout<<"Inorder traversal"<<endl;
    inorder(root);
    Node* newnode=CreateNode(12);
    insertnode(newnode,8,root);
    cout<<endl;
    inordersearch(root);
}
