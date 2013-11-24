/*
 * AOJ 0001 List of Top 3 Hills
 *
 * 山の高さをメートル単位の整数で表した 10 個のデータがあります。その 10 個のデータを読み込んで、その中で、高い順から３つ出力して終了するプログラムを作成して下さい。
 */
import java.io.*;
class ListOfTop3Hills {
    public static void main(String args[]){
	int X[];
	X = new int[10];
	int tmp;
	BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
	try{
	    String line = reader.readLine();
	    for(int i=0; i<9; i++){
		X[i] = Integer.parseInt(line);
		line = reader.readLine();
	    }
	    for(int i=0; i<X.length -1; i++){
		for(int j=i+1; j<X.length; j++){
		    if((X[i] >= 0 || X[i] <= 10000) || (X[j] >= 0 X[j] <= 10000)){
			if(X[i]<X[j]){
			    tmp = X[i];
			    X[i]=X[j];
			    X[j]=tmp;
			}
		    }
		}
	    }
	    System.out.println();
	    for(int i=0; i<3; i++){
		System.out.println(X[i]);
	    }
	}catch(IOException e){
	    System.out.println(e);
	}catch(Exception e){
	    System.out.println(e);
	}
    }
}