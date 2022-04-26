class Solution {
public:
    void rotate(vector<vector<int>>& matrix){
        int rows = matrix.size();
         // Step 1 : transpose matrix
        for(int i=0 ;i<rows; i++){
            for(int j=0; j<i; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // Step 2 : reverse all rows
        for(int i=0; i<rows; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
         
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0; i<4; i++){
            if(mat == target) return true;
            rotate(mat);
        }
        return false;
    }
};
