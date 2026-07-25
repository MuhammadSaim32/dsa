#include<iostream>
#include<vector>
#include<queue>
#include<map>
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

 int idx=-1;

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


void topView(Node* root){
    queue<pair<Node*,int>>q;
    map<int,int>m;

    q.push({root,0});

    while(q.size()>0){

        Node* curr = q.front().first;
        int hd= q.front().second;
        q.pop();
    
     if(m.find(hd)==m.end()){
        m[hd]=curr->data;
     }
        
        if(curr->left!=NULL){
            q.push({curr->left,hd-1});
        }

          if(curr->right!=NULL){
            q.push({curr->right,hd+1});
        }

     

    }

  for(auto it:m){
        cout<<it.second;
       }


}


void kthlevel(Node* root,int k){ 

if(root==NULL)  return ;
if(k==1){
    cout<<root->data;
}

kthlevel(root->left,k-1);
kthlevel(root->right,k-1);



}


int main(){
    vector<int>preorder={1, 2, 4, -1, -1, 5, -1, -1, 3, 6, -1, -1, 7, 8, -1, -1, 9, -1, -1};
       Node* root =BuildTreeFromPreOrder(preorder);
       topView(root);cout<<"\n";
        kthlevel(root,4);
    return 0;
}