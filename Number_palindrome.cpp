#include<iostream>
using namespace std;

int main()
{
    int n,sum=0, temp,rem;
    cout<<"enter the number"<<endl;
    cin>>n;
    temp=n;
    
    while(n!=0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    
    if (sum==temp)
        cout<<" this is palindrome";
    else
        cout<<" this is not palindrome";
    return 0;
}
