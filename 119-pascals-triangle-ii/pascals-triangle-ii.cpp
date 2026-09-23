class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex == 0){
            return {1}; 
        }
        vector<vector<int>>pascal(rowIndex+1) ; 
        pascal[0] = {1} ; 
        for(int i = 1 ; i < rowIndex+1 ; i++){
            pascal[i].resize(i + 1);
            for(int j = 0 ; j < i+1 ; j++){
                if(j == 0 || j == i  ){
                    pascal[i][j] = 1 ;  
                }
                else {
                    pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j] ;  
                }
            }
        }
    return pascal[rowIndex] ; 
    }
};