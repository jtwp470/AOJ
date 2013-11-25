import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;
public class SumOfNumbers_10019 {
    public static void main(String[] args) {
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	int c = 0;
	int ptr = 0;
	String tmp[] = new String[150];
	try {
	    do{
		tmp[ptr] = br.readLine();
		if(tmp[ptr].length() < 2)
		    c = Integer.parseInt(tmp[ptr]);
		else
		    c = 1;
		ptr++;
	    }while(c != 0);
	    for (int i = 0; i < ptr-1; i++) {
		int sum = 0;
		for (int j = 0; j < tmp[i].length(); j++) 
		    sum += Integer.parseInt(String.valueOf(tmp[i].charAt(j)));
		System.out.println(sum);
	    }
	} catch (IOException e) {
	}
    }
}
