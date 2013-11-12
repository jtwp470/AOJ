import java.util.Scanner;
class SelectionSort {
    public static void main(String args[]){
	int ch = 0;
	Scanner sc = new Scanner(System.in);
	int n = sc.nextInt();
	int x[] = new int[n];
	for(int i=0; i<n; i++)
	    x[i] = sc.nextInt();

	selectionSort(x,n);
	for(int i=0; i<n-1; i++)
	    System.out.print(x[i]+" ");
	System.out.println(x[x.length-1]);
	System.out.println(ch);	    
    }
    public static void selectionSort(int a[], int n){
	int ch = 0;
	for(int i=0; i<n-1; i++){
	    int min = i;
	    for(int j=i+1; j<n; j++){
		if(a[j]<a[min])
		    min = j;
	    }
	    swap(a,i,min);
	    ch++;
	}
    }
    public static void swap(int a[], int idx1, int idx2){
	int tmp = a[idx1];
	a[idx1] = a[idx2];
	a[idx2] = tmp;
    }
}
