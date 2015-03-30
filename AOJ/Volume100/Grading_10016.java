import java.util.Scanner;
public class Grading_10016 {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int m[] = new int[1000];
	int f[] = new int[1000];
	int r[] = new int[1000];
	int ptr = 0;
	do{
	    m[ptr] = sc.nextInt();
	    f[ptr] = sc.nextInt();
	    r[ptr] = sc.nextInt();
	    ptr++;
	}while(m[ptr-1] != -1 || f[ptr-1] != -1);
	for (int i = 0; i < ptr-1; i++) {
	    int sum = m[i] + f[i];
	    if(m[i] < 0 || f[i] < 0)
		System.out.println("F");
	    else if(sum >= 80)
		System.out.println("A");
	    else if(sum >= 65 && sum < 80)
		System.out.println("B");
	    else if(sum >= 50 && sum < 65)
		System.out.println("C");
	    else if(sum >= 30 && sum < 50)
		if(r[i] >= 50)
		    System.out.println("C");
		else
		    System.out.println("D");
	    else
		System.out.println("F");
	}
    }
}
