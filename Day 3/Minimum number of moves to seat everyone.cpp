class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n = seats.size();
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int i=0, j=0;
        int count = 0;
        while(i<n && j<n){
            count += abs(seats[i] - students[j]);
            i++,j++;
        }
        return count;
    }
};
