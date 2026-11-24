#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string name;
    Node *left, *right;
};

Node* createNode(string name)
{
    Node* newNode = new Node();
    newNode->name = name;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert file name into BST
Node* insert(Node* root, string name)
{
    if (root == NULL)
        return createNode(name);

    if (name < root->name)
        root->left = insert(root->left, name);

    else if (name > root->name)
        root->right = insert(root->right, name);

    return root;
}

// Display file names in alphabetical order
void inorder(Node* root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->name << endl;
        inorder(root->right);
    }
}

int main()
{
    Node* root = NULL;
    string name;

    cout << "Enter five file names:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter file name " << i + 1 << ": ";
        cin >> name;

        root = insert(root, name);
    }

    cout << "\nFile names in alphabetical order:\n";
    inorder(root);

    return 0;
}
