#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node *left,*right;

    Node(int val){
        data=val;
        left=right=NULL;
    }


};

 int idx=-1;

Node* BuildTreeFromPreOrder(vector<int> arr){
        idx++;

    if(arr[idx]==-1) return NULL;
    Node *newNOde = new Node(arr[idx]);
    newNOde->left=BuildTreeFromPreOrder(arr);
    newNOde->right=BuildTreeFromPreOrder(arr);
    return newNOde;

}

int sum(Node* root ){
  if(root==NULL) return 0;
   int left= sum(root->left);
   int right= sum(root->right);
    return left+right+root->data;
    }


int count(Node* root ){
  if(root==NULL) return 0;
   int left= count(root->left);
   int right= count(root->right);
    return left+right+1;
    }
    

int height(Node* root ){
  if(root==NULL) return 0;
   int left= height(root->left);
   int right= height(root->right);
    return max(left,right)+1;
    }





int main(){
    vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};

       Node *root= BuildTreeFromPreOrder(preorder);
        
        cout<<height(root);
           cout<<count(root);
              cout<<sum(root);
        return 0;
}