int Solution::solve(int A) {
    int r,temp,sum=0;
    temp = A;
    int n = floor(log10(A)+1);
    while(A>0){
        int r = A%10;
        sum = sum + pow(r,n);
        A = A/10;
    }
    if(temp == sum){
        return 1;
    }else{
        return 0;
    }
}
