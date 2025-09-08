#include <iostream>

using namespace std;

int main()
{
    int k, f, i;
    cin>>k;
    f=1;
    if(k%2) i=1;
    else    i=2;

    for(i;i<=k;i=i+2)
    {
    f=f*i;
    }
    cout<<"Факториал: "<<f<<endl;
    return 0;
}