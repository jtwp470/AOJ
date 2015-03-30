import java.util.Scanner;
public class fib {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
	long[] fib = new long[5000];
        System.out.println(fibonacci(n+1, fib));
    }
    public static long fibonacci(int x, long fib[]){
        if(x == 0)  return 0;
        if(x == 1)  return 1;
	if(fib[x] != 0)  return fib[x]; // キャッシュしていた結果を返す
	fib[x] = fibonacci(x - 1, fib) + fibonacci(x - 2, fib); // 結果をキャッシュする
	return fib[x];
    }
}
