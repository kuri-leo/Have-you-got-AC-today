import java.io.BufferedInputStream;
import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner in=new Scanner(new BufferedInputStream(System.in));
		while(in.hasNext()){
			int a=in.nextInt();
			int b=in.nextInt();
			if((a!=0||b!=0)&&Math.abs(a-b)<=1){
				System.out.println("YES");
			}else{
				System.out.println("NO");
			}
		}
	}
}