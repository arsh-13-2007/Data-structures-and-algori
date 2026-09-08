class Solution {
public:
    bool issafe(vector<string>&board , int row , int col , int n ){
        for( int i = 0 ; i < board.size() ; i++){
            if(board[i][col] == 'Q'){
                return false ; 
            }
        }
        for(int i = 0 ; i <board[0].size() ;i++ ){
            if(board[row][i] =='Q'){
                return false ; 
            }
        }
        for(  int i = row -1 , j = col -1 ; i>=0 && j>=0 ; j-- ,i--){
            if(board[i][j] =='Q'){
                return false ; 
            }
        }
        for(int i = row -1 , j = col+1 ; i >= 0 && j < board[0].size() ; i-- , j++){
            if(board[i][j] =='Q'){
                return false ; 
            }
        }
        return true ; 
    }
    void set_queens(vector<string>&board , int row , int n, vector<vector<string>>&ans ){
        if(row == n){
            ans.push_back({board});
            return ; 
        }

        for( int j = 0 ; j < board.size() ; j++){
            if(issafe(board , row ,j ,n )){
                board[row][j] = 'Q' ; 
                set_queens(board , row+1 ,n,ans ) ;
                board[row][j] ='.' ;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        
        vector<string>board(n , string(n, '.')) ;
        vector<vector<string>>ans ; 
        set_queens(board , 0 ,n,ans ) ;
        return ans ; 
    }
};