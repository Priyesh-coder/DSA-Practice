class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here  
        sort(A,A+N);
        vector<pair<int,int>> v;
        unordered_map<int,int>mp;
        for(int i=0; i<M; i++){
            mp[B[i]]++;
        }
        for(int i=0; i<N;i++){
            if(mp.find(X-A[i]) != mp.end()){
                v.push_back(make_pair(A[i],X-A[i]));
            }else{
                continue;
            }
        }
        return v;
    }
};
