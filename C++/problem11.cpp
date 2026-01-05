// #include <iostream>
// using namespace std;

// int main() {
//     int w;
//     cin >> w;

//     if (w % 4 == 0) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;

    if (w % 4 == 0) {
        if (w / 2) { // Non-zero check
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
