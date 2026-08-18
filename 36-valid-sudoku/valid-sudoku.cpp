class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // row wise
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                for(int k=j+1;k<9;k++){
                    if(board[i][j]==board[i][k] && board[i][j]!='.'){
                        return false;
                    }
                    // col wise
                    else if(board[j][i]==board[k][i] && board[j][i]!='.'){
                        return false;
                    }
                }
            }
        } 
        // box wise

        for(int row=0;row<9;row+=3){
            for(int col=0;col<9;col+=3){
                for(int i=row;i<row+3;i++){
                    for(int j=col;j<col+3;j++){
                        for(int x=row;x<row+3;x++){
                            for(int y=col;y<col+3;y++){
                                if(board[i][j]==board[x][y]&& board[x][y]!='.'&&(i!=x||j!=y)){
                                    return false;
                                }
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};