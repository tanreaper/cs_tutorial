// Tree traversal in C

#include <stdio.h>
#include <stdlib.h>

struct node {
  int item;
  struct node* left;
  struct node* right;
};

// Inorder traversal
void inorderTraversal(struct node* root) {
  if (root == NULL) return;
  inorderTraversal(root->left);
  printf("%d ", root->item);
  inorderTraversal(root->right);
}

// Preorder traversal
void preorderTraversal(struct node* root) {
  if (root == NULL) return;
  printf("%d ", root->item);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

// Postorder traversal
void postorderTraversal(struct node* root) {
  if (root == NULL) return;
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ", root->item);
}

// Create a new Node
struct node* create(int value) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->item = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

// Insert on the left of the node
struct node* insertLeft(struct node* root, int value) {
  root->left = create(value);
  return root->left;
}

// Insert on the right of the node
struct node* insertRight(struct node* root, int value) {
  root->right = create(value);
  return root->right;
}

int main() {
  struct node* root = create(1);
  struct node * root_left;
  struct node * root_right;
  int left, right;
  insertLeft(root, 4);
  insertRight(root, 6);
  int n = 0;
  
  while( n != 10) {
    root_left = root->left;
    insertleft(root_left, 5);
    insertRight(root_left, 8);
    root_right = root->right;
    insertLeft(root_right, 10);
    insertRight(root_right, 12);
  }

  printf("Traversal of the inserted binary tree \n");
  printf("Inorder traversal \n");
  inorderTraversal(root);

  printf("\nPreorder traversal \n");
  preorderTraversal(root);


  printf("\nPostorder traversal \n");
  postorderTraversal(root);

}

