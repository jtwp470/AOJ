import java.util.Scanner;
class InsertionSort {
    public static void main(String args[]){
	Scanner sc = new Scanner(System.in);
	int n = sc.nextInt();
	int x[] = new int[n];
	for(int i=0; i<n; i++)
	    x[i] = sc.nextInt();

	insertionSort(x,n);
    }
    public static void insertionSort(int a[], int n){
	for(int i=0; i<n; i++){
	    int tmp = a[i];
	    int j;
	    for(j=i; j>0 && a[j-1]>tmp; j--)
		a[j] = a[j-1];
	    a[j] = tmp;
	}
    }
    public static void swap(int a[], int idx1, int idx2){
	int tmp = a[idx1];
	a[idx1] = a[idx2];
	a[idx2] = tmp;
    }
    public static void show(int a[]){
	for(int i=0; i<a.length-1; i++)
	    System.out.print(a[i]+" ");
	System.out.println(a[a.length-1]);
    }
}
