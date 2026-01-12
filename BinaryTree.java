package Dsa_2025;

class BinaryTree {

    // Node class
    static class Node {
        int data;
        Node left, right;

        Node(int value) {
            data = value;
            left = right = null;
        }
    }

    Node root;

    // Inorder Traversal (Left → Root → Right)
    void inorder(Node node) {
        if (node == null)
            return;

        inorder(node.left);
        System.out.print(node.data + " ");
        inorder(node.right);
    }

    // Preorder Traversal (Root → Left → Right)
    void preorder(Node node) {
        if (node == null)
            return;

        System.out.print(node.data + " ");
        preorder(node.left);
        preorder(node.right);
    }

    // Postorder Tversal (Left → Right → Rote)
    void postorder(Node node) {
        if (node == null)
            return;

        postorder(node.left);
        postorder(node.right);
        System.out.print(node.data + " ");
    }

    public static void main(String[] args) {

        BinaryTree tree = new BinaryTree();

        // Creating tree
        tree.root = new Node(1);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);
        tree.root.left.left = new Node(4);
        tree.root.left.right = new Node(5);

        System.out.print("Inorder Traversal: ");
        tree.inorder(tree.root);

        System.out.print("\nPreorder Traversal: ");
        tree.preorder(tree.root);

        System.out.print("\nPostorder Traversal: ");
        tree.postorder(tree.root);
    }
}
