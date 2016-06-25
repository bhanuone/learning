package com.binarytree;

class BstNode {
  public int data;
  public BstNode left;
  public BstNode right;
  public BstNode(int data) {
    this.data = data;
    this.left = this.right = null;
  }
}

class BinaryTree {	
	private BstNode root = null;
  
  public BstNode getRoot() {
    return this.root;
  }

  public boolean isEmpty() {
    return this.root == null;
  }
  public BstNode insert(BstNode node, int data) {
    BstNode temp = new BstNode(data);
    if(this.isEmpty()) {this.root = temp; return;}    
    else if(data <= this.root.data) {
      this.root.left = this.insert(this.root, data)
    } else {
      this.root.right
    }

  }

  public void inOrder(BstNode node) {
    if(node == null) return;
    this.inOrder(node.left);
    System.out.print(node.data + " ");
    this.inOrder(node.right);
  }
}
class BST {
  public static void main(String[] args) {
    BinaryTree bst = new BinaryTree();
    // System.out.println(bst.isEmpty());
    bst.insert(bst.getRoot(), 1);    
    // System.out.println(bst.isEmpty());
    bst.insert(bst.getRoot(), 2);
    // System.out.println(bst.isEmpty());
    bst.insert(bst.getRoot(), 3);
    // System.out.println(bst.isEmpty());
    // bst.inOrder(bst.getRoot());
    bst.insert(bst.getRoot(), 8);
  }
}