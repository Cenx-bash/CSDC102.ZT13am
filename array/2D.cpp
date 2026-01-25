#include <iostream>
using namespace std;

int main() {
    // Create a 22x30 2D character array for pixel art
    // Each character represents a color: R=Red, B=Blue, Y=Yellow, G=Green
    // Empty spaces (' ') represent background/transparent areas
    char pixel_art[22][30] = {
        // Row 0-2: Top empty space and beginning of cloud
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','Y','Y','Y','Y',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        
        // Row 3-5: Cloud top formation
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','Y','Y','Y','Y','Y','Y','Y','Y',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        
        // Row 6-8: Cloud middle with eyes
        {' ',' ',' ',' ',' ',' ',' ','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y',' ',' ',' ',' ',' ',' ',' '},
        
        // Row 9-11: Cloud bottom with smile
        {' ',' ',' ',' ','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y',' ',' ',' ',' ',' '},
        {' ',' ','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y',' ',' ',' ',' '},
        
        // Row 12-14: Cloud continuation and rainbow start
        {' ','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y',' ',' ',' '},
        {'Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y',' ',' '},
        {'Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y','Y',' ',' '},
        
        // Row 15-17: Rainbow stripes (R, Y, G, B)
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','R','R','R','R','R','R',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','R','R','Y','Y','Y','Y','R','R',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','R','R','Y','Y','G','G','Y','Y','R','R',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
        
        // Row 18-20: Rainbow continuation
        {' ',' ',' ',' ',' ',' ',' ',' ',' ','R','R','Y','Y','G','G','B','B','G','G','Y','Y','R','R',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' ','R','R','Y','Y','G','G','B','B','B','B','G','G','Y','Y','R','R',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ','R','R','Y','Y','G','G','B','B','B','B','B','B','G','G','Y','Y','R','R',' ',' ',' ',' ',' '},
        
        // Row 21: Bottom of rainbow
        {' ',' ',' ',' ',' ',' ','R','R','Y','Y','G','G','B','B','B','B','B','B','B','B','G','G','Y','Y','R','R',' ',' ',' ',' '}
    };
    
    // Display the pixel art with color mapping
    cout << "Pixel Art: Smiling Cloud with Rainbow\n";
    cout << "Legend: R=Red, B=Blue, Y=Yellow, G=Green, [space]=Background\n\n";
    
    for (int row = 0; row < 22; row++) {
        for (int col = 0; col < 30; col++) {
            char pixel = pixel_art[row][col];
            
            // Color-coded output with spacing for visual clarity
            switch(pixel) {
                case 'R':
                    cout << "R ";  // Red pixel
                    break;
                case 'B':
                    cout << "B ";  // Blue pixel
                    break;
                case 'Y':
                    cout << "Y ";  // Yellow pixel
                    break;
                case 'G':
                    cout << "G ";  // Green pixel
                    break;
                default:
                    cout << "  ";  // Two spaces for empty/background
                    break;
            }
        }
        cout << endl;  // New line after each row
    }
    
    // Explanation of key design elements
    cout << "\n=== Design Breakdown ===\n";
    cout << "1. Cloud Body (Rows 2-14): Uses 'Y' (Yellow) to create fluffy cloud shape\n";
    cout << "2. Cloud Eyes (Rows 9-10, Columns ~8-11): Uses 'B' (Blue) for eyes\n";
    cout << "3. Cloud Smile (Rows 11-12): Uses 'G' (Green) to form smiling mouth\n";
    cout << "4. Rainbow (Rows 15-21): Four-color rainbow using R, Y, G, B pattern\n";
    cout << "5. Background: Empty spaces (' ') create negative space around the art\n";
    
    return 0;
}
