class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        return true;
    }
};

// Alternate Solution...
class Solution {
public:
    
    bool possible(vector<int>&piles,int start,int end,int sm,int total){
        
        if(start>=end){
            if(sm<total-sm) return false;
            return true;
        }
        
        return possible(piles,start+1,end,sm+piles[start],total)||
            possible(piles,start,end-1,sm+piles[end],total);
        
    }
    
    bool stoneGame(vector<int>& piles) {
                
        int sm=0,total=0;
        
        for(auto x:piles) total+=x;
        
        return possible(piles,0,piles.size()-1,0,total);
    }
};
