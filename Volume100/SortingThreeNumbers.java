/*
 * AOJ Volume 100 10004 Sorting Three Numbers
 */
import java.io.*;
import java.util.*;
class SortingThreeNumbers {
    public static void main(String args[]){
	int X[];
	int tmp = 0;
	X = new int[3];
	try{
	    BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
	    String str = reader.readLine();
	    StringTokenizer st = new StringTokenizer(str, " ");
	    X[0] = Integer.parseInt(st.nextToken());
	    X[1] = Integer.parseInt(st.nextToken());
	    X[2] = Integer.parseInt(st.nextToken());
	    
	    for(int i=0; i<X.length -1; i++){
		for(int j=i+1; j<X.length; j++){
		    if(X[i]>X[j]){
			tmp = X[i];
			X[i]=X[j];
			X[j]=tmp;
		    } 
		}
	    }
	    System.out.println(X[0]+ " "+X[1]+" "+X[2]);

	}catch(IOException e){
	    System.out.println(e);
	}catch(Exception e){
	    System.out.println(e);
	}
    }
}