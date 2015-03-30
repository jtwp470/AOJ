import java.util.Scanner;
public class SortI_10028 {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int n = sc.nextInt();
	int x[] = new int[n];
	for (int i = 0; i < n; i++) 
	    x[i] = sc.nextInt();
	for (int i = 0; i < n-1; i++) 
	    for (int j = i+1; j < n; j++) 
		if(x[i]>x[j])
		    swap(i,j,x);
	for (int i = 0; i < n; i++){ 
	    System.out.print(x[i]);
	    if(i < n-1)
		System.out.print(" ");
	}
	System.out.println();
    }
    public static void swap(int idx1, int idx2, int a[]){
	int tmp = a[idx1];	a[idx1] = a[idx2];	a[idx2] = tmp;
    }
}
