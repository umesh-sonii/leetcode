class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int time = 0;

        for(int i=0; i<tickets.size(); i++) {
            q.push(i);
        }

        while(!q.empty()) {
            int prsn = q.front();
            q.pop();

            tickets[prsn]--;
            time++;

            if(prsn == k && tickets[prsn] == 0) return time;

            if(tickets[prsn] > 0) q.push(prsn);
        }
        return time;
    }
};