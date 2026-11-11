class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas = 0, totalcost = 0;
        int n = gas.size();

        int start = 0, curgas = 0;
        for (int i = 0; i < n; i++) {
            totalgas += gas[i];
            totalcost += cost[i];
            curgas += (gas[i] - cost[i]);

            if (curgas < 0) {
                start = i + 1;
                curgas = 0; // reset
            }
        }
        return (totalgas < totalcost) ? -1 : start;
    }
};