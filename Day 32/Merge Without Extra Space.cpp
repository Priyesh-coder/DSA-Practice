class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int j = 0;
	    int i = n-1;
	    while(arr1[i] > arr2[j] && i >= 0 && j<m){
	        swap(arr1[i--],arr2[j++]);
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	}
};

