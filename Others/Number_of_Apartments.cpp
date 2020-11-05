// Questions : https://codeforces.com/problemset/problem/1430/A
#include<iostream>
using namespace std;
int main(void) {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    cin >> t;
    while(t --) {
        cin >> n;
        int a = 0, b = 0, c = 0;
        if (n % 3 == 0) {
            a = n / 3;
            b = 0;
            c = 0;
        } else if (n % 3 == 1) {
            a = n / 3 - 2;
            b = 0;
            c = 1;
        } else if (n % 3 == 2) {
            a = n / 3 - 1;
            b = 1;
            c = 0;
        }
        if (n == 1 || n == 4 || n == 2) {
            cout << "-1" << "\n";
        } else {
            cout << a << " "<< b << " " << c << "\n";
        }
    }
    return 0;
}
