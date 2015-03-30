public class IntStack {
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
