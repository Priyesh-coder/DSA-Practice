class Solution
{
public:
 bool isSubsequence(string s, string t)
 {
  if (s.length() <= 0)
   return true;
  int i = 0, j = 0;
  while (i < s.length() && j < t.length())
  {
   if (s[i] == t[j])
   {
    i++;
    j++;
   }
   else
   {
    j++;
   }
  }
  if (i > s.length() - 1)
   return true;
  else
   return false;
 }
};

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pos=0;
        for(int i=0; s[i] != '\0'; ++i){
            while(t[pos] && t[pos] != s[i])
                pos++;
            if(t[pos] == '\0') 
                return false;
            pos++;
        }
        return true;
    }
};