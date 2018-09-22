#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int x;
    float y;
    const double fee = 0.5;
    cin>>x;
    cin>>setprecision(2)>>y;
    if(y<(x+fee))
    {
        cout<<float(y);
    }
    else
    {
        if(x%5==0)
            cout<<(y-x-fee);
        else
            cout<<float(y);
    }
    return 0;
}
