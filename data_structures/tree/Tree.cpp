/*
  Bhanu Prakash P
*/
#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node * left;
  Node * right;
};

// create a node in heap
Node * getNode(int data) {
  Node * node = new Node;
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return node;
}

// insert a node into tree
Node * insert(Node * root, int data) {
  Node * temp = getNode(data);
  if(root == NULL) {
    root = temp;
    return root;
  }
  Node * node = root;
  while(true) {
    if(data <= node->data) {
      if(node->left == NULL) {
        node->left = temp;
        break;
      } else {
        node = node->left;
      }
    } else {
      if(node->right == NULL) {
        node->right = temp;
        break;
      } else {
        node = node->right;
      }
    }
  }
  return root;
}

Node * Insert(Node * root, int data) {
  if(root == NULL) {
    Node * temp = getNode(data);
    root = temp;
  }
  else if(data <= root->data) {
    root->left = Insert(root->left, data);
  } else {
    root->right = Insert(root->right, data);
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

void postOrder(Node * node) {
  if(node == NULL) return;
  postOrder(node->left);
  postOrder(node->right);
  cout << node -> data << " ";
}

bool Search(Node * root, int data) {
  if(root == NULL) { return false; }
  if(root->data == data) return true;
  if(root->data > data) return Search(root->left, data);
  else return Search(root->right, data);
}
  

int main(int argc, char const *argv[])
{
  Node * root;

  int N;
  cin >> N;
  while(N > 0) {
    int tmp;
    cin >> tmp;
    root = Insert(root, tmp);
  }
  // root = Insert(root, 3);
  // root = Insert(root, 4);
  // root = Insert(root, 1);
  // root = Insert(root, 2);
  // root = Insert(root, 4);
  inOrder(root);
  cout << endl;
  preOrder(root);
  cout << endl;
  postOrder(root);
  cout << endl;
  if(Search(root, 5)) {
    cout << "Found 2" << endl;
  } else {
    cout << "Not found" << endl;
  }
  return 0;
}