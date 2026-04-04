public class CreateTree {
    static class TreeNode{
        int data;
        TreeNode left;
        TreeNode right;
        TreeNode(int data){
            this.data=data;
            this.left=null;
            this.right=null;
        }
    }
    static int idx=-1;
    public static TreeNode preOrder(int []arr){
        idx++;
        if(arr[idx]==-1){
            return null;
        }
        TreeNode root=new TreeNode(arr[idx]);
        root.left=preOrder(arr);
        root.right=preOrder(arr);
        return root;
    }
    public static void main(String[] args) {
        int []preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
        TreeNode root=preOrder(preorder);
        System.out.println(root.data);
        System.out.println(root.left.data);
        System.out.println(root.right.data);
        System.out.println(root.right.left.data);
        System.out.println(root.right.right.data);
    }
}
