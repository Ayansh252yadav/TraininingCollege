import java.util.LinkedList;
import java.util.Queue;

public class LevelOrder {
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
  public static void levelOrder(TreeNode root){
    if(root==null){
        return ;
    }
    Queue<TreeNode>q=new LinkedList<>();
    q.add(root);
    q.add(null);
    while(!q.isEmpty()){
        TreeNode curr=q.remove();
        if(curr==null){
            System.out.println();
            if(q.isEmpty()){
               break;
            }else{
                q.add(null);
            }
        }else{
            System.out.print(curr.data+" ");
            if(curr.left!=null){
                q.add(curr.left);
            }if(curr.right!=null){
                q.add(curr.right);
            }
        }
    }
  }
    public static void main(String[] args) {
        int []arr={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
        TreeNode root=buildTree(arr);
        levelOrder(root);
        }
}
