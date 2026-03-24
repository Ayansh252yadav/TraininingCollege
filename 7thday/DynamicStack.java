import java.util.Scanner;

public class DynamicStack{
    static class Node{
        int data;
        Node next;
        Node(int data){
            this.data=data;
            this.next=null;
        }
    }
    static class Stack{
        static Node head=null;
        public  boolean isEmpty(){
            return head==null;
        }
        public  void push(int data){
            Node newNode=new  Node(data);
            if(isEmpty()){
                head=newNode;
                return;
            }
            newNode.next=head;
            head=newNode;
        }
        public  void pop(){
            if(isEmpty()){
                System.out.println("Stack is empty nothing to pop here");
                return ;
            }
            System.out.println(head.data);
            head=head.next;
        }
          public  void peek(){
        if(isEmpty()){
            System.out.println("Stack is empty nothing to peek here");
                return; 
        }
        System.out.println(head.data);
    }
    public  void traverse(){
        Node temp=head;
        while(temp!=null){
           System.out.print(temp.data+" ");
           temp=temp.next;
        }
    }
    }
    public static void main(String[] args) {
        Stack s=new Stack();
        Scanner sc=new Scanner(System.in);
        int n,data;
        do{
            System.out.println("Enter your choice");
            System.out.println("1 for push");
            System.out.println("2 for pop");
            System.out.println("3 for peek");
            System.out.println("4 for traverse");
            n=sc.nextInt();
            switch (n) {
                case 1:
                    System.out.println("Enter data to push");
                    data=sc.nextInt();
                    s.push(data);
                    break;
                case 2:
                    s.pop();
                    break;
                case 3:
                    s.peek();
                    break;
                case 4:
                    s.traverse();
                    break;
                default:
                    System.err.println("Entered choice is wrong");
                    break;
            }

        }while(n!=0);
    }
}