class Solution {
public:
   void nextSmallerElemIdx(vector<int> &h, int n, vector<int> &ans)
{
	stack<pair<int, int>> st;
	for (int i = 0; i < n; i++)
	{
		if (st.empty())
			st.push({h[i], i});
		else
		{
			while(!st.empty() && st.top().first > h[i])
			{
				ans[st.top().second] = i;
				st.pop();
			}
			st.push({h[i], i});
		}
	}
}
void prevSmallerElemIdx(vector<int> &h, int n, vector<int> &ans)
{
	stack<pair<int, int>> st;
	for (int i = n - 1; i >= 0; i--)
	{
		if (st.empty())
			st.push({h[i], i});
		else
		{
			while(!st.empty() && st.top().first > h[i])
			{
				ans[st.top().second] = i;
				st.pop();
			}
			st.push({h[i], i});
		}
	}
}
int largestRectangleArea(vector<int>& h) {
	 int n = h.size();
	 vector<int> ans1(n, n);
	 vector<int> ans2(n, -1);

	 nextSmallerElemIdx(h, n, ans1);
	 prevSmallerElemIdx(h, n, ans2);
	
	 int maxi = 0;
	 for (int i = 0; i < n; i++)
	 {
		 maxi = max(maxi, (ans1[i] - ans2[i] - 1) * h[i]);
	 }
	 return maxi;
 }
 int maximalRectangle(vector<vector<char>>& matrix) {
    int R = matrix.size();
     if (R == 0)
         return -1;
     int C = matrix[0].size();
     
     int maxi = -1;
     vector<int> temp(C);
     for (int i = 0; i < C; i++)
     {
         if (matrix[0][i] == '1')
             temp[i] = 1;
         else
             temp[i] = 0;
     }
     
     for (int i = 0; i < R; i++)
     {
         maxi = max(maxi, largestRectangleArea(temp));
         if (i != R - 1)
         {
             for (int j = 0; j < C; j++)
             {
                 if (matrix[i + 1][j] == '0')
                     temp[j] = 0;
                 else
                    temp[j] += (matrix[i + 1][j] - '0');
             }
         }
     }
     return maxi;
 }
};
