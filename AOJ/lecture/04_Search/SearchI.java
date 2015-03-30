import java.util.Scanner;
public class SearchI {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	// 各数があるかどうかの判定用配列
	int tmp[] = new int[10000];
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
	// Sに重複する数字がある場合最初の要素以外をすべて0にする
	for (int i = 0; i < n-1; i++) {
	    for (int j = i+1; j < n; j++) {
		if(S[i] == S[j])
		    tmp[j] = 0;
	    }
	}
	// Tの数列の要素がSに存在すればそのときの要素を+1
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < q; j++) {
		if(S[i] == T[j])
		    tmp[i]++;
	    }
	}
	// 2以上あればカウントアップ (3以上は単なる重複なので0はいっぱいあっても問題なし)
	for (int i = 0; i < n; i++) {
	    if(tmp[i] >= 2)
		cnt++;
	}
	// dump for running check
	System.out.println("---- data dump ----");
	for (int i = 0; i < n; i++) {
	    System.out.println("S["+i+"] :" +S[i]+" tmp["+i+"]: "+tmp[i]);
	}
	System.out.println(cnt);
    }
}
