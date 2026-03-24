public class TreeBuild{
    static class TreeNode{
        char data;
        TreeNode left;
        TreeNode right;
        TreeNode(char data){
            this.data=data;
            this.left=null;
            this.right=null;
        }
    }
    static int idx=-1;
    public static TreeNode buildTree(char []arr){
        idx++;
        if(arr[idx]=='$'){
            return null;
        }
        TreeNode root=new TreeNode(arr[idx]);
        root.left=buildTree(arr);
        root.right=buildTree(arr);
        return root;
    }
   public static void inOrder(TreeNode root){
    if(root==null){
        return;
    }
    inOrder(root.left);
    System.out.print(root.data+" ");
    inOrder(root.right);
   }
    public static void main(String[] args) {
     char []arr={'A','B','$','$','C','$','D','$','$'};
     TreeNode root=buildTree(arr);
     inOrder(root);
    }
}