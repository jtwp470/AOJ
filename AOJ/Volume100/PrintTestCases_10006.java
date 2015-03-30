/*
 * AOJ Volume 100 10006 Print Test Cases
 */
import java.io.*;

class PrintTestCases_10006 {
    public static void main(String args[]){
	int i = 0;
	int a = 0;
	BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));	
	try{
	    String line = reader.readLine();
	    a = Integer.parseInt(line);
	    while(a != 0){
		System.out.println("Case "+(i+1)+": "+a);	    		
		i++;
		line = reader.readLine();
		a = Integer.parseInt(line);
	    }
	}catch(IOException e){
	    System.out.println(e);
	}catch(Exception e){
	    System.out.println(e);
	}
   }
}
