class Solution
{
public:
 int countGoodRectangles(vector<vector<int>> &rectangles)
 {
  vector<int> v;
  int count = 0;
  for (int i = 0; i < rectangles.size(); i++)
  {
   v.push_back(*min_element(rectangles[i].begin(), rectangles[i].end()));
  }
  int max = *max_element(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++)
  {
   if (v[i] == max)
    count++;
  }
  return count;
 }
};