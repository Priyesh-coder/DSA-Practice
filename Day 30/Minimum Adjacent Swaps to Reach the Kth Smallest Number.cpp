class Solution {
public:
    int getMinSwaps(string s, int k) {
        string ans = s;
        
        // Calculating Kth next permutation
        for(int i=0; i<k; i++) next_permutation(ans.begin(),ans.end());
        
        int count = 0;
        int i=0, n = s.length();
        // Calculating swaps to convert string s to string ans
        while(i<n){
            int j = i;
            while(s[j] != ans[i]) j++;
            while(i<j){
                swap(s[j],s[j-1]);
                j--;
                count++;
            }
            i++;
        }
        return count;
    }
};
