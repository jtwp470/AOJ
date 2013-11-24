import java.util.Scanner;
public class Circle_10009 {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	double r = sc.nextDouble();
	double pi = Math.PI;
	System.out.printf("%8f %8f", r*r*pi, 2*r*pi);
	System.out.println();
    }
}
