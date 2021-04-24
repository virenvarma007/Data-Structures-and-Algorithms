/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void PositionNode(int k, TreeNode* Head){
     if(Head->val>k){
         if(Head->left==NULL){
             TreeNode* newNode;
             newNode->val = k;
             Head->left = newNode;
             return;
         }
         else{
             PositionNode(k,Head->left);
         }
     }
     else{
         if(Head->right==NULL){
             TreeNode* newNode;
             newNode->val = k;
             Head->right = newNode;
             return;
         }
         else{
             PositionNode(k,Head->right);
         }
     }
 }
 
 int checkBalance(TreeNode* Head){
     if(Head->left==NULL and Head->right==NULL){
         return 0;
     }
     else{
         return 1 + max(checkBalance(Head->left),checkBalance(Head->right));
     }
 }
 
 void BalanceTree(TreeNode* PrevHead, TreeNode* Head){
     if(Head==NULL){
         return;
     }
     int L=checkBalance(Head->left);
     int R=checkBalance(Head->right);
     if(L-R>1 || L-R<-1){
         if(L>R){
             TreeNode* repos = Head;
             Head = Head->left;
             PositionNode(repos->val,Head);
         }
         else{
             TreeNode* repos = Head;
             Head = Head->right;
             PositionNode(repos->val,Head);
         }
     }
     else{
         BalanceTree(Head,Head->left);
         BalanceTree(Head,Head->right);
     }
 }
 
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    int n = A.size();
    TreeNode* Head;
    Head->val= A[0];
    TreeNode* PrevHead;
    PrevHead = Head;
    for(int i=1; i<n; i++){
         PositionNode(A[i],Head);
         BalanceTree(NULL,Head);
    }
    return Head;
}
