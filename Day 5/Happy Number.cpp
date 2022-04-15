class Solution {
public:
    bool isHappy(int n) {
        int num = n, digit, sum = 0;
        unordered_map<int, int> map;
        
        while(num != 1){
            while(num){
                digit = num % 10;
                num /= 10;
                
                sum += digit * digit;
            }
            if(map[sum])
                return false;
            else
                map[sum]++;
            
            num = sum;
            sum = 0;
        }
        return true;
    }
};
