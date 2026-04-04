public class UsingArray {
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
    static char[]arr={'D','A','F','E','B','R','T','G','Q','\0','\0','V','\0','J','L'};
    public static int get_Left(int i){
        return 2*i+1;
    } 
     public static int get_Right(int i){
        return 2*i+2;
    } 
    public static void preOrder(int i){
      
        if (i >= arr.length || arr[i] == '\0') {
    return;
}
        System.out.print(arr[i]+" ");
        int idx=get_Left(i);
        preOrder(idx);
        idx=get_Right(i);
        preOrder( idx);
    }
    public static void postOrder(int i){
          if (i >= arr.length || arr[i] == '\0') {
    return;
}
       
        int idx=get_Left(i);
        preOrder(idx);
        idx=get_Right(i);
        preOrder( idx);
         System.out.print(arr[i]+" ");
    }
     public static void inOrder(int i){
          if (i >= arr.length || arr[i] == '\0') {
    return;
}
       
        int idx=get_Left(i);
        preOrder(idx);
        System.out.print(arr[i]+" ");
        idx=get_Right(i);
        preOrder( idx);
    }

    public static void main(String[] args) {
       
        // TreeNode root=buildTree(arr);
        preOrder(0);
        System.out.println();
        postOrder(0);
        System.out.println();
        inOrder(0);
    }
}
