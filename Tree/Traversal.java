public class Traversal{
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
    public static TreeNode buildTree(int []arr){
        idx++;
        if(arr[idx]==-1){
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
   public static void preOrder(TreeNode root){
    if(root==null){
        return;
    }
    System.out.print(root.data+" ");
    preOrder(root.left);
    preOrder(root.right);
   }
   public static void postOrder(TreeNode root){
    if(root==null){
        return ;
    }
    postOrder(root.left);
    postOrder(root.right);
    System.out.print(root.data+" ");
   }
   public static TreeNode newNode(int data){
    TreeNode node=newNode(data);
    return node;
   }
    public static void main(String[] args) {
    //  char []arr={'A','B','$','$','C','$','D','$','$'};
    TreeNode root =new TreeNode(10);
     root.left=new TreeNode(20);
     root.right=new TreeNode(30);
     root.left.left=new TreeNode(40);
     System.out.println("Tree is created");
     System.out.println("Inorder");
     inOrder(root);
     System.out.println("preorder");
     preOrder(root);
System.out.println("Postorder");
postOrder(root);
    //  TreeNode root=buildTree(arr);
    //  inOrder(root);
    }
}
