import java.util.Scanner;

public class DoublyLinked {
     static class Node{
        int data;
        Node next;
        Node prev;
       Node(int data){
        this.data=data;
        this.next=null;
        this.prev=null;
       } 
    }
    static Node head=null;
    static Node tail=null;
    static int count=0;
    public static void addFirst(int data){
        Node newNode=new Node(data);
        count++;
        if(head==null){
            head=tail=newNode;
            return;
        }
        newNode.next=head;
        head.prev=newNode;
        head=newNode;
    }

    public static void addLast(int data){
        Node newNode=new Node(data);
        count++;
        if(head==null){
            head=tail=newNode;
            return;
        }
        tail.next=newNode;
        newNode.prev=tail;
        tail=newNode;
    }

    public static void insertAtPos(int data,int pos){
        count++;
        Node newNode=new Node(data);
        if(head==null && pos!=0){
            System.out.println("choose correct position to insert as list is empty");
            return;
        }
        Node temp=head;
        for(int i=0;i<pos-1;i++){
           temp=temp.next;
        }
        newNode.next=temp;
        
    }

    public static void removeFirst(){
        count--;
        if(head==null){
            System.out.println("List is empty");
            return;
        }
        head=head.next;
        head.prev=null;
    }
  
    public static void removeLast(){
        count--;
        if(head==null){
            System.out.print("list is empty");
            return;
        }
    tail.prev.next=null;
    tail.prev=null;
    }

    public static void printList(){
        Node temp=head;
        while(temp!=null){
            System.out.print(temp.data+"->");
            temp=temp.next;
        }
        System.out.print("null");
    }

    
    public static void main(String[] args) {
        // addFirst(5);
        // addFirst(4);
        // addFirst(3);
        // addFirst(2);
        // addFirst(1);
        // addLast(6);
        // printList();
      Scanner sc=new Scanner(System.in);
        int n,m;
        do{
        System.out.printf("\n1. to add at first");
        System.out.printf("\n2. add number at last");
        System.out.printf("\n3. to display list");
        System.out.printf("\n4. to remove first lement of list");
        System.out.printf("\n5. to remove last lement of list");
        System.out.printf("\nEnter your choice");
        n=sc.nextInt();
        switch (n) {
            case 1:
                System.out.println("enter data add first");
                m=sc.nextInt();
                addFirst(m);
                break;
            case 2:
                System.out.println("enter data add last");
                m=sc.nextInt();
                addLast(m);
                break;
            case 3:
                printList();
                break;
            case 4:
                removeFirst();
                break;
            case 5:
                removeLast();
                break;
            default:
                System.err.println("Enter correct Number to perform operation");
                break;
        }
    }while (n!=0);
}
}
