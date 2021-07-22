typedef unsigned long long int ulli;
int cnt(ulli n,  ulli b){
    if(b >= 64) return 0;
    return (((1ULL << b) & n) ? 1 : 0) + cnt(n, b + 1);
}