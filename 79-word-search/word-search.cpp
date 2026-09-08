class Solution {
public:
    bool find(vector<vector<char>>& board, int row, int col,int  index , string word){
        if(board[row][col] != word[index]) {
            return false;
    }
       if(index == word.length()-1) {
            return true;
        }
    
        board[row][col] = '#';
        if( row-1 >=0 ){
        if(find(board,row -1, col,index+1,word)) return true; }// up 
        if(row+1 < board.size()){
        if(find(board,row+1, col,index+1,word))return true ;}//down
        if(col-1 >= 0 ){
            if(find(board,row, col-1,index+1,word))return true ;}// left
        if(col+1 < board[0].size()){
            if(find(board,row, col+1,index+1,word))return true;}// right
         board[row][col] = word[index];// backtrack 
        return false ; 
    }
bool exist(vector<vector<char>>& board, string word) {
    for(int i = 0 ; i < board.size() ; i++){
        for(int j = 0 ; j < board[0].size() ; j++){
            if(find(board , i , j , 0 , word)){
                return true ; 
            }
        }
    }
return false ; 
}
};