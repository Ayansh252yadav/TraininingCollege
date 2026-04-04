import java.util.*;
public class SumOfN{
    public static int sum(int n){
        if(n==1){
            return 1;
        }
        return n+sum(n-1);
    }
    public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number to upto it");
        int n=sc.nextInt();
        int sum=n*(2+(n-1))/2;
        
        System.out.println(sum);
        System.out.println("Recursion "+sum(n));
        sc.close();
    }
}