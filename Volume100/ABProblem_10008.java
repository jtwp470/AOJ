import java.util.Scanner;
public class ABProblem_10008 {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int a = sc.nextInt();
	int b = sc.nextInt();
	double f = (double)a / (double)b;
	System.out.print(a/b+" "+a%b+" ");
	System.out.printf("%.5f", f);
	System.out.println();
    }
}
