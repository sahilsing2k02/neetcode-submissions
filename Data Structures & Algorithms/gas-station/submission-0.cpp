class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int totgas =0;
        int totcost =0;

        for(int i =0;i<n;i++){
            totgas += gas[i];
            totcost += cost[i];
        }
        if(totgas < totcost) return -1;

        int start = 0; // idx
        int curgas = 0;

        // find curgas if cg > 0 go to next idx
        // cg = cg + g[i] - c[i] if > 0
        // keep tracking a circle 

        for(int i =0;i<n;i++){
            curgas += gas[i]-cost[i];

            if(curgas < 0){
                start = i+1;
                curgas = 0;
            }
        }
        return start;
    }
};
