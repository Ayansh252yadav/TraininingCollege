public class CountCommonSubSequenceString {
    public static String subSequence(String str1,String str2){
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<str1.length();i++){
            for(int j=0;j<str2.length();j++){
                if(str1.charAt(i)==str2.charAt(j)){
                  sb.append(str1.charAt(i));
                }
            }
        }
        // System.out.println(sb.toString());
        return sb.toString();
    }
    static int count=0;
    public static void subSet(String str,int i,String temp){
        if(i==str.length()){
            count++;
            if(temp.length()!=0)
            System.out.println(temp);
            return;
        }
        subSet(str, i+1, temp+str.charAt(i));
        subSet(str,i+1,temp);
    }
    public static void main(String[] args) {
        String s=subSequence("abcdef", "aefghij");
        subSet(s, 0, "");
        System.out.println(count);
    }
}
