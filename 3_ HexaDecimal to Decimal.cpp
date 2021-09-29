// Hexa Decimal to Decimal system
#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
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
int HexaDecimaltoDecimal(string n){
    int ans = 0;
    int x = 1;

    int s = n.size();
    for(int i = s -1; i >= 0; i--){
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += x*(n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x*(n[i] - 'A' + 10);
        }
        x *= 16;
        
    }
    return ans;
}

int main() {

#ifndef ONLINE_JUDGE        // This is written for beautification.
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif                      // This is not part of the code.

  string n;
  cin >> n;

  cout << HexaDecimaltoDecimal(n) << endl;
   
}
