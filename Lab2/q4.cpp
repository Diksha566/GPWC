#include <iostream>
using namespace std;

inline int lg(int num1, int num2, int num3) {
    if(num1 > num2 && num1 > num3)
        return num1;
    else if(num2 > num1 && num2 > num3)
        return num2;
    else
        return num3;
}

int main() {
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;

    cout << lg(num1, num2, num3) << "\n";  

    return 0;
}

