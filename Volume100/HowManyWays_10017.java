import java.util.Scanner;
public class HowManyWays_10017 {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int n[] = new int[100]; 
	int x[] = new int[100];
	int num = 0;

	n[num] = sc.nextInt();
	x[num] = sc.nextInt();
	do { 
	    num++;
	    n[num] = sc.nextInt();
	    x[num] = sc.nextInt();
	} while (!(n[num] == 0 && x[num] == 0));

	for(int t=0; t < num; t++) {
	    int cnt = 0;
	    for(int i=1; i <= n[t]; i++) {
		for(int j=i+1; j <= n[t]; j++) {
		    for(int k=j+1; k <= n[t]; k++) {
			if (i + j + k == x[t])
			    cnt++;
		    }
		}
	    }
	    System.out.println(cnt);
	}
    }
}
