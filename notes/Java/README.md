# Hint for Java

### Input and Output

Java的输入输出分别是
输入:
* `Scanner in=new Scanner(System.in)` #常规输入
* `Scanner in=new Scanner(new BufferedInputStream(System.in))` #带缓冲输入

输出:

* `System.out.print()` 
* `System.out.println()`
* `System.out.printf()`

***
> `Scanner in=new Scanner(System.in)`

这个就是最普通的从命令行读入了

> `Scanner in=new Scanner(new BufferedInputStream(System.in))`

这个是利用BufferedInuStream进行包装，在从文件进行大规模读入的时候会快很多

***

> `System.out.print()` 

这个也是最常见的输出

> `System.out.println()`

这个是在上面那个的基础上自带换行的

> `System.out.printf()`

等效于C中的printf，用法也是一样的 //格式化输出时有奇效

***