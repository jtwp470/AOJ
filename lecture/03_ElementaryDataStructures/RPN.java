import java.io.IOException;

import java.io.InputStreamReader;
import java.io.BufferedReader;

import java.util.Scanner;
public class RPN {
    public static void main(String[] args) {
	IntStack s = new IntStack(10);
	String stringArray[];
	Scanner sc = new Scanner(System.in);
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	try{
	    stringArray = br.readLine().split("\\s");
	}catch(IOException e){
	}

	int x = 0;
	int y = 0;
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

