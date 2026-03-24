import java.util.*;
public class ReverseStringInBuilt {
    public static String reverseString(String str){
        Stack<Character>s=new Stack<>();
        for(int i=0;i<str.length();i++){
            s.push(str.charAt(i));
        }
        String temp="";
        while (!s.isEmpty()) {
            temp+=s.pop();
        }
        return temp;
    }
    public static void main(String[] args) {
        System.out.println(reverseString("Ayansh"));
    }
}
