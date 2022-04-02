#include <iostream>
using namespace std;

int evenodd(int arr[], int n){
    int res = 1;
    int count = 1;
    for(int i=1; i<n ;i++){
        if((arr[i] %2 == 0 && arr[i-1]%2 !=0 ) || (arr[i] %2 != 0 && arr[i-1]%2 ==0 )){
            count++;
            res = max(res,count);
        }else{
            count = 1;
        }
    }
    return count;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
	    cin>>arr[i];
	}
	cout<<evenodd(arr,n);
	return 0;
}
