class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int t = 0;

        while(tickets[k] != 0) {
            for(int i=0; i<tickets.size(); ++i) {
                tickets[i] -= 1;

                if(tickets[i] >= 0) t++;

                if(tickets[k] == 0) break;

            }
        }
        return t;
    }
};