public class GivenTree {
    
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
//    public static TreeNode newNode(int data){
//     TreeNode node=new TreeNode(data);
//     return node;
//    }
    public static void main(String[] args) {
     char []arr={'A','B','D','$','E','$','$','$','C','M','$','$','N','P','$','$','$'};
   
     TreeNode root=buildTree(arr);
     System.out.println("Inorder");
     inOrder(root);
     System.out.println();
     System.out.println("PreOrder");
     preOrder(root);
     System.out.println();
     System.out.println("postOrder");
     postOrder(root);
    }
}
