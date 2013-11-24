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
	// 重複要素の確認
	for (int i = 0; i < n; i++) {
	    if(binarySearch(S,S[i]))
		tmp[i] = 0;
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

    public static boolean binarySearch(int a[], int key){
	int pl = 0;
	int pr = a.length -1;
	do{
	    int pc = (pl + pr)/2;
	    if(a[pc] == key)
		return true;
	    else if(a[pc] < key)
		pl = pc + 1;
	    else
		pr = pc - 1;
	}while(pl <= pr);
	return false;
    }
}
