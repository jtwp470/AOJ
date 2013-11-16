import java.util.Scanner;
class GCD {
    public static void main(String args[]){
	Scanner sc = new Scanner(System.in);
	int m = sc.nextInt();
	int n = sc.nextInt();
	if(m < n){
	    int tmp = m;
	    m = n;
	    n = tmp;
	}

	System.out.println(gcd(m,n));
    }
    public static int gcd(int m, int n){
	if(n == 0)
	    return m;
	else
	    return gcd(n, m % n);
    }
}
