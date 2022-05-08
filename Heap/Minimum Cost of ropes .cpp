class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        // if(n==1) return 0;
        priority_queue<long long, vector<long long>, greater<long long>>pq(arr,arr+n);
        long long res = 0,first,second;
        while(pq.size()!=1){
            first = pq.top();
            pq.pop();
            second = pq.top();
            pq.pop();
            res = res + first + second;
            pq.push(first+second);
        }
        return res;
    }
};
