# 假装这是一个笔记

> from cqupt-oj 1004

### 利用iOS::sync_with_stdio(false)加速

把与stdio同步关了可以加速
想起来了，这句话要放在main里面

### cout输出保留小数

要导入这个头文件->#include <iomanip>
然后是在输出流固定小数点和精度-> cout<<setiosflags(ios::fixed)<<setprecision(2)<<...

当然这样子会自动四舍五入

利用floor函数来强制消除小数->Vb=floor(Vb*1000)/1000//强制保留3位小树
floor本身是向下取整->#include<cmath>

> from cqupt-oj 1008

### 三目运算符的效率

效率不如if-else,（可能差小数点后5位。。。http://blog.csdn.net/zhangyandong16/article/details/23680351），但是可以简化代码
不错的语法糖，但是使用的时候要有节制

> from cqupt-oj 1009

### string的使用

试了一下string->#include <string>//不是cstring！

直接用cin，cout读写string似乎没什么问题
也可以直接用类似数组形式的随机访问
但是特么的不能直接反转。。。

所以还是用algorithm中提供的reverse配合string的迭代器进行反转吧
std::reverse(str.begin(),str.end());

> from cqupt-oj 1011

### 最大公约数和最小公倍数

最大公约数->GCD
直接辗转相除
long long GCD(long long a,long long b){
    return b==0?a:GCD(b,a%b);
}

最小公倍数
最大公约数×最小公倍数=a x b
