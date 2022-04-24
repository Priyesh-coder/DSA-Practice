class Bitset {
public:
    int ones, zero, flips;
    string s;
    Bitset(int size) {
        s.assign(size, '0');
        zero = size, ones = 0;
        flips = 0;
    }
    
    void fix(int idx) {
        if(flips%2){
            if(s[idx] == '1'){
                s[idx] = '0', ones++, zero--;
            }
        }else{
            if(s[idx] == '0')
                s[idx] = '1', ones++, zero--;
        }
    }
    
    void unfix(int idx) {
        if(flips%2){
            if(s[idx] == '0')
                s[idx] = '1', ones--, zero++;
        }else{
            if(s[idx] == '1')
                s[idx] = '0', ones--, zero++;
        }
    }
    
    void flip() {
        flips++;
        swap(ones,zero);
    }
    
    bool all() {
        return ones == s.size();
    }
    
    bool one() {
        return ones > 0;
    }
    
    int count() {
        return ones;
    }
    
    string toString() {
        if(flips%2){
            string x = s;
            for(int i=0; i<s.size(); i++){
                if(s[i] == '1') x[i] = '0';
                else x[i] = '1';
            }
            return x;
        }
        return s;
    }
};

/**
 * Your Bitset object will be instantiated and called as such:
 * Bitset* obj = new Bitset(size);
 * obj->fix(idx);
 * obj->unfix(idx);
 * obj->flip();
 * bool param_4 = obj->all();
 * bool param_5 = obj->one();
 * int param_6 = obj->count();
 * string param_7 = obj->toString();
 */
