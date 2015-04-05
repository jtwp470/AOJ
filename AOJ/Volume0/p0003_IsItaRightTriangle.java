import java.util.Scanner;
public class p0003_IsItaRightTriangle {
    public static boolean IsItaRightTriangle(int a, int b, int c) {
	// 最大値をaと仮定
	int tmp_a = a;
	int tmp_b = b;
	int tmp_c = c;
	int max = a;
	a = c;
	if (max < b) {
	    // 最大値bであった
	    max = b;
	    b = c;
	    a = tmp_a;
	}
	if (max < c) {
	    // 最大値がcであった
	    max = c;
	    a = tmp_a;
	    b = tmp_b;
	}

	if(a*a + b*b == max*max)
	    return true;
	else
	    return false;
    }

    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int num = sc.nextInt();
	int a[] = new int[num];
	int b[] = new int[num];
	int c[] = new int[num];

	for(int i=0; i<num; i++) {
	    a[i] = sc.nextInt();
	    b[i] = sc.nextInt();
	    c[i] = sc.nextInt();
	}

	for(int i=0; i<num; i++) {
	    if(IsItaRightTriangle(a[i], b[i], c[i]))
		System.out.println("YES");
	    else
		System.out.println("NO");
	}
    }
}
