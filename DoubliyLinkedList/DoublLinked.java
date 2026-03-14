package DoubliyLinkedList;

public class DoublLinked {
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
        if(head==null){
            head=newNode;
            return;
        }
        newNode.next=head;
        head.prev=newNode;
        head=newNode;
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
        addFirst(5);
        addFirst(4);
        addFirst(3);
        addFirst(2);
        addFirst(1);
        printList();
    }
}
