#include <bits/stdc++.h>
using namespace std;
/*Function to find frequency of x
* x : element whose frequency is to be found
* v : input vector
*/
int findFrequency(vector<int> v, int x){
    // Your code here
    int count = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i] == x){
            count++;
        }
    }
    return count;
}

int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    // Declaring vector 
	    vector<int> v;
	        
	    // Taking vector element input
	    for(int i = 0;i<N;i++){
	        int k;
	        cin >> k;
	        v.push_back(k);
	    }
	    
	    // element whose frequency to be find
	    int x;
	    cin >> x;
	    cout << findFrequency(v, x) << endl;
	}
	
	return 0;
}
