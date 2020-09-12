#include <iostream>
using namespace std;

int main() {
  int a[50], n, i;
  cout << "Numarul de elemente din sirul a (maximum 20) ";
  cin >> n;
  for (i = 0; i < n; i++) {
    cout << "a[" << i << "] = ";
    cin >> a[i];
  }
long int sum;
  sum = 0;
  for (int i = 0; i < n; i++ )
  {
      sum = sum + a[i];
  }
  cout << "Suma elementelor sirului a este : " << sum << endl;
}