#include <iostream>
#include <math.h>
using namespace std;

int decimal_to_octal(int decimal)
{
    int octal = 0, i = 1;

    while (decimal != 0)
    {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }

    return octal;
}

int main()
{
    int decimal;

    cout << “\nEnter a decimal number : “;
    cin >> decimal;

    cout << “\nEquivalent octal number : ” << decimal_to_octal(decimal);
    cout << endl;

    return 0;
}
