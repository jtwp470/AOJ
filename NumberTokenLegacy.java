/*
 * StringTokenizerを使ってキーボード入力から空白ごとに文字を受け取りint型にします
 */
/********************************************************************************
 * JavaSE 7では StringTokenizerは互換性維持を目的で保持されているレガシー
 * クラスであり新規コードでは使用が推奨されていません。この機能の使用を
 * 考えているなら、String の split メソッドまたは java.util.regex パッ
 * ケージを代わりに使用することをお勧めします。
 ********************************************************************************/
import java.io.*;
import java.util.*;
class NumberTokenLegacy{
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