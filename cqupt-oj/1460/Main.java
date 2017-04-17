import java.io.BufferedInputStream;
import java.math.BigInteger;
import java.util.Scanner;
  
public class Main {
  
    public static void main(String[] args) {
    // write your code here
        Scanner in=new Scanner(new BufferedInputStream(System.in));
        while(in.hasNext()) {
            BigInteger a=in.nextBigInteger();
            BigInteger b=in.nextBigInteger();
            System.out.println(a.multiply(b));
        }
    }
}
/**************************************************************
    Problem: 1460
    User: 2017_acmpre_262
    Language: Java
    Result: Accepted
    Time:614 ms
    Memory:24992 kb
****************************************************************/