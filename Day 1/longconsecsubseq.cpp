
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
 // arr[] : the input array
 // N : size of the array arr[]

 // Function to return length of longest subsequence of consecutive integers.
 int findLongestConseqSubseq(int arr[], int n)
 {
  // Your code here
  sort(arr, arr + n);
  int count = 1;
  int res = 1;
  for (int i = 1; i < n; i++)
  {
   if (arr[i] == arr[i - 1] + 1)
   {
    count++;
   }
   else if (arr[i] != arr[i - 1])
   {
    res = max(res, count);
    count = 1;
   }
  }
  return max(res, count);
 }
};

int main()
{
 int t, n, i, a[100001];
 cin >> t;
 while (t--)
 {
  cin >> n;
  for (i = 0; i < n; i++)
   cin >> a[i];
  Solution obj;
  cout << obj.findLongestConseqSubseq(a, n) << endl;
 }

 return 0;
}