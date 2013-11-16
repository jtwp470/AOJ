import java.util.Scanner;
public class RPN {
    public static void main(String[] args) {
	IntStack s = new IntStack(100);
	Scanner sc = new Scanner(System.in);
	s.push(7);
	s.push(3);

	int x = 0;
	int y = 0;
	String operator = sc.next();
	if(operator.equals("+")){
	    x = s.pop();
	    y = s.pop();
	    s.push(x+y);
	}else if(operator.equals("-")){
	    x = s.pop();
	    y = s.pop();
	    s.push(x-y);
	}else if(operator.equals("*")){
	    x = s.pop();
	    y = s.pop();
	    s.push(x*y);
	}else
	    System.out.println("Error");

	System.out.println(s.pop());
    }
}
class IntStack {
    private int max;
    private int ptr;
    private int[] stk;
    public IntStack(int capacity) {
	max = capacity;
	ptr = 0;
	try {
	    stk = new int[max];
	} catch (OutOfMemoryError e)  {
	    e.printStackTrace();
	    max = 0;
	}
    }
	public int push(int x){
	    if(ptr >= max)
		System.out.println("Error");
	    return stk[ptr++] = x;
	}
    public int pop(){
	if(ptr <= 0)
	    System.out.println("Error");
	return stk[--ptr];
    }
}

