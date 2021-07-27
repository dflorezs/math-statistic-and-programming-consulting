int digitoi(int n, int i){
    if(n == 0) return -1;
    if(i == 1) return n % 10;
    return digitoi(n / 10, i - 1);
}