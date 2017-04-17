import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.Scanner;
 
public class Main {
 
    public static void calc(String str, int index, StringBuilder parentData) {
        if (str.length() == 0) {
            return;
        }
        if (str.length() == 1) {
            System.out.println(str);
            return;
        }
        StringBuilder buffer = new StringBuilder();
        buffer.append(parentData.toString());
        buffer.append(str.charAt(index));
        String subStr = gerChar(str, index);
        if (subStr.length() == 1) {
            buffer.append(subStr);
            System.out.println(buffer.toString());
            return;
        }
        for (int i = 0; i < subStr.length(); i++) {
            calc(subStr, i, buffer);
        }
    }
    private static String gerChar(String src, int pos) {
        StringBuilder srcBuf = new StringBuilder();
        srcBuf.append(src);
        srcBuf.deleteCharAt(pos);
        return srcBuf.toString();
    }
 
    public static void main(String args[]) {
//        try {
//            System.setIn(new FileInputStream(new File("in.txt")));
//        } catch (FileNotFoundException e) {
//            e.printStackTrace();
//        }
        Scanner in=new Scanner(new BufferedInputStream(System.in));
        while (in.hasNext()) {
            StringBuilder input=new StringBuilder();
            int n=in.nextInt();
            for (int i=1;i<=n;i++){
                input.append(i);
            }
            StringBuilder buffer = new StringBuilder();
            for (int i = 0; i < input.length(); i++) {
                calc(input.toString(), i, buffer);
            }
        }
    }
}
/**************************************************************
    Problem: 1458
    User: 2017_acmpre_262
    Language: Java
    Result: Accepted
    Time:1216 ms
    Memory:25656 kb
****************************************************************/