#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node * left;
  Node * right;
};

Node * getNode(int d) {
  Node * node = new Node;
  node->data = d;
  node->left = node->right = NULL;
}
bool valid = true;
Node * Insert(Node * root, int d) {
  if(root == NULL) {
    root = getNode(d);
  }
  else if(d < root->data) {
    root->left = Insert(root->left, d);
    if(root->right != NULL) valid = false;
  } else {
    root->right = Insert(root->right, d);
    if(root->left != NULL) valid = false;
  }
  return root;
}
int main() {
  int T;
  cin >> T;
  for(int t = 0; t < T; t++) {
    int N, R, prev;
    cin >> N >> R;
    int A[N];
    Node * root = NULL;
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < N; i++) {
      if(!valid) break;
      root = Insert(root, A[i]);
      // cout << A[i] << " "  ;
    }
    if(valid) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}