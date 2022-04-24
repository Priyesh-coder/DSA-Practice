class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        int totalDaysSince = 0; // 1st Jan, 0001 -> Monday
        
        // ====== Handling years passed ======
        
        // 365 days a year
        totalDaysSince += 365 * (year - 1);
        
        // add for trivial leap year
        totalDaysSince += (year - 1) / 4;
        
        // subtract for 100 multiple not leap
        totalDaysSince -= (year - 1) / 100;
        
        // add for 400 multiple leap
        totalDaysSince += (year - 1) / 400;
                 
        // ====== Handling months ======
        int daysInMonths[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        // Add for months passed in current year
        for (int mo = 1; mo < month; ++mo) {
            totalDaysSince += daysInMonths[mo - 1];
        }
        
        // If month  is after Feb and current year is leap year
        bool isLeapYear =  (year % 100 != 0 && year % 4 == 0) || year % 400 == 0;
        if (month > 2 && isLeapYear) {
            totalDaysSince += 1;
        }
        
        // ====== Handling days ======
        totalDaysSince += day - 1;
        
        // ====== Actual Day ======
        
        // Start from Monday as 1st Jan, 0001 (totalDaysSince == 0) was Monday
        string weekDays[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
        
        return weekDays[totalDaysSince % 7];
    }
};
