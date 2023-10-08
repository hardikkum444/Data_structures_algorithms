//tower of hanoi question solved using simple recursion 


#include <iostream>
using namespace std;

void toi(int s, int d, int h, int n, int &count) {
    if (n == 1) {
        cout << "Moving plate from " << s << " to " << d << endl;
        count++;
        return;
    }

    toi(s, h, d, n - 1, count);

    cout << "Moving plate from " << s << " to " << d << endl;
    count++;

    toi(h, d, s, n - 1, count);
}

int main() {
    int s = 1;
    int d = 2;
    int h = 3;

    int n = 2;
    int count = 0;

    toi(s, d, h, n, count);

    cout << "Total moves: " << count << endl;

    return 0;
}
