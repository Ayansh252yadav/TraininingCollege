import java.util.ArrayList;
import java.util.Collection;

public class Test {

    public static void main(String[] args) {
        Collection<String> c=new ArrayList<>();
        c.add("Amit");
        c.add("101");
        c.add("47.5");
        for(String ch:c){
            System.out.println(ch);
        }
        String arr[]={"Amit","101","47.5"};
        for (String string : arr) {
            System.out.println(string );
        }
    }
}