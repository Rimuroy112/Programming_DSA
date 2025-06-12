#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<char>> &board,int row,int col,char dig)
{
    // horizontal
    for(int j=0; j<9; j++)
    {
        if(board[row][j]==dig)
        {
            return false;
        }
    }

    // vertical
    for(int i=0; i<9; i++)
    {
        if(board[i][col]==dig)
        {
            return false;
        }
    }

    // grid
    int srow = (row/3)*3;
    int scol = (col/3)*3;
    for(int i=srow; i<=srow+2; i++)
    {
        for(int j=scol; j<=scol+2; j++)
        {
            if(board[i][j]==dig)
            {
                return false;
            }
        }
    }
    return true;
}

bool helper(vector<vector<char>> &board,int row,int col)
{
    if(row == 9)
    {
        return true;
    }

    int NextR = row,NextC = col+1;
    if(NextC == 9)
    {
        NextR = row+1;
        NextC = 0;
    }

    if(board[row][col] != '.')
    {
        return helper(board,NextR,NextC);
    }

    for(char dig='1'; dig<='9'; dig++)
    {
        if(isSafe(board,row,col,dig))
        {
            board[row][col] = dig;
            if(helper(board,NextR,NextC))
            {
                return true;
            }
            board[row][col] = '.';
        }
    }
    return false;
}

int main()
{
    vector<vector<char>> board = {{'5','3','.','.','7','.','.','.','.'},
                                  {'6','.','.','1','9','5','.','.','.'},
                                  {'.','9','8','.','.','.','.','6','.'},
                                  {'8','.','.','.','6','.','.','.','3'},
                                  {'4','.','.','8','.','3','.','.','1'},
                                  {'7','.','.','.','2','.','.','.','6'},
                                  {'.','6','.','.','.','.','2','8','.'},
                                  {'.','.','.','4','1','9','.','.','5'},
                                  {'.','.','.','.','8','.','.','7','9'}};

    helper(board,0,0);
    for(auto x:board)
    {
        for(char x2:x)
        {
            cout<<x2<<" ";
        }
        cout<<endl;
    }
    return 0;

}
