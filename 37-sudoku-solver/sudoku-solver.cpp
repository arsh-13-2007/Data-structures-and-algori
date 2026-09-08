class Solution {
public:
 bool grid_check(vector<vector<char>>& board, int stRow, int edRow,
                int stCol, int edCol, char digit) {

    for(int i = stRow; i <= edRow; i++) {
        for(int j = stCol; j <= edCol; j++) {

            if(board[i][j] == digit) {
                return false;
            }
        }
    }

    return true;
}

bool issafe(vector<vector<char>>& board, int row, char digit,
            int col, int n) {

    // Vertical check
    for(int i = 0; i < n; i++) {
        if(board[i][col] == digit) {
            return false;
        }
    }

    // Horizontal check
    for(int i = 0; i < n; i++) {
        if(board[row][i] == digit) {
            return false;
        }
    }
    int stRow = (row / 3) * 3;
    int stCol = (col / 3) * 3;

    int edRow = stRow + 2;
    int edCol = stCol + 2;
    if(grid_check(board, stRow, edRow, stCol, edCol, digit) == false) {
        return false;
    }

    return true;
}
    bool  fill_sudoku(vector<vector<char>>& board , int row , int col ){
    if(row == 9) {
        return true;}
    if(board[row][col] != '.') {
        if(col != 8) {
            return fill_sudoku(board, row, col + 1);
        }
        else {
            return fill_sudoku(board,row +1,0);}}
    for(char digit = '1' ; digit <= '9' ;digit++){
        if(issafe(board,row,digit,col,9)) {
            board[row][col] =digit ; 
            if(col != 8){
                if(fill_sudoku(board, row, col + 1)){return true ;}
            }
            else {
                if(fill_sudoku(board,row +1,0)) { return true ;}
            }
            board[row][col] ='.' ;
        }
    }
    return false ; 
}

    void solveSudoku(vector<vector<char>>& board) {
        fill_sudoku(board ,0 ,0 );
    }
};