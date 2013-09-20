/*
 * AOJ Volume 100 10003 Small,Large, or Equal
 */
import java.io.*;
import java.util.*;
class SmallLargeorEqual {
    public static void main(String args[]){
	//int a, b;
	try{
	    BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
	    String str = reader.readLine();
	    StringTokenizer st = new StringTokenizer(str, " ");
	    int a = Integer.parseInt(st.nextToken());
	    int b = Integer.parseInt(st.nextToken());
	    
	    if(a > b) {
		System.out.println("a > b");
	    }else if(a < b){
		System.out.println("a < b");
	    }else{
		System.out.println("a == b");
	    }
	}catch(IOException e){
	    System.out.println(e);
	}catch(Exception e){
	    System.out.println(e);
	}
    }
}