class Node {
    int data;
    Node left, right;

    Node(int val) {
        data = val;
        left = null;
        right = null;
    }
}

class MaxDepth {
    static int maxDepth(Node node) {
        if (node == null)
            return 0;
        int lDepth = maxDepth(node.left);
        int rDepth = maxDepth(node.right);
        return Math.max(lDepth, rDepth) + 1;
    }

    public static void main(String[] args) {
        Node root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.left.left = new Node(4);
        root.left.right = new Node(5);

        System.out.println(maxDepth(root));
    }
}
