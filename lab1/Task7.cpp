#include <iostream>

using namespace std;

int main()
{
    int n, i;
    double s, x, max, min;
    cin>>n;
    cin>>x;
    max=x;
    min=x;
    s=x;
    for(i=1;i<n;i++)
    {
        cin>>x;
        if(x<min) min=x;
        if(x>max) max=x;
        s=s+x;
    }
    s=s/n;
    cout<<"Среднее арифметическое: "<<s<<endl;
    cout<<"Минимальное число: "<<min<<endl;
    cout<<"Максимальное число: "<<max<<endl;
    return 0;
}