class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int n = cost.size(),price = 0;
        int i=n-1;
        while(i>1){
            price += cost[i--];
            price += cost[i--];
            i--;
        }
        while(i>=0){
            price += cost[i--];
        }
        return price;
    }
};
