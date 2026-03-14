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
        
     if(head==null){
        head=tail=newNode;
        return;
     }
     count++;
     newNode.next=head;
     head=newNode;
    }

//add last;
public static void insertLast(int data){
    
    Node newNode=new Node(data);
    if(head==null){
        head=tail=newNode;
        return;
    }
    count++;
    tail.next=newNode;
    tail=newNode;
}

//insert at any position

public static void insertAtPos(int data,int pos){
    
    
    if(pos>=count || pos<0){
      return;
    }
    if(pos == 0){
        insertFirst(data);
        return;
    }
    Node newNode=new Node(data);
    Node temp=head;
    for(int i=0;i<pos-1;i++){
        temp=temp.next;
    }
    count++;
    newNode.next=temp.next;
    temp.next=newNode;
    
}


//add before node
public static void addBeNode(int data,int val){

      if(head == null){
        return;
    }
   
    if(head.data==val){
        insertFirst(data);
        return;
    }
    Node newNode=new Node(data);
    Node temp=head;
    Node prev=null;
    while (temp!=null &&temp.data!=val) {
        prev=temp;
        temp=temp.next;
    }
    if(temp == null){
        System.out.println("Value not found");
        return;
    }
     count++;
    prev.next=newNode;
    newNode.next=temp;
}

//add After node
public static void addAfNode(int data,int val){

  if(head==null){
    return;
  }
    Node newNode=new Node(data);
    
    Node temp=head;
    while(temp!=null&&temp.data!=val){
        temp=temp.next;
    }
     if(temp == null){
        System.out.println("Value not found");
        return;
    }
    Node prev=temp.next;
    temp.next=newNode;
    newNode.next=prev;
    count++;
}

//add node before specified node
public static void addNode(int data ,Node node){
    Node newNode=new Node(data);
    count++;
    if(head==null){
        return;
    }
    if(head.data==node.data){
       insertFirst(data);
       return;
    }
    Node temp=head;
    Node prev=null;
    while(temp!=null &&temp.data!=node.data){
       prev=temp;
       temp=temp.next;
    }
    if(temp == null){
        System.out.println("Node not found");
        return;
    }
    prev.next=newNode;
    newNode.next=temp;
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
   
    if(head==null){
        return null;
    }
     if(count!=0){
        count--;
    }
     if(head.next == null){
        Node temp = head;
        head = null;
        return temp;
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
public static void deleteAtPos(int pos){
 
    if(head == null || pos < 0 || pos >= count){
        return;
    }
    
    if(pos==0){
        deleteFirst();
        return;
    }
    Node temp=head;
    
    for(int i=0;i<pos-1;i++){
        temp=temp.next;
    }
   temp.next = temp.next.next;

    count--;
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

    public static void reverseList(){
        if(head==null){
            return;
        }
        Node prev=null;
        Node curr=head;
        Node next;
        while(curr!=null){
            next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
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
      
    Scanner sc=new Scanner(System.in);
    int n,search,pos,insert,data,delete;
      do{
        System.out.println();
        System.out.println("1 INSERT  ");
        System.out.println("2.DELETE LIST OR LIST ITEM");
        System.out.println("3.SEARCH LIST ITEM");
        System.out.println("4.UPDATE LIST ITEM");
        System.out.println("5. DISPLAY LIST");
        System.out.println("ENTER YOUR CHOICE AND PRESS 0 TO EXIT");
         n=sc.nextInt();
        switch(n){
            case 1:
                System.out.println("1.INSERT ITEM FIRST");
                System.out.println("2. INSERT ITEM AT LAST");
                System.out.println("3. INSERT ITEM AT ANY POS");
                System.out.println("4. INSERT ITEM AFTER SPECIFIED LIST VALUE");
                System.out.println("5 INSERT ITEM BEFORE SPECIFIED LIST VALUE");
                System.out.println("6.INSERT ITEM AFTER SPECIFIED NODE");
                insert=sc.nextInt();
                switch(insert){
                     case 1:
                        System.out.println("Enter data to insert");
                        data=sc.nextInt();
                        insertFirst(data);
                        break;
                    case 2:
                        System.out.println("Enter data to insert");
                        data=sc.nextInt();
                        insertLast(data);
                        break;
                    case 3:
                        System.out.println("Enter data and position to insert");
                        data=sc.nextInt();
                        pos=sc.nextInt();
                        insertAtPos(data, pos);
                        break;
                    case 4:
                        System.out.println("Enter data ad value to insert");
                        data=sc.nextInt();
                        int val=sc.nextInt();
                        addAfNode(data, val);
                        break;
                    case 5:
                        System.out.println("Enter data and value to insert");
                        data=sc.nextInt();
                         int val1=sc.nextInt();
                        addBeNode(data, val1);
                        break;
                    default:
                        System.err.println("your entered some incorrect data");
                        break;
                }
                 break;
            case 2:
                System.out.println("1.DELETE FIRST ITEM OF LIST");
                System.out.println("2.DELETE LAST ITEM OF LIST");
                System.out.println("3.DELETE AT ANY SPECIFIED POSTION");
                delete=sc.nextInt();
                switch (delete) {
                    case 1:
                        deleteFirst();
                        break;
                    case 2:
                        deleteLast();
                        break;
                    case 3:
                        System.out.println("enter the postion to delete");
                        pos=sc.nextInt();
                        deleteAtPos(pos);
                        break;
                    default:
                        System.out.println("ENTER VALID NUMBER");
                        break;
                }
                break;
            case 3:
                System.out.println("enter nuber to search in list");
                search=sc.nextInt();
                search(search);
                break;
            case 4:
                System.out.println("enter to current data and updated value to update list item");
                data=sc.nextInt();
                int update=sc.nextInt();
                updateList(data,update);
                break;
            case 5:
                printList();
                break;
            default:
                System.out.println("SELECT CORRECT CHOICES AND PRESS 0 TO EXIT");
                break;
        }
      }while(n!=0);
    }
}