# Hint for Java

## 基本输入输出

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

## 重定向输入输出

对应C中的freopen吧

* `System.setIn(new FileInputStream(new File("in.txt")))`
* `Syetem.setOut(new PrintStream(new File("out.txt")))`

需要注意的是，这两货都会抛出`FileNotFoundException`,需要用`try-catch`包围
***
## 玩坏字符串

### 字符串反转

`String`是不能直接反转的，所以要先转换成`StringBuffer`

> `StringBuffer sb=new StringBuffer(str)`

然后直接调`StringBuffer`的`reverse`函数就可以了

> `sb=sb.reverse()`

計画通りw

#顺便说一声这样的效率非常非常低，经量少用

