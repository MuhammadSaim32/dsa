#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data=val;
        left=right=NULL;
    }
};




Node* insert(Node* root,int val){

    if(root==NULL){
        return new Node(val);
    }

    if(val<root->data){
        root->left=insert(root->left,val);
    }else{
        root->right= insert(root->right,val);
    }
    return root;
}

Node* BuildBst(vector<int>arr){
    Node*  root=NULL;

    for(int val : arr){
       root= insert(root,val);
    }

    return root;

}

Node* inorderS(Node* root){
    while(root!=NULL&&root->left!=NULL){
        root=root->left;
    }
    return root;
}

Node* DeleteNode(Node* root,int val){
    if(root==NULL) return NULL;

    if(root->data>val){
        root->left=DeleteNode(root->left,val);
    }else{
        root->right=DeleteNode(root->right,val);
    }

if(root->data==val){
    if(root->left==NULL){
        Node* temp=root->right;
        delete root;
        return temp;
    }else if(root->right==NULL){
    Node* temp=root->left;
        delete root;
        return temp;
    }else{
        Node* IS=inorderS(root->right);
        root->data=IS->data;
        root->right=DeleteNode(root->right,IS->data);
    }

}
return root;

}

void inorder(Node* root){
    if(root==NULL) return ;

   
    inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);
}

bool Search(Node *root,int val){
    if(root==NULL) return false;

    if(root->data==val) return true;

    if(val>root->data){
       return  Search(root->right,val);
    }else{
        return Search(root->left,val);
    }

}



int main(){
vector<int> arr={3,2,1,4,5,6};
   Node* root= BuildBst(arr);
    inorder(root);
return 0;

}
