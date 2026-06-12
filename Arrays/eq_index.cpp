#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    int totalSum = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        totalSum += arr[i];
    }

    int leftSum = 0;

    for(int i = 0; i < n; i++) {

        int rightSum = totalSum - leftSum - arr[i];

        if(leftSum == rightSum) {
            cout << i << endl;
            return 0;
        }

        leftSum += arr[i];
    }

    cout << -1 << endl;

    return 0;
}