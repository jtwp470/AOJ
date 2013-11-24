import java.util.Scanner;
public class SearchII {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int tmp[] = new int[100000];
	int cnt = 0;
	int n = sc.nextInt();
	int S[] = new int[n];
	for (int i = 0; i < n; i++) {
	    S[i] = sc.nextInt();
	    tmp[i] = 1;
	}	
	int q = sc.nextInt();
	int T[] = new int[q];
	for (int i = 0; i < q; i++) 
	    T[i] = sc.nextInt();

	for (int i = 0; i < n-1; i++) {
	    for (int j = i+1; j < n; j++) {
		if(S[i] == S[j])
		    tmp[j] = 0;
	    }
	}
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < q; j++) {
		if(S[i] == T[j])
		    tmp[i]++;
	    }
	}
	for (int i = 0; i < n; i++) {
	    if(tmp[i] >= 2)
		cnt++;
	}
	System.out.println("---- data dump ----");
	for (int i = 0; i < n; i++) {
	    System.out.println("S["+i+"] :" +S[i]+" tmp["+i+"]: "+tmp[i]);
	}
	System.out.println(cnt);
    }
}
