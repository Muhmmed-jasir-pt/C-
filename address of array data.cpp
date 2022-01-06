#include <iostream>

using namespace std;

int main()
{
    int j[10],i;
    cout << "Enter the values of 10 elements of array\n";
    for(i=1;i<=10;i++)
    {
        cout<<"Enter the value at array position "<<i<<"\n";
        cin>>j[i];
        cout<<"Value  =  "<<j[i]<<"  Address = "<<&j[i]<<"\n";
    }

    return 0;
}
