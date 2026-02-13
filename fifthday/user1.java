import java.util.Scanner;
public class user1{
    public static void main(String args[]){
        
      String user="gupta";
      String password="1234";
      Scanner sc = new Scanner(System.in);
       System.out.println("Enter your username:");
      String userName=sc.nextLine();
     System.out.print("Enter your password: ");

        StringBuilder passwordUser = new StringBuilder();
        int ch;

        try{
          while ((ch = System.in.read()) != '\n') {
            if (ch != '\r') {   
                passwordUser.append((char) ch);
                System.out.print("*"); 
            }
        }
        }catch(Exception err){
          System.out.println(err);
        }

        System.out.println();

        if (user.equals(userName) && password.equals(passwordUser.toString())) {
            System.out.println("Welcome to dashboard");
        } else {
            System.out.println("Invalid username or password");
        }
    }
      
    }