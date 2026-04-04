import java.util.ArrayList;

public class BSTree {
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
    public static TreeNode buildBST(TreeNode root,int val){
        if(root==null){
            root=new TreeNode(val);
            return root;
        }
          else if(root.data>val){
          root.left=  buildBST(root.left,val);
          }
         else  if(root.data<val){
          root.right=  buildBST(root.right,val);
          }
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
    public static TreeNode bST(ArrayList<Integer>arr,int si,int ei){
        if(si>ei){
            return null;
        }
        int mid=(si+ei)/2;
        TreeNode root=new TreeNode(arr.get(mid));
        root.left=bST(arr, si, mid-1);
        root.right=bST(arr, mid+1, ei);
        return root;
    }
    public static boolean search(TreeNode root,int data){
        if(root==null){
            return false;
        }
        if(root.data==data){
            return true;
        }
        boolean left=search(root.left, data);
        boolean right=search(root.left, data);
        
       
        return left|| right;
    }
    static int val=Integer.MAX_VALUE;
    public static void findMin(TreeNode root){
        if(root==null){
            return ;
        }
        val=Math.min(val, root.data);
        findMin(root.left);
        findMin(root.right);

    }
    public static void main(String[] args) {
        // TreeNode root=null;
        // root=buildBST(root, 10);
        // root=buildBST(root, 20);
        // root=buildBST(root, 30);
        // root=buildBST(root, 40);
        // root=buildBST(root, 50);
        // inOrder(root);
        ArrayList<Integer>arr=new ArrayList<>();
        arr.add(3);
        arr.add(2);
        arr.add(4);
        arr.add(1);
        arr.add(5);
        arr.add(6);
       TreeNode root= bST(arr, 0, arr.size()-1);
        inOrder(root);
        System.out.println(search(root, 9));
        findMin(root);
        System.out.println("Min val "+val);
    }
}
