#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    //梯形公式
    cout << (a+b) * ( max(a,b) - min(a,b) + 1 )/2 << endl;
    return 0;
}
