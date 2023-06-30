#include <iostream>
#include <math.h>
using namespace std;

int octal_to_decimal(int octal)
{
    int decimal=0;
    int i=0;
    while(octal!=0){
        decimal+=(octal%10)*pow(8,i);
        i++;
        octal/=10;
    }
    return decimal;
}

int main()
{
    int octal;

    cout << "\nEnter a octal number : ";
    cin >> octal;

    cout << "\nEquivalent decimal number : " << octal_to_decimal(octal);
    cout << endl;

    return 0;
}
