import java.util.Scanner;
public class SortII_10029 {    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int n = sc.nextInt();
	int x[] = new int[n];
	for (int i = 0; i < n; i++) 
	    x[i] = sc.nextInt();
	shellSort(x,n);       
	for (int i = 0; i < n; i++){ 
	    System.out.print(x[i]);
	    if(i < n-1)
		System.out.print(" ");
	}
	System.out.println();
    }
    public static void shellSort(int[] a, int n){
	int h;
	for (h = 1; h < n/9; h = h*3+1) 
	    ;
	for (; h > 0 ; h /= 3) 
	    for (int i = h; i < n; i++) {
		int j;
		int tmp = a[i];
		for(j = i - h; j >= 0 && a[j] > tmp; j -= h)
		    a[j+h] = a[j];
		a[j+h] = tmp;
	    }	
    }
}
