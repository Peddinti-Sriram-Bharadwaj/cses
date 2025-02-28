#include <iostream>
#include <vector>

std::vector<std::vector<char>> board(8, std::vector<char>(8));

long long positions;

bool validPos(std::vector<std::vector<char>> &board, int row, int col){
    if(board[row][col] == '*') return false;

    for(int i = 0;i<row;i++){
        if(board[i][col] == 'Q') return false;
    }
    for(int i = row-1, j = col-1;i>=0 && j>=0;i--,j--){
        if(board[i][j] == 'Q') return false;
    }
    for(int i = row-1, j = col+1;i>=0 && j<8;i--,j++){
        if(board[i][j] == 'Q') return false;
    }
    return true;
}


void placeQueen(std::vector<std::vector<char>> &board, int row){
    if(row == 8) {
        positions++;
        return;
    }

        for (int i = 0; i < 8; i++) {
            if (board[row][i] == '.' && validPos(board, row, i)) {
                board[row][i] = 'Q';
                placeQueen(board, row + 1);
                board[row][i] = '.'; 
            }
        }


}


int main(){
    for(auto &row : board){
        for (auto &x : row){
            std:: cin >> x;
        }
    }

    placeQueen(board, 0);

    std::cout << positions;


    return 0;
}