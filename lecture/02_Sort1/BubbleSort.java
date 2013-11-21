import java.util.Scanner;
class BubbleSort{
    public static void main(String args[]){
	Scanner sc = new Scanner(System.in);
	int x[];
	int num = sc.nextInt();
	try{
	    x = new int[num];
	    for (int i = 0; i < num; i++) 
		x[i] = sc.nextInt();
	    int t = bubbleSort(x, num);
	    System.out.println(t);
	}catch(Exception e){
	    e.printStackTrace();
	}	
    }
    public static int bubbleSort(int a[],int n){
	int cnt = 0;
	for (int i = 0; i < n-1; i++) {
	    for (int j = i+1; j < n; j++) {
		if(a[i]>a[j]){
		    swap(a,i,j);
		    cnt++;
		}
	    }
	}
	for (int i = 0; i < n; i++) 
	    System.out.print(a[i]+" ");	
	System.out.println();
	return cnt;
    }
    public static void swap(int a[], int idx1, int idx2){
	int tmp = a[idx1];	a[idx1] = a[idx2];	a[idx2] = tmp;
    }
}
