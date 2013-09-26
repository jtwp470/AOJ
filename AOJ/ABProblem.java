
/*
 * AOJ Volume 100 10008 A/B Problem
 */
import java.io.*;
import java.util.*;
class ABProblem {
    public static void main(String args[]){
	int a, b;
	double x;
	    BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
	    try{
		String str = reader.readLine();
		StringTokenizer st = new StringTokenizer(str, " ");
		a = Integer.parseInt(st.nextToken());
		b = Integer.parseInt(st.nextToken());
		//a = Double.parseDouble(st.nextToken());
		//b = Double.parseDouble(st.nextToken());
		x = (double)a / b;
		System.out.print(a/b +" "+a%b+" ");
		System.out.println(x);
		String y = String.format("%.2f" ,x);


	}catch(IOException e){
	    System.out.println(e);
	}catch(Exception e){
	    System.out.println(e);
	}
    }
}