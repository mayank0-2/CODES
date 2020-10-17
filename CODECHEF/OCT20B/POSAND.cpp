#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<iterator>

using namespace std;

int swap (vector<int> &a, int i ) {
    int temp = a[i];
    a[i] = a[i + 1];
    a[i + 1] = temp;
    return 0;
}

int main(void) {
    ios :: sync_with_stdio(0);
    cin.tie(0); 
    int n, t, p;
    cin >> t;
    while (t --) {
        cin >> n;
        if (n == 1) {
            cout << "1" << "\n";
            continue;
        } else if ((n & n - 1) == 0) {
            cout << "-1" << "\n";
        } else {
            vector<int> a = {2,3,1};
            for (int i = 4; i <= n; i ++) {                 //Taking input into vector here
                a.push_back(i);
            }
            
            for (int i = 3; i < n; i ++) {
            if ((a[i] & a[i - 1]) <= 0) {
                swap(a, i);
            }
            }
            for (int i = 0; i < n; i ++) {          //Loop for printing to output
                cout << a[i] << " ";
            }
            cout << "\n";
    
        }
    }
    return 0;
}
