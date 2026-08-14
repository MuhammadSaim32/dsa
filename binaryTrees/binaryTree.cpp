#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

int idx = -1;

Node *BuildTreeFromPreOrder(vector<int> preorder)
{

    idx++;

    if (preorder[idx] == -1)
    {
        return NULL;
    }

    Node *root = new Node(preorder[idx]);
    root->left = BuildTreeFromPreOrder(preorder);
    root->right = BuildTreeFromPreOrder(preorder);
    return root;
}

void PreorderTravel(Node *node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    PreorderTravel(node->left);
    PreorderTravel(node->right);
}

void InorderTravel(Node *node)
{
    if (node == NULL)
        return;
    InorderTravel(node->left);
    cout << node->data << " ";
    InorderTravel(node->right);
}

void postOrderTravel(Node *node)
{
    if (node == NULL)
        return;
    postOrderTravel(node->left);
    postOrderTravel(node->right);
    cout << node->data << " ";
}

void LevelOrderTravel(Node *node)
{
    queue<Node *> q;
    q.push(node);
    q.push(NULL);
    while (q.size() > 0)
    {
        Node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            if (!q.empty())
            {
                cout << "\n";
                q.push(NULL);
                continue;
            }
            else
            {
                break;
            }
        }

        cout << curr->data << " ";

        if (curr->left != NULL)
        {
            q.push(curr->left);
        }

        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}

void levelOrder(Node *node, int k)
{
    if (node == NULL || k < 0)
        return;
    k--;
    if (0 == k)
    {
        cout << node->data;
    }
    levelOrder(node->left, k);
    levelOrder(node->right, k);
}

int main()
{

    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = BuildTreeFromPreOrder(preorder);
    levelOrder(root, 3);
    return 0;
}
