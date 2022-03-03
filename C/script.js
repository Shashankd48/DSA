class Node {
   constructor(data) {
      this.data = data;
      (this.left = null), (this.right = null);
   }
}

class BinarySearchTree {
   constructor() {
      this.root = null;
   }

   insert(data) {
      let node = new Node(data);
      this.root === null
         ? (this.root = node)
         : this.insertNode(this.root, node);
   }

   insertNode(node, newNode) {
      if (newNode.data < node.data) {
         node.left === null
            ? (node.left = newNode)
            : this.insertNode(node.left, newNode);
      } else {
         node.right === null
            ? (node.right = newNode)
            : this.insertNode(node.right, newNode);
      }
   }

   inorder(root) {
      if (root !== null) {
         this.inorder(root.left);
         console.log(root.data, " ->");
         this.inorder(root.right);
      }
   }
   postorder(root) {
      if (root !== null) {
         this.postorder(root.left);
         this.postorder(root.right);
         console.log(root.data, " ->");
      }
   }
   preorder(root) {
      if (root !== null) {
         console.log(root.data, " ->");
         this.preorder(root.left);
         this.preorder(root.right);
      }
   }

   getRootNode() {
      return this.root;
   }
}

const bst = new BinarySearchTree();

bst.insert(11);
bst.insert(13);
bst.insert(6);
bst.insert(2);
bst.insert(7);
bst.insert(5);

console.log("Inorder: \n", bst.inorder(bst.getRootNode()));
console.log("Preorder: \n", bst.preorder(bst.getRootNode()));
console.log("Postorder: \n", bst.postorder(bst.getRootNode()));
