#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> find_(vector<int> &matrix);
pair<int, int> find_(vector<int> &matrix)
{
  int n = matrix.size();
  // reduce every elemt of the matrix. by one
  for (int i = 0; i < n; i++)
  {
    matrix[i]--;
  }

  int missing = -1;
  int repeating = -1;
  // use the modular operator to find the current number at the index and add number n at the index associated with that current number
  for (int i = 0; i < n; i++)
  {
    matrix[matrix[i] % n] += n;
  }
  // to find the missing and repeating numbers

  for (int i = 0; i < n; i++)
  {
    if (matrix[i] < 7)
    {
      missing = i + 1;
    }
    else if (matrix[i] / n > 1)
    {
      repeating = i + 1;
    }
  }
  return {missing, repeating};
}

int main()
{
  int n;
  cout << "enter the value of n = ";
  cin >> n;

  vector<int> matrix(n);
  cout << " enter the elements form 1 to 7 " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> matrix[i];
  }
  pair<int, int> result = find_(matrix);

  cout << " the missing number is = " << result.first << endl;
  cout << " the repearing number is = " << result.second << endl;

  return 0;
}