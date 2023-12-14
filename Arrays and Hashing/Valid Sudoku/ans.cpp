//https://leetcode.com/problems/valid-sudoku/

//init 3 vector of unordered_set to check row, col, subbox. 
//sequential check each element in board, if it is not '.', check if it is in the unordered_set.
//if it is in the unordered_set, return false. if not, insert it into the unordered_set.

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        const int count = 9;
        vector<unordered_set<char>> check_row(count);
        vector<unordered_set<char>> check_col(count);
        vector<unordered_set<char>> check_subbox(count);

        for(int r = 0; r <count; r++){
            for(int c = 0; c <count; c++){
                
                if(board[r][c] != '.'){
                    int loc = (r / 3) * 3 + c / 3;
                    if (check_row[r].find(board[r][c]) != check_row[r].end() )
                        return false;
                    if ( check_col[c].find(board[r][c]) != check_col[c].end())
                        return false;
                    if ( check_subbox[loc].find(board[r][c]) != check_subbox[loc].end())
                        return false;
                
                    check_row[r].insert(board[r][c]);
                    check_col[c].insert(board[r][c]);
                    check_subbox[loc].insert(board[r][c]);
                
                }

            }
        }
        return true;
    }
};
