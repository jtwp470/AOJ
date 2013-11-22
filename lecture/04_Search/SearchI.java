import java.util.Scanner;
public class SearchI {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int tmp[] = new int[10000];
	int ptr = 0;
	int cnt = 0;
	int num1 = sc.nextInt();
	int s[] = new int[num1];
	for (int i = 0; i < num1; i++) 
	    s[i] = sc.nextInt();
	int num2 = sc.nextInt();
	int t[] = new int[num2];
	for (int i = 0; i < num2; i++) 
	    t[i] = sc.nextInt();


	for (int i = 0; i < num1; i++){ 
	    for (int j = 0; j < num2; j++){ 
		if(s[i] == t[j]){
		    for (int k = 0; k <= ptr; k++) {
			if(tmp[k] == s[i])
			    break;
			else{
			    tmp[++ptr] = s[i];
			    cnt++;
			    System.out.println(tmp[ptr]+" Add");
			    break;
			}
		    }
		}
	    }
	}
	System.out.println(cnt);
    }
}
