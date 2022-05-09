class Solution {
public:
    typedef long long int lll;
    int nthUglyNumber(int n) {
        priority_queue<lll,vector<lll>,greater<lll>>pq;
        pq.push(1);
        if(n==1) return 1;
        while(n!=1){
            lll temp = pq.top();
            pq.pop();
            if(temp%2==0){
                pq.push(temp*2);
            }
            else if(temp%3==0){
                pq.push(temp*2);
                pq.push(temp*3);
            }
            else{
                pq.push(temp*2);
                pq.push(temp*3);
                pq.push(temp*5);
            }
            n--;
        }
        return pq.top();
    }
};
