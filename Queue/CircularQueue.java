public class CircularQueue {
    static class Circular{
        int size;
        int []arr;
        Circular(int size){
            this.size=size;
            arr=new int[size];
        }
    }
    static int rear=-1;
    static int front=-1;
    public static boolean isEmpty(){
        return rear==-1;
    }
    public static boolean isFull(Circular c){
      return (rear+1)%c.size==front;
    }

    public static void enQueue(int data ,Circular c){
        if(isFull(c)){
         System.out.println("Circular is Queue");
         return;
        }
        else if(rear==-1 && front==-1){
            // rear=0;front=0;
            rear=(rear+1)%c.size;
            c.arr[rear]=data;
        }else{
             rear=(rear+1)%c.size;
            c.arr[rear]=data;
        }
    }
    public static void deQueue(Circular c){
        if(isEmpty()){
            System.out.println("Queue is Empty");
            return;
        }
        else if(front==-1){
            front=(front+1)%c.size;
            front=front+1;
            
        }else{
            front=(front+1)%c.size;
            
            front+=1;
        }
    }
    public static void display(Circular c){
        if(isEmpty()){
            System.out.println("Circular queue isEmpty");
            return;
        }
        // int i=front;
        // int j=rear;
       for(int i=front;i!=rear;i=(i+1)%c.size){
         System.out.print(c.arr[i]+" ");
       }
       System.out.println(c.arr[rear]);
    }
    public static void main(String[] args) {
        Circular c=new Circular(5);
        enQueue(1, c);
        enQueue(2, c);
        enQueue(3, c);
        display(c);
    }
}
