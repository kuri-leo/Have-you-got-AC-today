# CQUPT OJ 1004

这个破题有毒
一直存在四舍五入的精度问题

## 知识点
> 利用iOS::sync_with_stdio(false)加速

把与stdio同步关了可以加速

> cout输出保留小数

要导入这个头文件->#include <iomanip>
然后是在输出流固定小数点和精度-> cout<<setiosflags(ios::fixed)<<setprecision(2)<<...

当然这样子会自动四舍五入

利用floor函数来强制消除小数->Vb=floor(Vb*1000)/1000//强制保留3位小树
floor本身是向下取整


