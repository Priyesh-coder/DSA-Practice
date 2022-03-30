class Solution{
    public:
    vector<int> sortArr(vector<int>arr, int n){
    //complete the function here
    vector<int>v;
    for(int i=0; i<n; i++){
        v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
    return v;
    }
};
