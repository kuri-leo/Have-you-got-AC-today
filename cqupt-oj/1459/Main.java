import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
    // write your code here
//        try {
//            System.setIn(new FileInputStream(new File("in.txt")));
//        } catch (FileNotFoundException e) {
//            e.printStackTrace();
//        }
        Scanner in=new Scanner(new BufferedInputStream(System.in));
        while (in.hasNext()){
            int num=in.nextInt();
            for(int round=0;round<num;round++){
                boolean flag=false;
                int n=in.nextInt();
                long[] arr=new long[n];
                for (int i=0;i<n;i++){
                    arr[i]=in.nextLong();
                }
                Arrays.sort(arr);
                long sum;
                for(int i=0;i<n;i++){
                    int j=i+1;
                    int k=n-1;
                    while (!flag&&j<k){
                        sum=arr[i]+arr[j]+arr[k];
                        if (sum < 0) {
                            j++;
                        }else if(sum>0){
                            k--;
                        }else{
                            flag=true;
                            break;
                        }
                    }
                }
 
 
//                label:
//                for(int i=0;i<n-2;i++){
//                    if (arr[i]+arr[i+1]+arr[n-1]<0){
//                        continue;
//                    }
//                    for(int j=0;j<n-1;j++){
//                        if (arr[i]+arr[j]+arr[n-1]<0){
//                            continue;
//                        }
//                        for (int k=0;k<n;k++){
//                            sum=arr[i]+arr[j]+arr[k];
//                            if (sum==0){
//                                flag=true;
//                                break label;
//                            }
//                        }
//                    }
//                }
//                for(int i=0,j=i+1,k=n-1;i<n-2;i++){
//                    while (!flag&&j!=k){
//                        sum=arr[i]+arr[j]+arr[k];
//                        if(sum==0){
//                            flag=true;
//                            break;
//                        }
//                        if(sum>0){
//                            k--;
//                            continue;
//                        }else{
//                            j++;
//                            continue;
//                        }
//                    }
//                }
                System.out.println(flag?"Yes":"No");
            }
        }
    }
}
 
/**************************************************************
    Problem: 1459
    User: 2017_acmpre_262
    Language: Java
    Result: Accepted
    Time:929 ms
    Memory:30636 kb
****************************************************************/
