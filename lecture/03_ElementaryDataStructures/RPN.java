import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.util.Scanner;
public class RPN{
    public static void main(String[] args) {
	// スタック
	IntStack is = new IntStack(50);
	String line = "";
	int len = 0;
	Scanner sc = new Scanner(System.in);
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	try{
	    line = br.readLine();
	    len = line.length();
	}catch(IOException e){
	    e.printStackTrace();
	}
	for (int i = 0; i < len; i++) {
	    char c = line.charAt(i);
	    // 文字列が数字かどうかを判定
	    if(isDigit(c)){
		// 数字なのでスタックにプッシュ
		is.push(Integer.parseInt(String.valueOf(c)));
	    }else{
		// 数字でないということは演算子なので計算する
		if(c == '+'){
		    int m = is.pop();
		    int n = is.pop();
		    is.push(m+n);
		}else if(c == '-'){
		    int m = is.pop();
		    int n = is.pop();
		    // LIFOなので引く順番が逆
		    is.push(n-m);
		}
		else if(c == '*'){
		    int m = is.pop();
		    int n = is.pop();
		    is.push(m*n);
		}
	    }
	}
	// 結果を示す(最上段をポップ)
	System.out.println(is.pop());
    }
    //--- 文字列が数字かどうかを判定するメソッド ---//
    public static boolean isDigit(Character s){
	try{
	    Integer.parseInt(String.valueOf(s));
	    return true;
	}catch(NumberFormatException e){
	    return false;
	}
    }
}
// 簡単なスタックを実現
class IntStack {
    private int max;
    private int ptr;
    private int[] stk;
    public IntStack(int capacity) {
	max = capacity;
	ptr = 0;
	try {
	    stk = new int[max];
	} catch (OutOfMemoryError e)  {
	    e.printStackTrace();
	    max = 0;
	}
    }
	public int push(int x){
	    if(ptr >= max)
		System.out.println("Running push error");
	    return stk[ptr++] = x;
	}
    public int pop(){
	if(ptr <= 0)
	    System.out.println("Running pop error");
	return stk[--ptr];
    }
}

