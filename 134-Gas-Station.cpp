class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if(cost.size()==1){
            if(gas[0] == cost[0]) return 0;
        }
        int start=-1;
        int k=0;
        while(k<gas.size()){
            if(gas[k] - cost[k] > 0){
                start = k; 
        }

if(start >=0){
        int g = gas[start]-cost[start];

        for(int i=start+1; ;i++){
            if(i>=gas.size()) i=0;
            if(i==start) return start;
            g += gas[i]-cost[i];
            if(g<0) break;
        }
}
        k++;
        }

        return -1;
    }
};