import java.util.LinkedList;
import java.util.Queue;

public class MyStack {
    Queue<Integer>q1=new LinkedList<>();
    Queue<Integer>q2=new LinkedList<>();

    public void push(int val){
        q1.add(val);
    }
    public void pop(){
        for(int i=0;i<q1.size()-1;i++){
            int n=q1.remove();
            q2.add(n);
        }
        int p=q1.remove();
    for(int i=0;i<q2.size();i++){
        q1.add(q2.remove());
    }
}
public int top(){
    
    for(int i=0;i<q1.size()-1;i++){
       q2.add(q1.remove());
    }
    int n=q1.remove();
    q2.add(n);
     for(int i=0;i<q2.size();i++){
        q1.add(q2.remove());
    }
    return n;
}

}
