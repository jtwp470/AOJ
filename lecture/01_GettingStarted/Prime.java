import java.util.Scanner;
public class Prime {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int counter = 0;
	int n = sc.nextInt();
	int num[] = new int[n];
	for (int i = 0; i < n; i++)
	    num[i] = sc.nextInt();
	
	// Is the number prime?
	int i;
    	for (i = 0; i < n; i++){
	    int j;
	    for(j=2; j<num[i]; j++){
		if(num[i] % j == 0)
		    break;
	    }
	    if(num[i] == j)
		counter++;
	}
	System.out.println(counter);
    }
}
