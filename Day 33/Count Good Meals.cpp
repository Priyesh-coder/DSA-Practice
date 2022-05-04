class Solution {
public:
    int countPairs(vector<int>& del) {
        unordered_map<int,int>mp;
        int ans = 0, mod = 1000000007;
        sort(del.begin(),del.end());
        
        for(auto x:del){
            for(int i=0; i<=21; i++){
                int z = 1<<i;
                int y = z-x;
                if(y>x) break;
                else ans += mp[y];
                ans %= mod;
            }
            mp[x]++;
        }
        return ans;
        
    }
};


// Second....
class Solution {
public:
    #define ll long long int
    #define mod 1000000007
    int countPairs(vector<int>& del) {
        unordered_map<ll,ll> mp ;
        ll ans = 0 ;
        for(int i= 0 ;i<del.size() ; i++){
            for(int j =0 ; j<=21 ; j++){
                if(mp[(1<<j) - del[i]] != 0 ){
                    ans += mp[(1<<j) - del[i]] ;
                }
            }
            mp[del[i]]++ ;
        }
        return ans%mod ;
    }
};
