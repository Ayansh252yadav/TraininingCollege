import java.util.*;
public class FrequencyOfCharacgter {
    public static int [] frequency(String str){
        int []arr=new int[26];
        str=str.toLowerCase();
        
        for(int i=0;i<str.length();i++){
            
            char ch=(char)(str.charAt(i)-97);
          arr[ch]++;
        }
      
        return arr;
    }
    public static void main(String[] args) {
         Scanner sc =new Scanner(System.in);
        System.out.println("Enter string");
        String str=sc.nextLine();
        System.out.println(Arrays.toString(frequency(str)));
        sc.close();
    }
}
