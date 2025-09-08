#include <iostream>

using namespace std;

int main()
{
    int n, s, p;
    cin>>n;
    s=0;
    p=1;
    for(n;n>=1;n--)
    {
        s=s+n;
        p=p*n;
    }
    cout<<"Сумма: "<<s<<endl;
    cout<<"Произведение: "<<p<<endl;
    return 0;
}