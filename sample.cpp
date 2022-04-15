// https://codingcompetitions.withgoogle.com/kickstart/round/00000000008f4332/0000000000942404

#include <iostream>

using namespace std;

int main () {
    int t;
    cin >> t;
    
    for (int j = 1; j <= t; j++) {
        int n, m;
        cin >> n >> m;
        
        int tot = 0;
        
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            tot = tot + x;
        }
        
        cout << "Case #" << j << ": " << (tot % m) << "\n";
        
    }
}
