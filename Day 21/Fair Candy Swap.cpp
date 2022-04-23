class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        vector<int>ans;
        int a = 0, b = 0, delta;
        set<int>s;
        
        for(int i=0; i<B.size(); i++){
            b += B[i];
            s.insert(B[i]);
        }
        for(int j=0; j<A.size(); j++){
            a += A[j];
        }
        
        delta = (b-a)/2;
        for(int k=0; k<A.size(); k++){
            set<int>:: iterator it;
            it = s.find(A[k]+delta);
            if(it != s.end()){
                ans.push_back(A[k]);
                ans.push_back(A[k]+delta);
                return ans;
            }
        }
        return ans;
        
    }
};
