import java.util.Scanner;

public class Simple{
    static class Queue{
        int []arr;
        int size;
         int rear;
        Queue(int size){
            this.arr=new int[size];
            this.size=size;
            this.rear=-1;
        }
    }
     static int front=-1;
    public static boolean isEmpty(Queue q){
        return q.rear==-1;
    }
    public static boolean isFull(Queue q){
        return q.rear==q.arr.length-1;
    }
    public  static void enQueue(Queue q,int data){
        if(isFull(q)){
            System.out.println("Queue is overflow");
            return;
        }else if(front==-1 && q.rear==-1){
            q.rear=front=0;
            q.arr[q.rear]=data;
        }else{
            q.rear++;
            q.arr[q.rear]=data;
        }
    }
    public static int  deQueue(Queue q){
        if(isEmpty(q)){
            System.out.println("Queue is empty");
            return 0;
        }
        int temp=q.arr[front];
        for(int i=front;i<=q.rear;i++){
            q.arr[i]=q.arr[i+1];
        } 
        q.rear--;
        return temp;
    }
    public  static void display(Queue q){
        if(isEmpty(q)){
         System.out.println("Queue is empty");
         return;
        }
        for(int i=front;i<=q.rear;i++){
            System.out.print(q.arr[i]+" ");
        }
        System.out.println();
    }
    public static void peek(Queue q){
        if(isEmpty(q)){
            System.out.println("Queue is empty");
            return;
        }
        System.out.println(q.arr[front]);
    }

public static void main(String[] args) {
    
    Queue q=new Queue(5);
    Scanner sc=new Scanner(System.in);
    int n,data;
    do{
        System.out.println("Enter your choice to perform operation on Queue or press 0 to exit");
        System.out.println("1. to insert element in queue");
        System.out.println("2. to delete element in queue");
        System.out.println("3. to display element in queue");
        System.out.println("4. to check queue is full in queue");
        System.out.println("5. to check queue is Empty in queue");
        System.out.println("6. to peek element");
        n=sc.nextInt();
        switch (n) {
            case 1:
                System.out.println("enter data to insert");
                data=sc.nextInt();
                enQueue(q, data);
                break;
            case 2:
                deQueue(q);
                break;
            case 3:
                display(q);
                break;
            case 4:
                System.out.println(isFull(q));
                break;
            case 5:
                System.out.println(isEmpty(q));
                break;
            case 6:
                peek(q);
                break;
            default:
                System.out.println("Enter correct choice or press 0 to exit");
                break;
        }

    }while(n!=0);
}
}
