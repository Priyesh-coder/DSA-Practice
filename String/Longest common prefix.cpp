class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        // your code here
        string s;
        int flag = 1;
        for(int i=0; i<arr[0].size();i++){
            for(int j=0; j<n; j++){
                if(arr[0][i]==arr[j][i]){
                    continue;
                }
                else{
                    flag = 0;
                }
            }
            if(flag){
                s.push_back(arr[0][i]);
            }else{
                break;
            }
        }
        if(s.size()){
            return s;
        }else{
            return "-1";
        }
    }
};
