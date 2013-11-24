import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedReader;
public class SimpleCalculator_10010 {
    public static void main(String[] args) {
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	boolean judge = false;
	String tmp[] = new String[2];
	String operand[] = new String[5000];
	int res[] =  new int[10000];
	int ptr = 0;
	int cnt = 0;
	try{
	    do{
		String line = br.readLine();
		tmp = line.split("\\s");	    
		judge = tmp[1].equals("?");
		if(!judge){
		    res[ptr++] = Integer.parseInt(tmp[0]);
		    operand[cnt++] = tmp[1];
		    res[ptr++] = Integer.parseInt(tmp[2]);
		}
	    }while(!judge);
	    for (int i = 0; i < cnt; i++) {
		if(operand[i].equals("+"))
		    System.out.println(res[i*2]+res[i*2+1]);
		if(operand[i].equals("-"))
		    System.out.println(res[i*2]-res[i*2+1]);
		if(operand[i].equals("*"))
		    System.out.println(res[i*2]*res[i*2+1]);
		if(operand[i].equals("/"))
		    if(res[i*2+1] != 0)
			System.out.println(res[i*2]/res[i*2+1]);
	    }
	}catch(IOException e){
	    System.out.println(e);
	}
    }
}
