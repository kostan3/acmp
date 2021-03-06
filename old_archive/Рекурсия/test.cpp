#include <iostream>

using namespace std;

static int used[1001][1001];
int n, x, y;

void doit (int x, int y)
{
 for (int p = 0; p < n; p++) 
 {
  used[x][p] = 1;
  used[p][y] = 1;
 }

 for (int p = x, o = y; p < n && o < n; p++, o++)   used[p][o] = 1;
 for (int p = x, o = y; p >= 0 && o >= 0; p--, o--) used[p][o] = 1;
 for (int p = x, o = y; p < n && o >= 0; p++, o--)  used[p][o] = 1;
 for (int p = x, o = y; p >= 0 && o < n; p--, o++)  used[p][o] = 1;

 used[x + 1][y + 2] = used[x - 1][y + 2] = used[x + 2][y + 1] = used[x - 2][y + 1] = 1;
 used[x - 1][y - 2] = used[x - 2][y - 1] = used[x + 1][y - 2] = used[x + 2][y - 1] = 1;
 used[x][y] = 2;
}


int main ()
{
 cin >> n >> x >> y;
 doit (x, y);
 for (int i = 0; i < n; i++, cout << endl)
  for (int j = 0; j < n; j++)
   cout << used[i][j] << " ";
}
