class Solution {
public:
    int reverse(int x) {
        long int num = 0;
        if(x >= 2147483647 || x <= -2147483648)
            return 0;
        if(x>0){
            while(x>0){
                num = num*10;
                if(num >= 2147483647 || num <= -2147483648)
                    return 0;
                num = num + (x%10);
                x = x/10;
            } 
        }
        else{
            x = -1*x;
            while(x>0){
                num = num*10;
                if(num >= 2147483647 || num <= -2147483648)
                    return 0;
                num = num + (x%10);
                x = x/10;
            } 
            num = -1*num;
        }
        return int(num);
    }
};

// Method --- 2
class Solution {
public:
    int reverse(int x) {
        int32_t rev_num = 0;
        
        while (x)
        {
            if((rev_num>INT_MAX/10 || rev_num<INT_MIN/10))
                return 0;
        
            rev_num =( rev_num*10 + x%10);
            x = x/10;
        }
        return rev_num; 
    }
};
