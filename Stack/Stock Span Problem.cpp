// GFG Problem....
class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int>v;
       stack<pair<int,int>>st;
        for(int i=0; i<n; i++){
            while(!st.empty() && st.top().first <= price[i]){
                st.pop();
            }
            if(st.empty())v.push_back(-1);
            else v.push_back(st.top().second);
            st.push({price[i],i});
        }
    
    
        for (int i = 0; i < n; i++){
            v[i] = i-v[i];
        }
        return v;
    }
};


// Same problem in online ide...
#include <bits/stdc++.h> 
using namespace std;

vector<int> stockSpan(int arr[], int n){
    vector<int>v;
    stack<pair<int,int>>st;
    for(int i=0; i<n; i++){
        while(!st.empty() && st.top().first <= arr[i]){
            st.pop();
        }
        if(st.empty())v.push_back(-1);
        else v.push_back(st.top().second);
        st.push({arr[i],i});
    }
    
    
    for (int i = 0; i < n; i++){
         v[i] = i-v[i];
        cout<<v[i]<<" ";
    }
    return v;
}

int main() {
	//code
	int arr[] = {100,80,60,70,60,75,85};
	int n = 7;
	stockSpan(arr,n);
	return 0;
}
