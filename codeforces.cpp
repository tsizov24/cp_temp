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
 
void solve() {
    int t;
    cin >> t;
    // t = 1;
    while(t--) {
    	
    }
}

void test() {
    int t;
    cin >> t;
    // t = 1;
    while (t--) {
        
    }
}

int main() {
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
    // test();
}
