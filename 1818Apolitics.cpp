#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int n, k;
    cin >> n >> k;
    string t[n];
    int ans = n;
    for(int i = 0; i < n; i++) {
        cin >> t[i];
        if(t[i] != t[0]) {
            ans--;
        }
    }
    cout << ans << "\n";
    }
    return 0;
}