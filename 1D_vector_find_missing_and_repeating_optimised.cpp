#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

pair<int, int> find_(vector<int> &matrix)
{
  int missing = -1;
  int repeating = -1;

  int n = matrix.size();
  vector<int> count(n, 0);

  for (int i = 0; i < n; i++)
  {
    count[matrix[i] - 1]++;
  }

  for (int i = 0; i < n; i++)
  {
    if (count[i] == 0)
    {
      missing = i + 1;
    }
    else if (count[i] > 1)
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
  for (int i = 0; i < n; i++)
  {
    cin >> matrix[i];
  }

  pair<int, int> result = find_(matrix);

  cout << " the missing number is = " << result.first << endl;
  cout << " the repeating number is = " << result.second << endl;
  return 0;
}