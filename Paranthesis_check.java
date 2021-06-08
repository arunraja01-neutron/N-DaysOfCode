import java.util.*;

class Node<T>{
    T data;
    Node<T> next;
    Node(){
        this.data = null;
        this.next = null;
    }
    Node(T data){
        this.data = data;
        this.next = null;
    }
}
class Stack<T>{
    Node<T> top;
    Stack(){
        this.top = new Node<>(); // default constructor
    }
    Stack(T data){
        this.top = new Node<>(data); // parameterized constructor
    }
    void push(T data){
        if(Objects.isNull(top))
            this.top = new Node<>(data);
        else if (Objects.isNull(top.data))
            top.data = data;
        else {
            Node newNode = new Node<>(data);
            newNode.next = top;
            top = newNode;
        }
    }
    T pop(){
        if(Objects.isNull(top)) // when the stack is empty
            return null;
        T data = top.data;
        top = top.next;
        return data;
    }
    T peek(){
        T data = top.data;
        return data;
    }
    void printStack(Node<T> top){
        while(top.next != null){
            System.out.print(top.data);
            top = top.next;
        }
        System.out.println(top.data);
    }

    boolean isEmpty(){
        if (this.top == null)
            return true;
        return false;
    }
}

public class ParanthesisChecker {
    static boolean validateExpression(String expression){
        Stack<Character> paranthesis_stack = new Stack<>();
        for(Character i : expression.toCharArray()){
            if (i==')' || i==']' || i=='}'){
                Character topElement = paranthesis_stack.pop();
                if(Objects.isNull(topElement)) // if stack is empty
                    return false;
                switch(i){
                    case ')':
                        if(topElement != '(')
                            return false;
                        else

                            continue;
                    case '}':
                        if(topElement != '{')
                            return false;
                        else
                            continue;
                    case ']':
                        if(topElement != '[')
                            return false;
                }
            }
            else
                paranthesis_stack.push(i);
        }
        return paranthesis_stack.isEmpty();
    }
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String expression = scan.nextLine(); //[][]({})
        if(ParanthesisChecker.validateExpression(expression)){
            System.out.println("The expression is valid");
        }
        else
            System.out.println("The expression is not balanced");
    }
}
