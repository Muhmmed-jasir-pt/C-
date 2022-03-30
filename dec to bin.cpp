#include <iostream>

using namespace std;

int main()
{
    int a,i,j,ar[20];
    cout << "DECIMAL TO BINARY CONVERTER" << endl;
    cout << "___________________________" << endl<<endl;
    cout << "ENTER THE DECIMAL NUMBER" << endl;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=16;j++)
        {
            ar[j]=a%2;
            a=a/2;
        }

    }
    for(i=16;i>=1;i--)
    {
        cout<<ar[i];
    }
    return 0;
}
