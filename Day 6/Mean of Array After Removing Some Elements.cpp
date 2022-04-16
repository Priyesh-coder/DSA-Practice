class Solution
{
public:
 double trimMean(vector<int> &arr)
 {
  sort(arr.begin(), arr.end());
  int n = arr.size();
  int small = n * 5 / 100;
  int large = n * 5 / 100;

  double sum = 0, count = 0;
  for (int i = small; i < n - large; i++)
  {
   sum += (double)arr[i];
   count++;
  }
  return sum / count;
 }
};