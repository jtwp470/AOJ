import java.util.Scanner;
public class PrintAChessboard_10014 {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int H[] = new int[100]; 
	int W[] = new int[100];
	int num = 0;

	H[num] = sc.nextInt();
	W[num] = sc.nextInt();
	do { 
	    num++;
	    H[num] = sc.nextInt();
	    W[num] = sc.nextInt();
	} while (!(H[num] == 0 && W[num] == 0));

	for(int l = 0; l < num; l++) {
	    for(int i = 0; i < H[l]; i++) {
		for (int j = 0; j < W[l]; j++) {
		    if (i % 2 == 0) {
			if (j % 2 == 0)
			    System.out.print("#");
			else 
			    System.out.print(".");
		    } else {
			if (j % 2 == 0)
			    System.out.print(".");
			else
			    System.out.print("#");			
		    }
		}
		System.out.println();
	    }
	    System.out.println();
	}
    }
}
