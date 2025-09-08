#include <iostream>

using namespace std;

int main()
{
    int n, s, p, i;
    cin>>n;
    s=0;
    for(n;n>=1;n--)
    {
        p=1;
        for(i=0;i<n;i++)
        {
            p=p*n;
        }
        s=s+p;
    }
    cout<<"Сумма: "<<s<<endl;
    return 0;
}