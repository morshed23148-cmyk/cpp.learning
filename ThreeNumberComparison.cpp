#include<iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if(a == b && a == c)
    {
        cout << "All numbers are equal\n";
    }
    else
    {
        if(a >= b && a >= c)
        {
            cout << a << " is the largest number\n";

            if(b >= c)
                cout << b << " is the second largest number\n";
            else
                cout << c << " is the second largest number\n";
        }

        else if(b >= a && b >= c)
        {
            cout << b << " is the largest number\n";

            if(a >= c)
                cout << a << " is the second largest number\n";
            else
                cout << c << " is the second largest number\n";
        }

        else
        {
            cout << c << " is the largest number\n";

            if(a >= b)
                cout << a << " is the second largest number\n";
            else
                cout << b << " is the second largest number\n";
        }
    }

    return 0;
}
