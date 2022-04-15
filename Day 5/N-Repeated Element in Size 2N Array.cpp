class Solution
{
public:
 int repeatedNTimes(vector<int> &nums)
 {
  int n = nums.size() / 2;
  unordered_map<int, int> mp;
  for (auto num : nums)
   mp[num]++;

  int ans = NULL;
  for (auto it : mp)
   if (it.second == n)
   {
    ans = it.first;
    break;
   }
  return ans;
 }
};