class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        vector<string>ans(score.size());
        priority_queue<pair<int,int>>pq;
        for(int i=0; i<score.size(); i++){
            pq.push(make_pair(score[i],i));
        }
        for(int i=0; i<score.size();i++){
           pair<int,int> curr = pq.top();
            pq.pop();
            if(i==0)
                ans[curr.second] = "Gold Medal";
            else if(i==1)
                ans[curr.second] = "Silver Medal";
            else if(i==2)
                ans[curr.second] = "Bronze Medal";
            else
                ans[curr.second] = to_string(i+1);

        }
        return ans;
        
    }
};
