#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data=value;
        left=right=NULL;
    }
};




static int idx=-1;

Node* BuildTreeFromPreOrder(vector<int> preorder){

idx++;

if(preorder[idx]==-1){
    return NULL;
}

    Node* root=new Node(preorder[idx]);
    root->left=BuildTreeFromPreOrder(preorder);
    root->right=BuildTreeFromPreOrder(preorder);
    return root;
}



void preorders(Node* root){
    if(root==NULL)return ;
    cout<<root->data;
    preorders(root->left);
    preorders(root->right);
}
int sumTree(Node* root){

if(root==NULL) return 0;	
int left=sumTree(root->left);
int right=sumTree(root->right);
root->data+=left+right;
return root->data;
}




int main(){
vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Node* root= BuildTreeFromPreOrder(preorder);
sumTree(root);
preorders(root);
}

