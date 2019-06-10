#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node * left;
  Node * right;
};

Node * getNode(int data) {
  Node * node = new Node;
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return node;
}

Node * Insert(Node * root, int elm) {
  if(root == NULL) {
    root = getNode(elm);
  } else if(elm <= root->data) {
    root->left = Insert(root->left, elm);
  } else {
    root->right = Insert(root->right, elm);
  }
  return root;
}

void inOrder(Node * node) {
  if(node == NULL) return;
  inOrder(node->left);
  cout << node -> data << " ";
  inOrder(node->right);
}

void preOrder(Node * node) {
  if(node == NULL) return;
  cout << node->data << " ";
  preOrder(node->left);  
  preOrder(node->right);
}

void deleteNode(Node * root, int d) {
  Node * temp = root;
  Node * parent;
  while(temp != NULL) {
    if(temp->data == d) break;
    if(temp->data > d) {
      parent = temp;
      temp = temp->left;
    } else {
      parent = temp;
      temp = temp->right;
    }
  }
  if(parent->data > temp->data) {
    if(temp->left == NULL && temp->right == NULL) {
      parent->left = NULL;
      delete(temp);
    } else if(temp->left == NULL && temp->right != NULL) {
      
    }
  } else {
    if(temp->left == NULL && temp->right == NULL) {
      parent->right = NULL;
      delete(temp);
    }
  }
}

int main() {
  Node * root;
  root = Insert(root, 9);
  root = Insert(root, 12);
  root = Insert(root, 5);
  root = Insert(root, 10);
  root = Insert(root, 15);
  root = Insert(root, 6);
  root = Insert(root, 7);
  root = Insert(root, 4);
  root = Insert(root, 1);
  root = Insert(root, 2);
  root = Insert(root, 3);
  root = Insert(root, 8);
  root = Insert(root, 13);
  root = Insert(root, 11);
  inOrder(root);
  cout << endl;
  preOrder(root);
  cout << endl;
  deleteNode(root, 8);
  inOrder(root);
  cout << endl;
}