import java.io.BufferedInputStream;
import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner in=new Scanner(new BufferedInputStream(System.in));
		while(in.hasNext()){
			long a=in.nextLong();
			long b=in.nextLong();
			long c=in.nextLong();
			long gcd=GCD(a,b);
			long min=a*b/gcd;
			long result=c/min;
			System.out.println(result);
		}
	}
	
	public static long GCD(long a,long b){
		return b==0?a:GCD(b,a%b);
	}
}