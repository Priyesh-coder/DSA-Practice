int Solution::solve(vector<int> &A, int B, int C) {
    int cnt1 = 0, cnt2 = 0;
    if(B%2 == 0){
        for(int i=0; i<A.size(); i++){
            if(A[i]%2 != 0){
                cnt1++;
            }
        }
        return (C*cnt1);
    }else{
        for(int i=0; i<A.size(); i++){
            if(A[i]%2 == 0){
                cnt2++;
            }
        }
         return (C*cnt2);
    }
}
