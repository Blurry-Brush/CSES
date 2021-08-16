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
 
    int n;
    cin >> n;
 
    unordered_set<int> st;
 
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
 
    for (int i = 1; i <= n ; i++) {
        if (st.count(i) == 0) {
            cout << i << endl;
            return 0;
        }
    }
 
 
 
 
 
 
 
 
    //sort(ans.begin(), ans.end(), greater<int>());
 
    //cout << ans[0] << endl;
 
 
    //printf("%.10f\n", ans * pi);
    return 0;
}
