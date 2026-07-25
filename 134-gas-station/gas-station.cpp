class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int leftover=0;
        int total=0;
        int start=0;
        for(int i=0;i<n;i++){
           leftover+=gas[i]-cost[i];
           total+=gas[i]-cost[i];
           if(total<0){
            total=0;
            start=i+1;
           }
        }
        if(leftover>=0) return start;
        else return -1;
    }
};