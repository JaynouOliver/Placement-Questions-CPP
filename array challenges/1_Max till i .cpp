#include<iostream>;
using namespace std;

int main(){


#ifndef ONLINE_JUDGE        // This is written for beautification.
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int maximum = -1999999999;

    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        maximum = max(maximum, array[i]);
        cout << maximum << endl;
    }
    


    return 0;


}