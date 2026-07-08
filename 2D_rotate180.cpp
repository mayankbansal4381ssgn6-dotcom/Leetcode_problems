#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rotate_(vector<vector<int>> &matrix, int rows, int col);
void rotate_(vector<vector<int>> &matrix, int rows, int col)
{
    int n = matrix.size();
    
    // 1. Reverse column wise (Vertical Flip)
    for (int j = 0; j < n; j++)
    {
        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            swap(matrix[start][j], matrix[end][j]);
            start++;
            end--;
        }
    }

    // 2. Reverse row wise (Horizontal Flip)
    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }

    // FIXED: Beautiful Grid Printing
    cout << "\nRotated Matrix (180 Degrees):\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " "; // Added space
        }
        cout << "\n"; // Added newline after each row
    }
}

int main()
{
    vector<vector<int>> matrix(4, vector<int>(4, 1));
    cout << "Enter a 4x4 matrix:\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> matrix[i][j];
        }
    }

    rotate_(matrix, 4, 4);
    return 0;
}