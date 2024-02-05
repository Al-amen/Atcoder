#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define endl   '\n' 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
void CloSolveKori() {
    string s;
    cin >> s;
    string ss;
    for (int i = s.length() - 1; i >= 0; i--) {
            if(s[i] == '.') {
                break;
            }
            else {
                ss.push_back(s[i]);
            }
    }
    reverse(ss.begin(),ss.end());

    cout << ss << endl;
}
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 //int tc; cin>>tc;
 //while(tc--)
 CloSolveKori();
return 0;
}
