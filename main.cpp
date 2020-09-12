#include <iostream>
using namespace std;

int main() {
  int a[50], n, i;
  cout << "Numarul elementelot din sir: "; cin >> n;
  for(i=0; i<n; i++){
    cout << "a[" << i << "]= "; cin >> a[i];
  }
  int max;
   max = a[0];
   for (i = 0; i < n; i++)
   {
      if(max < a[i])
        max = a[i];
   }
   cout << "Valoarea maxima este : " << max << endl;
}