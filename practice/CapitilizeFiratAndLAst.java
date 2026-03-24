import java.util.Scanner;

public class CapitilizeFiratAndLAst{
    public static String change(String str){
        String temp="";
        char ch=str.charAt(0);
            if(ch>=97){
                ch=(char)(ch-32);
            }
            temp+=ch;
        for(int i=1;i<str.length()-1;i++){
            temp+=str.charAt(i);
        }
        ch=str.charAt(str.length()-1);
        if(ch>=97){
            ch=(char)(ch-32);
        }
        temp+=ch;
        return temp;
    }
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter string");
        String str=sc.nextLine();
        System.out.println(change(str));
    }
}