/*
 * キーボード入力から空白ごとに文字を受け取りint型にします.なおかつ配列に代入します
 */
import java.io.*;
class NumberToken {
    public static void main(String args[]){
	int[] resultnum;
	resultnum = new int[10];
	   
	BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
	try {
	    String line = reader.readLine();
	    String[] result = line.split("\\s");
	    for(int x=0; x<result.length; x++){
		resultnum[x]= Integer.parseInt(result[x]);
		System.out.println(resultnum[x]);
	    }
	}catch(Exception e){
	    System.out.println(e);
	}
    }
}
