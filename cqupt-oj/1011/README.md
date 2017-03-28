# CQUPT OJ 1011

万恶的数论

最大公约数->GCD
直接辗转相除
long long GCD(long long a,long long b){
    return b==0?a:GCD(b,a%b);
}

最小公倍数
最大公约数×最小公倍数=a x b
