#include <iostream>

using namespace std;

int main()
{
    unsigned int n, m, i;
    cin>>n>>m;
    cout<<"Общие делители:"<<endl;
    for(i=1;i<=n;i++)
    {
        if((!(n%i))&&(!(m%i)))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}