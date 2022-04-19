class Solution {
public:
    void insert_zero(vector<int>& arr, int i, int j){
        if(j<arr.size())
            arr[j] = arr[i];
    }
    void duplicateZeros(vector<int>& arr) {
       int zeroes = 0;
       for(auto it:arr)
           if(it==0)
               zeroes++;
        
        int i=arr.size()-1, j=arr.size()+zeroes-1;
        
        while(i!=j){
            insert_zero(arr,i,j--);
            if(arr[i] == 0)
                insert_zero(arr,i,j--);
            i--;
        }
    }
};
