#include <iostream>
using namespace std;
int countDigits(int n)
{
    int dig = 1;
    if (n >= 0 && n <= 9)
        return 1;
    return dig + countDigits(n / 10);
}
int main()
{
    cout << "Enter The number : ";
    int n;
    cin >> n;
    cout << "The Number of digits are : " << countDigits(n);
}