import java.util.Scanner;

public class ReverseString {
    public static String reverse(String str){
        StringBuilder sb=new StringBuilder();
        int i=str.length()-1;
        while (i>=0) {
            sb.append(str.charAt(i));
            i--;
        }
        return sb.toString();
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the String to reverse");
        String s=sc.nextLine();
        System.out.println(reverse(s));
    }
}
