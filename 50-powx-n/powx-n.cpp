class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long binForm = n;

        if(n < 0) {
            x = 1/x;
            binForm = -binForm;
        }

        while(binForm > 0) {
            if(binForm % 2 == 1) {
                ans = ans * x;
            }
            x = x * x;
            binForm = binForm / 2;
        }

        return ans;
    }
};