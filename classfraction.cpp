#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class fraction
{
private:
    int Num;
    int Dem;

public:
    void get()
    {
        cout << "Enter the num : ";
        cin >> Num;
        cout << "Enter the Dem : ";
        cin >> Dem;
    }
    void disp()
    {
        cout << Num << "/" << Dem << "\n";
    }
    int sum(fraction, fraction);
};
int fraction::sum(fraction f1, fraction f2)
{
    if (f1.Dem == f2.Dem)
    {
        Dem = f1.Dem;
        Num = f1.Num + f2.Num;
    }
    else
    {int num1,num2,temp;
    
        Num = (((f1.Dem*f2.Dem/ __gcd(f1.Dem, f2.Dem))/f1.Dem)*f1.Num)+(((f1.Dem*f2.Dem/ __gcd(f1.Dem, f2.Dem))/f2.Dem)*f2.Num);
    
        Dem = f1.Dem*f2.Dem/ __gcd(f1.Dem, f2.Dem);
    }
    return (0);
}
int main()
{
    fraction f1, f2, f3;
    cout << "For Fraction-1 :" << endl;
    f1.get();
    cout << "For Fraction-2 :" << endl;
    f2.get();
    cout << "Fraction 1 is:\n";
    f1.disp();
    cout << "Fraction 2 is:\n";
    f2.disp();

    f3.sum(f1,f2);
    cout << "\nThe Sum of two fractions no.s are : ";
    f3.disp();

    return (0);
}