#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node * left;
  Node * right;  
}


Node * root = NULL;

Node * Insert(int data, Node * node) {
  Node * newNode = new Node();
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
  if(root == NULL) {
    root = newNode;
    return root;
  }
  if(data <= node->data) {
    root = Insert(data, node->left)
  } else {
    root = Insert(data, root->right)
  }
  return root;
}
int main(int argc, char const *argv[])
{
  Insert(2, root);
  return 0;
}