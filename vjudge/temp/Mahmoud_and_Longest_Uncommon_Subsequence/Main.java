import java.io.BufferedInputStream;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(new BufferedInputStream(System.in));
		while(in.hasNext()){
			String str1=in.next();
			String str2=in.next();
			if(str1.equals(str2)){
				System.out.println("-1");
			}else{
				System.out.println(str1.length()>str2.length()?str1.length():str2.length());
			}
		}
	}

}
