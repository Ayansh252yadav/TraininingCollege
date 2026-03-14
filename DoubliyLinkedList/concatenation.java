package DoubliyLinkedList;

import java.util.Arrays;

public class concatenation {
      public static int[] getConcatenation(int[] nums) {
        int []temp=new int[2*nums.length];
        int k=0;
        for(int i=0;i<nums.length;i++){
            temp[k]=nums[i];
            k++;
        }
        for(int i=0;i<nums.length;i++){
            temp[k]=nums[i];
            k++;
        }
        return temp;
    }
    public static void main(String[] args) {
        int nums[]={1,2,1};
        System.out.println(Arrays.toString(getConcatenation(nums)));
    }
}
