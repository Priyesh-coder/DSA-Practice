// Method ---- 1
class Solution
{
public:
 bool isIsomorphic(string s, string t)
 {
  int len = s.size();
  char seen[128] = {};

  for (int i = 0; i < len; i++)
  {
   char c = s[i];
   if (!seen[c])
   {
    for (char s : seen)
     if (s == t[i])
      return false;
    seen[c] = t[i];
   }
   else if (seen[c] != t[i])
    return false;
  }
  return true;
 }
};

// Method ---- 2

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char str_s[128] = {};
        char str_t[128] = {};
        
        for(int i=0; i<s.size(); i++){
            if(str_s[s[i]] != str_t[t[i]]) return false;
            str_s[s[i]] = i+1;
            str_t[t[i]] = i+1;
        }
        return true;
    }
};
