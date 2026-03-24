import java.util.*;
class MinStack {
Stack<Integer>sc=new Stack<>();
Stack<Integer>s=new Stack<>();
int min=Integer.MAX_VALUE;
    public MinStack() {
   
  
    }
    
    public void push(int val) {
       sc.push(val);
       if(s.isEmpty()|| val<=s.peek()){
        s.push(val);
       }
    }
    
    public void pop() {
        if(sc.isEmpty()){
            return;
        }
        if(sc.peek()==s.peek()){
               s.pop();
               sc.pop();
        }
        // min=s.peek();
        // s.pop();
    }
    
    public int top() {
      
            return sc.peek();
       
    }
    
    public int getMin() {
        return s.peek();
    }
    public static void main(String[] args) {
         MinStack obj = new MinStack();
       obj.push(5); 
  obj.pop();
  int param_3 = obj.top();
  int param_4 = obj.getMin();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */