class Solution{
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        long long diff = abs(K2-K1);
        priority_queue<long long>pq;
        for(int i=0; i<N; i++){
            pq.push(A[i]);
            if(pq.size() > K2) pq.pop();
        }
        long long r = pq.top();
        while(diff--) pq.pop();
        long long l = pq.top();
        long long sum = 0;
        
        for(int i=0; i<N; i++){
            if(A[i] > l && A[i] < r) sum += A[i];
        }
        return sum;
    }
};
