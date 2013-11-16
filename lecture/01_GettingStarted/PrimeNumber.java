import java.util.Scanner;
class PrimeNumber {
    public static void main(String args[]){
	Scanner sc = new Scanner(System.in);
	int n = sc.nextInt();
	int x[] = new int[n];
	for(int i=0; i<n; i++)
	    x[i] = sc.nextInt();

	int i = 0;
	while(i<n){
	    int j;
	    for(j=2; j<n; j++){
		if(x[i] % j == 0)
		    break;
	    }
	    if(x[i] == j)
		System.out.println("Found");
	    i++;
	}
    }
}
