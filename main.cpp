#include <iostream>

using namespace std;

int main()
{
    cout << "Fibonacci rocks!" << endl;
    int x = 1, y=1, z = 0;
    while (y <= 1000000) {
        cout << x << endl;
        int fibonacci(int, int);
        z = fibonacci(x,y);
        x = y;
        y = z;

    }
    return 0;
}

int fibonacci(int a, int b){
    return a+b;
}
