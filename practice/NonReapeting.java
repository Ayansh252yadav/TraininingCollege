import java.util.HashSet;
import java.util.Scanner;
import java.util.*;
public class NonReapeting {
    public static String nonRepeating(String str){
       int []arr=new int[26];
        str=str.toLowerCase();
        
        for(int i=0;i<str.length();i++){
            
            char ch=(char)(str.charAt(i)-97);
          arr[ch]++;
        }
        String temp="";
      for(int i=0;i<arr.length;i++){
        if(arr[i]==1){
          temp+=(char)(i+97);
        }
      }
      return temp;
    }
    public static void main(String[] args) {
          Scanner sc =new Scanner(System.in);
        System.out.println("Enter string");
        String str=sc.nextLine();
        System.out.println(nonRepeating(str));
    }
}
