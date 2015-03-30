import java.util.Scanner;
public class Prime {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int cnt = 0;
	int n = sc.nextInt();
	int num[] = new int[n];
	for (int i = 0; i < n; i++)
	    num[i] = sc.nextInt();
	
	for (int i = 0; i < n; i++) 
	    if(isPrime(num[i]))
		cnt++;
	System.out.println(cnt);
    }
    public static boolean isPrime(int x){
	int sqrt = (int) Math.sqrt(x);
	for (int i = 2; i <=sqrt ; i++) 
	    if(x % i == 0) 
		return false;
	return true;
    }
}
