class Solution {
public:
    int myAtoi(string str) {
        int result=0;  
        int i=0, n=str.size();   
        int sign = 1;   

        while(str[i] == ' ') i++;
        if(i < n && str[i] == '+' || str[i] == '-'){
            sign = (str[i++] == '+') ? 1 : -1;            
        }
        
        int num = 0;
        while(i < n && str[i] >= '0' && str[i] <= '9'){
            if(num > INT_MAX/10 || (num == INT_MAX/10 && str[i] - '0' > 7)){
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            num = num * 10 + (str[i++] - '0');
        }
        return sign * num;
    }
};