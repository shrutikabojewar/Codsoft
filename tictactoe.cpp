#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// Function to print the Tic Tac Toe board
void printBoard(const vector<vector<char> > &board) {
    for (int i = 1; i < 4; ++i) {
        for (int j = 1; j < 4; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if a player has won
bool checkWin(const vector<vector<char> > &board, char player) {
    // Check rows and columns
    for (int i = 1; i < 4; ++i) {
        if ((board[i][1] == player && board[i][2] == player && board[i][3] == player) ||
            (board[1][i] == player && board[2][i] == player && board[3][i] == player)) {
            return true;
        }
    }

    // Check diagonals
    if ((board[1][1] == player && board[2][2] == player && board[3][3] == player) ||
        (board[1][3] == player && board[2][2] == player && board[3][1] == player)) {
        return true;
    }

    return false;
}

// Function to check if the board is full
bool isBoardFull(const vector<vector<char> > &board) {
    for (int i = 1; i < 4; ++i) {
        for (int j = 1; j < 4; ++j) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

// Function to play the Tic Tac Toe game
void playGame() {
    vector<vector<char> > board(4, vector<char>(4, ' '));
    char currentPlayer = 'X';

    while (true) {
        // Print the current board
        printBoard(board);

        // Get the row and column from the current player
        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";

        // Input move
        cin >> row >> col;

        // Validate input
        if (cin.fail() || row < 1 || row > 3 || col < 1 || col > 3 || board[row][col] != ' ') {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        // Make the move
        board[row][col] = currentPlayer;

        // Check if the current player has won
        if (checkWin(board, currentPlayer)) {
            printBoard(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }

        // Check if the board is full (tie)
        if (isBoardFull(board)) {
            printBoard(board);
            cout << "It's a tie!" << endl;
            break;
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    // Function to print the Tic Tac Toe board
void printBoard(const vector<vector<char> > &board) ;
{
    for (int i = 1; i < 4; ++i) {
        for (int j = 1; j < 4; ++j) {
            cout << board[i][j];
            if (j < 3) {
                cout << " | ";
            }
        }
        cout << endl;

        if (i < 3) {
            cout << "---------" << endl;
        }
    }
}

}

int main() {
    cout << "Welcome to Tic Tac Toe!" << endl;
    playGame();

    return 0;
}

