#include <bits/stdc++.h>
 
#define fo(i,n) for(int i = 0;i<n;i++)
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
 
 
using namespace std;
 
int binarySearch(int arr[], int n, int key ) {
 
    int s = 0;
    int e = n - 1;
 
    while (s <= e) {
        int mid = (s + e) / 2;
 
 
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] > key) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
 
    }
    return -1;
 
 
 
}
int main() {
 
    double pi = 3.1415926535;
 
 
    string s;
    cin >> s;
 
    int cnt = 1;
    int maxcnt = 1;
 
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == s[i + 1]) {
            cnt ++;
        }
 
        else {
            cnt = 1;
        }
 
 
 
 
 
        if (cnt > maxcnt) {
            maxcnt = cnt;
        }
    }
 
 
 
 
    cout << maxcnt << endl;
 
 
    //sort(ans.begin(), ans.end(), greater<int>());
 
    //cout << ans[0] << endl;
 
 
    //printf("%.10f\n", ans * pi);
    return 0;
}
