// 1. Method ---- USING SET

// TIME COMPLEXITY :- O(N logN) (N is number of rows in Matrix)
// SPACE COMPLEXITY :- O(N) (N is no of rows, total pair in a set)

class Solution {
public:
    
    vector<int> Weakest(vector<vector<int> >& mat, int k)
    {
        // no of rows;
        int n = mat.size();
        
        // set is to store pairs of count and index
        // count of 1 in ith row, {count,index};
        set<pair<int,int> > s;
        
        // set will automatically sort the pair {count, index} in ascending order.
        
        for(int i = 0; i<n; ++i)
        {
            // stl function for counting frequency of 1 in current row
            int cnt = count(mat[i].begin(),mat[i].end(),1);
            // inserting cnt and index pair to set
            s.insert({cnt,i});
        }
        
        vector<int> ans;
        // first k weakest row is our answer 
        for(auto i : s)
        {
            if(k == 0)
                break;
            ans.push_back(i.second);
            --k;
        }
        
        return ans;
    }
};
   
// 2. Method ---- USING PRIORITY QUEUE
// TIME COMPLEXITY
// Considering no. of rows=m,
// At each iteration, for binary search O(logn) and maximum heap size =k, so for inserting into max_heap O(logk)
// O(m(logn+logk))

// SPACE COMPLEXITY
// Since maximum heap size is k.
// O(2*k) [ For pair of heap ]
    class Solution {
public:
    
    // for calculating the soldier using binary search
    int binary(vector<int> m)
    {
        int l = 0;
        int h = m.size()-1;
        while(l <= h)
        {
            int mid = l + (h-l)/2;
            if(m[mid] == 0)
                h = mid - 1;
            else
                l = mid + 1;
        }
        return l;
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        // a binary heap which will maintain pair of count and index {count,index}
        priority_queue<pair<int,int> > pq;
        vector<int> ans;
        for(int i = 0; i<mat.size(); ++i)
        {
            // calularing cnt of soldier
            int cnt = binary(mat[i]);
			
			// instead  of using binary func for calculating cnt of 1
			// we can use this stl count function
			// int cnt = count(mat[i].begin(),mat[i].end(),1);
			
            pq.push(make_pair(cnt,i));
            
            // we need to maintain top k smallest elements
            if(pq.size() > k)
                pq.pop();
        }
        
        // making answer vector
        for(int i = 0; i<k; ++i)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
