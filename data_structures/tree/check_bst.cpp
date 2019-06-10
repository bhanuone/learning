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

bool isBst(Node * root) {
  if(root == NULL) return true;
  Node * left;
  Node * right;
  left = root->left;
  right = root->right;
  if(left == NULL && right == NULL) return true;
  if(left != NULL) {
    if(root->data < left->data) return false;
  }
  if(right != NULL) {
    if(root->data > right->data) return false;
  }
  return isBst(root->left) && isBst(root->right);
}

void bstTrue() {
  Node * root;
  root = Insert(root, 5);
  root = Insert(root, 10);
  root = Insert(root, 7);
  root = Insert(root, 3);
  root = Insert(root, 10);
  root = Insert(root, 7);
  root = Insert(root, 1);
  root = Insert(root, 8);
  root = Insert(root, 9);
  root = Insert(root, 2);
  if(isBst(root)) {
    cout << "YES" << endl;
  }
};
bool bstFalse() {
  Node * root;
  Node * tmp1 = getNode(5);
  Node * tmp2 = getNode(10);
  Node * tmp3 = getNode(7);
  Node * tmp4 = getNode(3);
  Node * tmp5 = getNode(10);
  Node * tmp6 = getNode(7);
  Node * tmp7 = getNode(1);
  Node * tmp8 = getNode(8);
  Node * tmp9 = getNode(9);
  Node * tmp10 = getNode(2);
  root = tmp1;
  tmp9->left = tmp10;
  tmp9->right = tmp5;
  tmp5->right = tmp9;
  if(isBst(tmp5)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
};


int main(int argc, char const *argv[])
{
  bstTrue();
  bstFalse();
  return 0;
}