#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    for (int i = 2; i * i <= m; i++) {
        if (m % i == 0) {
            cout << i << " ";
            while (m % i == 0) {
                m /= i;    
            }
        }
    }
    if (m > 1) {
        cout << m << " ";
    }

    return 0;
}
