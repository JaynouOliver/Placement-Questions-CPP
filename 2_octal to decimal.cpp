// Octal to decimal
#include <iostream>
#include <math.h>
using namespace std;

int binarytoDecimal(int n){

    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n%10;
        ans += x*y;
        x *= 2;
        n /= 10;
    }
    return ans;
}
int octatoDecimal(int n){

    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n%10;
        ans += x*y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int main() {

#ifndef ONLINE_JUDGE        // This is written for beautification.
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif                      // This is not part of the code.

  int n;
  cin >> n;

  cout << octatoDecimal(n) << endl;
   
}
