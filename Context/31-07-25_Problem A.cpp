//Problem : https://codeforces.com/contest/2130/problem/A 

#include <iostream>
#include <vector>
#include <numeric>
#include <map>
using namespace std;
void solve() {
    int n;
    cin >> n;

    long long total_sum = 0;
    int count_zeros = 0;

    for (int i = 0; i < n; ++i) {
        int s_val;
        cin >> s_val;
        total_sum += s_val;
        if (s_val == 0) {
            count_zeros++;
        }
    }

    long long max_score = total_sum + count_zeros;

    cout << max_score << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

