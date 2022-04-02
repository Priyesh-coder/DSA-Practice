class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        unordered_map<int,int>a,b;
        for(auto x:A){
            a[x]++;
        }
        for(auto x:B){
            b[x]++;
        }
        if(a==b) return true;
        else return false;
    }
};
