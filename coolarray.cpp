#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    long long sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(sum % arr[i] != 0) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}