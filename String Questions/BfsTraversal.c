#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void BFS(struct node* root) {
    if (root == NULL) {
        return;
    }

    struct node* queue[100];  // assume BST has max 100 nodes
    int front = 0;
    int rear = 0;
    queue[rear++] = root;

    while (front != rear) {
        struct node* curr = queue[front++];
        printf("%d ", curr->data);

        if (curr->left != NULL) {
            queue[rear++] = curr->left;
        }
        if (curr->right != NULL) {
            queue[rear++] = curr->right;
        }
    }
}

int main() {
    struct node* root = createNode(8);
    root->left = createNode(3);
    root->right = createNode(10);
    root->left->left = createNode(1);
    root->left->right = createNode(6);
    root->right->right = createNode(14);

    printf("BFS Traversal: ");
    BFS(root);
    return 0;
}
