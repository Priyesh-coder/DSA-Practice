#include <iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSER(int arr[], int n){
    vector<int>ans;
    stack<int>st;
    for(int i=n-1; i>=0; i--){
        while(!st.empty() && st.top() >= arr[i]){
            st.pop();
        }
        if(st.empty()) ans.push_back(-1);
        else ans.push_back(st.top());
        st.push(arr[i]);
    }
    for (int i = n-1; i >= 0; i--)
        cout << ans[i]<<" ";
    return ans;
}

int main() {
	//code
	int arr[] = {1,3,2,4};
	int n = 4;
	nextSER(arr,n);
	return 0;
}
