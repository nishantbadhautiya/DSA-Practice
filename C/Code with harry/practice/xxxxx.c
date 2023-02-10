#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *createNode(int data)
{
    struct Node *root = (struct Node *)malloc(sizeof(struct Node));
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
}
void inOrderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        inOrderTraversal(root->left);
        inOrderTraversal(root->right);
    }
}

int main()
{
    struct Node *n = createNode(2);
    struct Node *n1 = createNode(4);
    struct Node *n2 = createNode(6);
    struct Node *n3 = createNode(3);
    struct Node *n4 = createNode(2);
    n->left = n1;
    n->right = n2;
    n1->left = n3;
    n1->right = n4;
    inOrderTraversal(n);
    return 0;
}
