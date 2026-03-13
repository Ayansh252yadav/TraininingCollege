import java.util.*;
public class LinkedList{
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

    //add first

    public static void insertFirst(int data){
        Node newNode=new Node(data);
        count++;
     if(head==null){
        head=tail=newNode;
        return;
     }
     newNode.next=head;
     head=newNode;
    }

//add last;
public static void insertLast(int data){
    count++;
    Node newNode=new Node(data);
    if(tail==null){
        head=tail=newNode;
    }
    tail.next=newNode;
    tail=newNode;
}

//insert at any position

public static void insertAtPos(int data,int pos){
    Node temp=head;
    count++;
    Node newNode=new Node(data);
    for(int i=0;i<pos-1;i++){
        temp=temp.next;
    }
    newNode.next=temp.next;
    temp.next=newNode;
    
}

//delete first
 public static Node deleteFirst(){
    if(count!=0){
        count--;
    }
    if(head==null){
        return null;
    }
    Node temp=head;
    head=head.next;
    return temp;
 }

//delete last

public static Node deleteLast(){
    if(count!=0){
        count--;
    }
    if(head==null){
        return null;
    }
    Node temp=head;
    Node prev=null;
    while(temp.next!=null){
        prev=temp;
        temp=temp.next;
    }
   temp.next=null;
  prev.next=null;
  return temp;
}

//delete at position
public static Node deleteAtPos(int pos){
  if(count!=0){
        count--;
    }
    if(head==null){
        return null;
    }
    Node temp=head;
    Node del=null;
    for(int i=0;i<pos-1;i++){
        temp=temp.next;
    }
   if(temp.next.next!=null){
    temp=temp.next.next;
   }
    return head;
}

//update record
public static void updateList(int currVal,int upVal){
    if(head==null){
        return ;
    }
    Node temp=head;
    while(temp!=null){
        if(temp.data==currVal){
            temp.data=upVal;
            break;
        }
        temp=temp.next;
    }
}
    public static void printList(){
        Node temp=head;
        while(temp!=null){
            System.out.print(temp.data+"->");
            temp=temp.next;
        }
        System.out.print("null");
    }

    public static void search(int item){
        Node temp=head;
        if (head==null){
            return;
        }
        else{
            while(temp!=null){
                if(temp.data==item){
                    System.out.println("element exist");
                    return;
                }
                temp=temp.next;
            }
        }
 System.out.printf("\nelement does not exist");
    }
    public static void main(String []args){
        System.out.println("======LinkedList created=========");
      insertFirst(4);
      insertFirst(3);
      insertFirst(2);
      insertFirst(1);
      insertLast(5);
      insertAtPos(6,2);
      printList();
      System.out.println();
      updateList(6,10);
    //   search(10);
    //   deleteAtPos(0);
    //   deleteAtPos(0);
    //   System.out.println(count);
    //   search(4);
      printList();
    // Scanner sc=new Scanner(System.in);
    // int n,m,pos;
    //   do{
    //     System.out.println();
    //     System.out.println("1 insert at first ");
    //     System.out.println("2. Display List");
    //     System.out.println("3. insert at Last");
    //     System.out.println("4. insert at any pos");
    //     System.out.println("5. delete first");
    //     System.out.println("6.delete last");
    //     System.out.println("Enter your choice");
    //      n=sc.nextInt();
    //     switch(n){
    //         case 1:
    //             System.out.println("Enter value: ");
    //              m=sc.nextInt();
    //             insertFirst(m);
    //             break;
    //         case 2:
    //             printList();
    //             break;
    //         case 3:
    //             System.out.println("Enter value: ");
    //             System.out.println("Enter pos: ");
    //              m=sc.nextInt();
    //             insertLast(m);
    //             break;
    //         case 4:
    //             System.out.println("Enter value: ");
    //              m=sc.nextInt();
    //              pos=sc.nextInt();
    //             insertAtPos(m,pos);
    //             break;
    //         case 5:
    //             deleteFirst();
    //             break;
    //         case 6:
    //             deleteLast();
    //             break;
    //     }
    //   }while(n!=0);
    }
}