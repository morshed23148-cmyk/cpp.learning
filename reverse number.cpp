#include<iostream>
using namespace std;
int main()
{
int n;
int reverse = 0;
cin >> n;

while(n > 0)
{
    int digit;
    
    digit = n % 10;   
    
    reverse = reverse * 10 + digit; 
    
    n = n / 10;     
    
}
cout<<"reverse ="<<reverse;
return 0;
}
   
