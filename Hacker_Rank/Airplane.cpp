#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Initialize seating chart: create 7 rows, each with 4 columns
    vector<vector<char>> seats(7, vector<char>(4));
    
    // Array with initial seat letters for each row
    char initial[4] = {'A', 'B', 'C', 'D'};
    
    // Fill the seats array with initial seat letters
    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 4; j++) {
            seats[i][j] = initial[j];
        }
    }
    
    // Read number of booking requests
    int N;
    cin >> N;
    
    // Process each booking request
    for(int k = 0; k < N; k++) {
        string request;
        cin >> request;  // Read seat request (e.g., "5B")
        
        // Parse row number: convert everything except last char to int
        // Subtract 1 to convert from 1-based to 0-based indexing
        int row = stoi(request.substr(0, request.length() - 1)) - 1;
        
        // Get the column letter (last character of the string)
        char col_char = request.back();
        
        // Validate input: check if row is valid (0-6) AND column is A,B,C,or D
        if(row < 0 || row >= 7 || 
           (col_char != 'A' && col_char != 'B' && 
            col_char != 'C' && col_char != 'D')) {
            cout << "Sorry, not available!" << endl << endl;
            continue;  // Skip to next request
        }
        
        // Map column letter to index (A->0, B->1, C->2, D->3)
        int col_index;
        switch(col_char) {
            case 'A': col_index = 0; break;
            case 'B': col_index = 1; break;
            case 'C': col_index = 2; break;
            case 'D': col_index = 3; break;
        }
        
        // Check if seat is already taken (marked with 'X')
        if(seats[row][col_index] == 'X') {
            cout << "Sorry, not available!" << endl;
        } else {
            // Reserve the seat: mark it with 'X'
            seats[row][col_index] = 'X';
            
            // Print current seat arrangement after successful booking
            for(int i = 0; i < 7; i++) {
                cout << (i + 1) << " ";  // Print row number (1-based)
                for(int j = 0; j < 4; j++) {
                    cout << seats[i][j];  // Print seat status
                    if(j < 3) cout << " ";  // Add space between seats, not after last
                }
                cout << endl;  // New line after each row
            }
        }
        
        // Separate outputs for each request with an empty line
        cout << endl;
    }
    
    return 0;
}
