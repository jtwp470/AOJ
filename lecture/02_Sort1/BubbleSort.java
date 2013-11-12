import java.util.Scanner;
class BubbleSort{
    public static void main(String args[]){
	int ch = 0;
	Scanner sc = new Scanner(System.in);
	int n = sc.nextInt();
	int x[] = new int[n];
	for(int i=0; i<n; i++)
	    x[i] = sc.nextInt();
	for(int i=0; i<n-1; i++)
	    for(int j=i+1; j<n; j++)
		if(x[i]>x[j]){
		    int tmp = x[i];
		    x[i] = x[j];
		    x[j] = tmp;
		    ch++;
		}
	for(int i=0; i<n-1; i++)
	    System.out.print(x[i]+" ");
	System.out.println(x[x.length-1]);
	System.out.println(ch);	    
    }
}
