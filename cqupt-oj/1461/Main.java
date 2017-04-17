import java.io.BufferedInputStream;
import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
        // write your code here
        Scanner in = new Scanner(new BufferedInputStream(System.in));
        while (in.hasNext()) {
            MyList list = new MyList();
            int n = in.nextInt();
            for (int i = 0; i < n; i++) {
                String cmd = in.next();
                switch (cmd) {
                    case "push_front":
                        list.push_front(in.nextInt());
                        break;
                    case "push_back":
                        list.push_back(in.nextInt());
                        break;
                    case "pop_front":
                        try {
                            System.out.println(list.pop_front());
                        } catch (Exception e) {
                            System.out.println("Error");
                        }
                        break;
                    case "pop_back":
                        try {
                            System.out.println(list.pop_back());
                        } catch (Exception e) {
                            System.out.println("Error");
                        }
                        break;
                    case "reverse":
                        list.reverse();
                        break;
                    case "max":
                        System.out.println(list.max());
                        break;
                    default:
                        break;
                }
            }
 
        }
    }
}
 
class MyList {
    private LinkedList<Integer> list = new LinkedList<>();
    private boolean reverrseFlag = false;
    private int max;
    private int secondMax;
    private int thirdMax;
 
    public MyList() {
        this.list = new LinkedList<>();
        max = Integer.MIN_VALUE;
        secondMax = Integer.MIN_VALUE;
        thirdMax = Integer.MIN_VALUE;
    }
 
    public void push_front(int num) {
        if (num > max) {
            thirdMax=secondMax;
            secondMax=max;
            max = num;
        }
        if (!reverrseFlag) {
            list.addFirst(num);
        } else {
            list.addLast(num);
        }
    }
 
    public void push_back(int num) {
        if (num > max) {
            thirdMax=secondMax;
            secondMax=max;
            max = num;
        }
        if (reverrseFlag) {
            list.addFirst(num);
        } else {
            list.addLast(num);
        }
    }
 
    public int pop_front() {
        int temp;
        if (!reverrseFlag) {
            temp=list.remove();
        } else {
            temp=list.removeLast();
        }
        if (temp==max){
            max=secondMax;
            secondMax=thirdMax;
            thirdMax=Integer.MIN_VALUE;
        }
        return temp;
    }
 
    public int pop_back() {
        int temp;
        if (reverrseFlag) {
            temp=list.remove();
        } else {
            temp=list.removeLast();
        }
        if (temp==max){
            max=secondMax;
            secondMax=thirdMax;
            thirdMax=Integer.MIN_VALUE;
        }
        return temp;
    }
 
    public void reverse() {
        reverrseFlag = !reverrseFlag;
    }
 
    public int max() {
        return this.max;
    }
}
/**************************************************************
    Problem: 1461
    User: 2017_acmpre_262
    Language: Java
    Result: Accepted
    Time:3079 ms
    Memory:64104 kb
****************************************************************/