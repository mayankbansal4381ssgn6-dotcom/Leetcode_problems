#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Removed 'm' from the parameters, the vector handles its own size
pair<int, int> find_missing_and_repeating(vector<int> &matrix)
{
  int n = matrix.size();
  sort(matrix.begin(), matrix.end());

  int missing = -1;
  int repeating = -1;

  // check the edge cases;
  if (matrix[0] != 1)
  {
    missing = 1;
  }

  for (int i = 1; i < n; i++)
  {
    if (matrix[i] == matrix[i - 1])
    {
      repeating = matrix[i];
    }
    else if (matrix[i] - matrix[i - 1] > 1)
    {
      missing = matrix[i - 1] + 1;
    }
  }

  // check for the nth case using 'n' instead of 'm'
  if (missing == -1 && matrix[n - 1] != n)
  {
    missing = n;
  }

  return {repeating, missing};
}

int main()
{
  int m;
  cout << "Enter the value of m = ";
  cin >> m;

  // FIX: Initialize the vector with size 'm'
  vector<int> matrix(m);

  cout << "Enter the elements in the vector = " << endl;
  for (int i = 0; i < m; i++)
  {
    cin >> matrix[i];
  }

  pair<int, int> result = find_missing_and_repeating(matrix);

  cout << "Repeating number is = " << result.first << endl;
  cout << "Missing number is = " << result.second << endl;

  return 0;
}