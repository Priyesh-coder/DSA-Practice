class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<char>ok(26,1);  //make an array of 26 and init with 1
        for(auto ch : brokenLetters)ok[ch-'a']=0;  //init with 0 to broken letters
        
        int ans=0;  
        int bw=1;
        
        for(auto ch : text){
            if(ch==' '){   //where we found a space,their is a new word
                if(bw==1) ans++;
                bw=1;   //reinitialise with 1 as we may change the value if we get broken letters
            }
            else if(ok[ch-'a']==0)
                bw=0;   //if we found broken letters in text 
        }
        if(bw==1)ans++;  // for last word...
        return ans;
    }
};
