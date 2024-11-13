#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    cout << n << endl;
  
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
  
    return 0;
}
