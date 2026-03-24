public class ReplaceSubtring {
    public static String replaceString(String str,String s,int pos){
        StringBuilder temp=new StringBuilder();
        int count=0;
        for(int i=0;i<pos;i++){
            temp.append(str.charAt(i));
            count++;
        }
  
        for(int j=0;j<s.length();j++){
           temp.append(s.charAt(j));
           count++;
        }
        while (count<str.length()) {
            temp.append(str.charAt(count));
            count++;
        }
       
        return temp.toString();
    }
    public static void main(String[] args) {
        System.out.println(replaceString("hello world", "ayansh", 3));
    }
}
