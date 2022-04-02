class Solution{
public:
    void rev(vector<long long> &arr, int l ,int r){
        while(l<=r){
            swap(arr[l],arr[r]);
            l++,r--;
        }
    }
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int i=0;
        for(i=0; i<n && i+k<n; i+=k){
            rev(arr,i,i+k-1);
        }
        if(i<n){
            rev(arr,i,n-1);
        }
    }
};
