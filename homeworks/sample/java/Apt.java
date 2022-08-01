import java.io.*;
import java.util.*;

public class Apt{

	public static void main(String[] args){

		Scanner s = new Scanner(System.in);

		int n = s.nextInt();

		int[] p = new int[n];

		for(int i=0; i<n; i++){
		    p[i] = s.nextInt(); 
		}

		int low = Math.min(p[0],p[1]);
		int sec = Math.max(p[0],p[1]);

		for(int i=2; i<n; i++){
			if(p[i] < low){
			  sec = low;
			  low = p[i];
			}
			else if(p[i] < sec){
			  sec = p[i];
			}
		}

		System.out.println(sec);

		
	}


}
