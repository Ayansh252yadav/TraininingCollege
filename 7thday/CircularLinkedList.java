public class CircularLinkedList {
    static class Node{
        int data;
        Node next;
        Node(int data){
            this.data=data;
            this.next=null;
        }
    }
    static Node head=null;
    static Node tail=null;
    static int count=0;
    public static void insertFirstCircular(int data){
        Node newNode=new Node(data);
         if(head==null){
            head=tail=newNode;
          newNode.next=head;
          return;
         }
         newNode.next=head;
          head=newNode;
          tail.next=head;
    }

    public static void insertLast(int data){
   Node newNode=new Node(data);
        if(head==null){
          tail=head=newNode;
          newNode.next=head;
          return;
        }
        newNode.next=head;
        tail.next=newNode;
        tail=newNode;
        
    }
    public static void printList(){
        Node temp=head.next;
        System.out.print(head.data);
        while(head!=temp){
            System.out.print("->"+temp.data);
            temp=temp.next;
        }
    }

    public static void main(String[] args) {
        insertFirstCircular(1);
        insertFirstCircular(2);
        insertFirstCircular(3);
        insertFirstCircular(4);
        insertLast(7);
        printList();
    }
}
