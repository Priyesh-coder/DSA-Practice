
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            unordered_map<int,int> mp;
            mp[A[0]]++;
            for(int i=1; i<n1; i++){
                if(A[i-1] == A[i]){
                    continue;
                }else{
                    mp[A[i]]++;
                }
            }
            mp[B[0]]++;
            for(int i=1; i<n2; i++){
                if(B[i-1] == B[i]){
                    continue;
                }else{
                    mp[B[i]]++;
                }
            }
            mp[C[0]]++;
            for(int i=1; i<n3; i++){
                if(C[i-1] == C[i]){
                    continue;
                }else{
                    mp[C[i]]++;
                }
            }
            vector<int>ans;
            for(auto it:mp){
                if(it.second==3){
                    ans.push_back(it.first);
                }
            }
            sort(ans.begin(), ans.end());
            return ans;
        }

};
