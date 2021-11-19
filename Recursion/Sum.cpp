#include <iostream>
using namespace std;
int sum(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return n + sum(n - 1);
}
int main()
{
    cout << "Enter Range : ";
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}