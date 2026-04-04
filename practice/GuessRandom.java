import java.util.Random;
import java.util.Scanner;

public class GuessRandom {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        Random rd=new Random();
        int random=rd.nextInt(100);
        System.out.println("====Enter in the era of guessing number to escape from war of loop====");
        int count=0;
        System.out.println("Start guessing now ......");
        while(true){
            int user=sc.nextInt();
            if(user==random){
                System.out.println(String.format("Congratulation you won this war in %s time", count));
                break;
            }
            if(random>user){
                System.out.println("Your number is less than Computer number");
            }
            else if(user>random){
                System.out.println("yournumber isgreater than users number");
            }
            count++;
        }
        sc.close();
    }
}
