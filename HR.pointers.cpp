#include <iostream>
#include <cmath>

using namespace std;

void update(int *a,int *b) {
    // Complete this function
    int a1 = *a;
    int b1 = *b;
    
    *a = a1 + b1;
    *b = abs(a1 - b1);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin >> a >> b;
    update(pa, pb);
    cout << a << endl << b << endl;

    return 0;
}
