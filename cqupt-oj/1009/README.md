# CQUPT OJ 1009

好吧这道题不是用的数组处理

直接用的字符串，并且是试了一下string->#include <string>//不是cstring！

直接用cin，cout读写string似乎没什么问题
也可以直接用类似数组形式的随机访问
但是特么的不能直接反转。。。

所以还是用algorithm中提供的reverse配合string的迭代器进行反转吧
std::reverse(str.begin(),str.end());

以上
