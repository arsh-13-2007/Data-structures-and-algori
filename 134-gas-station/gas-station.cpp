class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int gas_sum = 0 ; 
       int cost_sum = 0 ; 
       for(int i = 0 ; i < gas.size() ; i++){
         gas_sum += gas[i] ; 
         cost_sum += cost[i] ;
       }
       if(cost_sum > gas_sum){
        return -1 ; 
       }
       int total_sum = 0 ; 
       int st_idx = 0 ; 
       for(int i = 0 ; i < gas.size() ; i++){
        total_sum = total_sum +( gas[i] - cost[i]) ; 
            if(total_sum < 0 ){
                st_idx = i+1 ; 
                total_sum = 0 ; 
            }
       
       }
       return st_idx ; 
    }
};