#include<iostream>
using namespace std;
int main()
{
int n;
int sum = 0;

cin >> n;

while(n > 0)
{
    int digit;
    
    digit = n % 10;   
    
    sum = sum + digit; 
    
    n = n / 10;     
    
}
cout<<"sum ="<<sum;
return 0;
}
   
