#include <stdio.h>
#include <stdlib.h>

// BST node structure
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node with given data
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Function to perform depth-first search traversal
void DFS(struct Node* node) {
    if(node == NULL) {
        return;
    }
    printf("%d ", node->data);   
    DFS(node->left);            
    DFS(node->right);         
}

int main() {
    struct Node* root = newNode(4);
    root->left = newNode(2);
    root->right = newNode(6);
    root->left->left = newNode(1);
    root->left->right = newNode(3);
    root->right->left = newNode(5);
    root->right->right = newNode(7);

    printf("DFS traversal of the BST: ");
    DFS(root);

    return 0;
}
