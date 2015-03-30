import java.util.Scanner;
public class SwappingTwoNumbers_10007 {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int x[] = new int[10000];
	int y[] = new int[10000];
	int ptr = 0;
	do{
	    x[ptr] = sc.nextInt();
	    y[ptr] = sc.nextInt();
	    ptr++;
	}while(x[ptr-1] != 0 || y[ptr-1] != 0);
	for (int i = 0; i < ptr-1; i++) {
	    if(x[i]>y[i])
	    	System.out.println(y[i]+" "+x[i]);
	    else
	    	System.out.println(x[i]+" "+y[i]);
	}
     }
}
