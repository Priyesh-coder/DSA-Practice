class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        double sum = 0;
        sort(salary.begin(),salary.end());
        for(int i=1; i<n-1; i++){
            sum += salary[i];
        }
        return sum/(n-2);
    }
};

// Alternate....
class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        double sum = 0;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        
        for(auto it:salary){
            sum += it;
            if(it>maxi)
                maxi = it;
            if(it<mini)
                mini = it;
        }
        return (sum-mini-maxi)/float(n-2);
    }
};
