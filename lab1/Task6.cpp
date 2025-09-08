#include <iostream>

using namespace std;

int main()
{
    unsigned int n, s, i;
    cin>>n;
    s=0;
    for(i=1;n>0;i=i+2)
    {
        n--;
        s=s+i;
    }
    cout<<"Сумма: "<<s<<endl;
    return 0;
}