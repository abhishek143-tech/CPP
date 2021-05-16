#include <bits/stdc++.h>
using namespace std;
class tree
{
public:
    int val;
    tree *left, *right;
};

tree *create(tree *root) //this function is used to create tree
{
    int x;
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }
    root = new tree;
    root->val = x;
    root->left = create(root->left);
    root->right = create(root->right);
    return root;
}

void leftView(tree *root) // this function is used to print the left view of binary tree
{
    queue<tree *> q;
    if (root == NULL)
    {
        return;
    }
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            tree *curr = q.front();
            if (i == 0)
            {
                cout << curr->val << " ";
            }
            q.pop();
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
}
void righttView(tree *root) // this function is used to print the rightt view of binary tree
{
    queue<tree *> q;
    if (root == NULL)
    {
        return;
    }
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            tree *curr = q.front();
            if (i == size - 1)
            {
                cout << curr->val << " ";
            }
            q.pop();
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
}

void levelOrder(tree *root) // this function is used to traverse the tree level by level
{
    queue<tree *> q;
    if (root == NULL)
    {
        return;
    }
    tree *curr;
    q.push(root);
    while (!q.empty())
    {
        curr = q.front();
        q.pop();
        cout << curr->val << " ";
        if (curr->left != NULL)
            q.push(curr->left);

        if (curr->right != NULL)
            q.push(curr->right);
    }
}

void inorder(tree *root) // this function is used for inorder traversal
{
    if (!root)
    {
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
void preorder(tree *root) // this function is used for preorder traversal
{
    if (!root)
    {
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(tree *root) // this function is used for postorder traversal
{
    if (!root)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

void spiralOrderTraversal(tree *root) // this function is used to traverse a tree in spiral form
{
    if (root == NULL)
        return;
    stack<tree *> s1;
    stack<tree *> s2;
    s1.push(root);
    while (!s1.empty() || !s2.empty())
    {
        while (!s1.empty())
        {
            tree *curr = s1.top();
            s1.pop();
            cout << curr->val << " ";
            if (curr->left != NULL)
                s2.push(curr->left);
            if (curr->right != NULL)
                s2.push(curr->right);
        }
        while (!s2.empty())
        {
            tree *curr = s2.top();
            s2.pop();
            cout << curr->val << " ";
            if (curr->left != NULL)
                s1.push(curr->left);
            if (curr->right != NULL)
                s1.push(curr->right);
        }
    }
}

int diameter(tree *root, int res)
{ //this function finds the highest distance between two leaf nodes
    if (root == NULL)
        return 0;

    int l = diameter(root->left, res);
    int r = diameter(root->right, res);

    int temp = 1 + max(l, r);
    int ans = max(temp, 1 + l + r);
    res = max(res, ans);
    return ans;
}

int height(tree *root)
{ //this function finds the height of given binary tree
    if (root == NULL)
    {
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}

int identicalOrNot(tree *node1, tree *node2) //this function tells whether given two trees are identical or not
{
    if (node1 == NULL && node2 == NULL)
        return 1;
    return (node1 && node2) && (node1->val == node2->val) && identicalOrNot(node1->left, node2->left) && identicalOrNot(node1->right, node2->right);
}

int isBalanced(tree *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = isBalanced(root->left); //if left height is not balanced we simply return -1 as whole tree is not balanced
    if (lh == -1)
    {
        return -1;
    }
    int rh = isBalanced(root->right);
    if (rh == -1)
    {
        return -1;
    }
    if (abs(rh - lh) > 1)
    {
        return -1;
    }
    return max(lh, rh) + 1;
}

tree *lca(tree *root, int n1, int n2)
{
    if (root == NULL)
        return NULL;
    if (root->val == n1 || root->val == n2)
        return root;
    tree *l = lca(root->left, n1, n2);
    tree *r = lca(root->right, n1, n2);

    if (l && r)
        return root;
    if (l)
        return l;
    else
        return r;
}

void printDataAtKDistance(tree *root, int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->val << " ";
    }
    else
    {
        printDataAtKDistance(root->left, k - 1);
        printDataAtKDistance(root->right, k - 1);
    }
}

void mirrorOfTree(tree *root)
{ // this function is used to create mirror of given tree
    if (root == NULL)
        return;
    mirrorOfTree(root->left);
    mirrorOfTree(root->right);
    swap(root->left, root->right);
}

vector<int> diagonalTraversal(tree *root)
{
    queue<tree *> q;
    vector<int> vec;
    if (root == NULL)
    {
        return vec;
    }
    q.push(root);
    while (!q.empty())
    {
        tree *temp = q.front();
        q.pop();
        while (temp)
        {
            if (temp->left)
            {
                q.push(temp->left);
            }
            vec.push_back(temp->val);
            temp = temp->right;
        }
    }
    return vec;
}

int main()
{
    tree *root = NULL;
    root = create(root);
    // printDataAtKDistance(root,2);
    // mirrorOfTree(root);
    // levelOrder(root);
    inorder(root);
    cout<<endl;
    mirrorOfTree(root);
    inorder(root);
    return 0;
}