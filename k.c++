#include <iostream>
using namespace std;

string can_divide_watermelon(int w) {
    if (w % 2 == 0 && w >= 4) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int w;
    cin >> w;  // Input the weight of the watermelon
    cout << can_divide_watermelon(w) << endl;  // Output the result
    return 0;
}

