#include <iostream>
using namespace std;
int num[10001];
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    cout << "NO" << endl;
    for (int i = 0; i < N; i++) {
        if (i == 0)cout << num[i];
        else cout << " " << num[i];
    }
}