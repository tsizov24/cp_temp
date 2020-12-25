#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

typedef long long ll;
typedef long double ld;

int MOD = 1e9 + 7;

ll getTime() {
    return duration_cast< milliseconds >(system_clock::now().time_since_epoch()).count();
}

bool yes(bool res, bool isUpperCase = false) {
    if (isUpperCase) cout << (res ? "YES" : "NO") << "\n";
    else cout << (res ? "Yes" : "No") << "\n";
    return res;
}

ll res;

void init() {
    res = 0;
}

void input() {

}

void count() {

}

void output(int caseNum) {
    cout << "Case #" << caseNum << ": " << res << "\n";
}

void solve() {
    int T;
    cin >> T;
    // T = 1;
    for (int i0 = 1; i0 <= T; i0++) {
        init();
        input();
        count();
        output(i0);
    }
}

void test() {
    int T;
    cin >> T;
    // T = 1;
    while(T--) {

    }
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    // test();
}