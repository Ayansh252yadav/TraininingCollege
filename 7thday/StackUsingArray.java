import java.util.Scanner;

public class StackUsingArray {

    static class Stack {
        int size;
        int top;
        int[] arr;

        Stack(int size) {
            this.size = size;
            this.top = -1;
            this.arr = new int[size];
        }
    }

    public static void push(Stack s, int data) {
        if (s.top == s.size - 1) {
            System.out.println("Stack Overflow");
            return;
        }

        s.top++;
        s.arr[s.top] = data;
    }

    public static void pop(Stack s) {
        if (s.top == -1) {
            System.out.println("Stack Underflow");
            return;
        }

        System.out.println("Deleted element: " + s.arr[s.top]);
        s.top--;
    }

    public static void peep(Stack s) {
        if (s.top == -1) {
            System.out.println("Stack is empty");
            return;
        }

        System.out.println("Top element: " + s.arr[s.top]);
    }

    public static void traverse(Stack s) {
        if (s.top == -1) {
            System.out.println("Stack is empty");
            return;
        }

        for (int i = s.top; i >= 0; i--) {
            System.out.print(s.arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter stack size:");
        int size = sc.nextInt();

        Stack s = new Stack(size);

        int choice;

        do {
            System.out.println("\n1. Push");
            System.out.println("2. Pop");
            System.out.println("3. Peep");
            System.out.println("4. Traverse");
            System.out.println("0. Exit");

            System.out.print("Enter choice: ");
            choice = sc.nextInt();

            switch (choice) {

                case 1:
                    System.out.print("Enter element: ");
                    int data = sc.nextInt();
                    push(s, data);
                    break;

                case 2:
                    pop(s);
                    break;

                case 3:
                    peep(s);
                    break;

                case 4:
                    traverse(s);
                    break;

                case 0:
                    System.out.println("Program Ended");
                    break;

                default:
                    System.out.println("Invalid choice");
            }

        } while (choice != 0);
    }
}