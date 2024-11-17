import java.util.ArrayList;

class Node {
    int data;
    Node left, right;

    Node(int x) {
        data = x;
        left = right = null;
    }
}

class BinaryTreeRightView {
    static void recursiveRightView(Node root, int level, int[] maxLevel, ArrayList<Integer> result) {
        if (root == null) return;
        if (level > maxLevel[0]) {
            result.add(root.data);
            maxLevel[0] = level;
        }
        recursiveRightView(root.right, level + 1, maxLevel, result);
        recursiveRightView(root.left, level + 1, maxLevel, result);
    }

    static ArrayList<Integer> rightView(Node root) {
        ArrayList<Integer> result = new ArrayList<>();
        recursiveRightView(root, 0, new int[]{-1}, result);
        return result;
    }

    public static void main(String[] args) {
        Node root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.right.left = new Node(4);
        root.right.right = new Node(5);

        ArrayList<Integer> result = rightView(root);
        for (int val : result) {
            System.out.print(val + " ");
        }
        System.out.println();
    }
}
