#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        sum += x;
        if(sum < 0) {
            sum = 0;
        }
    }
    cout << sum << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 int tc = 1; //cin>>tc;
 while(tc--)
 CloSolveKori();
return 0;
}