/*
 * StringTokenizerを使ってキーボード入力から空白ごとに文字を受け取りint型にします
 */
import java.io.*;
import java.util.*;
class NumberToken{
    public static void main(String args[]){
	int a, b;
	try{
	    BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
	    String str = reader.readLine();
	    //空白で区切る
	    StringTokenizer st = new StringTokenizer(str, " ");
	    a = Integer.parseInt(st.nextToken());
	    b = Integer.parseInt(st.nextToken());
	    int x = 2*(a+b);
	    System.out.println(a*b +" "+x);
	}catch(IOException e){
	    System.out.println(e);
	}catch(Exception e){
	    System.out.println(e);
	}
    }
}