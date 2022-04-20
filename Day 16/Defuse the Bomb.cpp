class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int>res(code.size());
        if(k>0){
            for(int i=0; i<n; i++)
                for(int j=1; j<=k; j++) res[i] += code[(i+j) % n];
            return res;
        } else if(k<0){
            for(int i=0; i<n; i++)
                for(int j=1; j<= -1*k; j++) res[i] += code[(i-j+n)%n];
            return res;
        }else{
            return res;
        }
    }
};
