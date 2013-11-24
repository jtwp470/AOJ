/*
 * AOJ 0006 Reverse Sequence
 */
import java.io.*;
class ReverseSequence {
    public static void main(String args[]){
	char[] reverse;
	BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
	try {
	    String str = reader.readLine();
	    //20文字以内かどうかのチェック
	    if(str.length() <= 20){
		//String型をchar型に
		reverse = str.toCharArray();
		//逆順にして出力
		for(int i=reverse.length -1; i>=0; i--){
		    System.out.print(reverse[i]);
		}
		System.out.println();
	    
	    }else{
		System.exit(0);
	    }
	}catch(Exception e){
	    System.out.println(e);
	}
    }    
}