#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
Node *deleteNode(Node *root, int x)
{
    if (!root)
        return NULL;
    if (x < root->data)
        root->left = deleteNode(root->left, x);
    else if (x > root->data)
        root->right = deleteNode(root->right, x);
    else
    {
        if (!root->left and !root->right)
            return NULL;
        if (!root->left)
            return root->right;
        if (!root->right)
            return root->left;
        //find inorder succ.
        Node *temp = root->right;
        while (temp and temp->left)
            temp = temp->left;
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
int main()
{

    return 0;
}
