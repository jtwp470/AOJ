import java.util.Scanner;
public class Partition {
    public static void swap(int a[], int idx1, int idx2){
	int tmp = a[idx1];	a[idx1] = a[idx2];	a[idx2] = tmp;
    }
    /**
     * 配列a[p] ~ a[r] を分割する
     */
    public static void Partition(int a[], int n){
	int pl = 0;
	int pr = n - 1;
	int x = pr;

	do{
	    while(a[pl] < x) pl++;
	    while(a[pr] > x) pr--;
	    if(pl <= pr)
		swap(a, pl++, pr--);
	}while(pl <= pr);
	
	for (int i = 0; i < pl-1; i++) {
	    System.out.print(a[i]+" ");
	}
	System.out.print("["+x+"] ");
	for (int i = pr+1; i < n; i++) {
	    System.out.print(" "+a[i]);
	}
	System.out.println();
    }
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int n = sc.nextInt();
	int a[] = new int[n];
	for (int i = 0; i < n; i++) 
	    a[i] = sc.nextInt();
	Partition(a, n);
    }
}
