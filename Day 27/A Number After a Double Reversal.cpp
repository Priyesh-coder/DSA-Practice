class Solution {
public:
    bool isSameAfterReversals(int num) {
        string number = to_string(num);
        if(number[number.size()-1] == '0' && number.size() != 1)
            return false;
        return true;
    }
};
