#include <iostream>

using namespace std;

int main()
{
    int n,arr[100],i;
    cout << "Enter the number of elements in the array "<<"\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    arr[100]=arr[1];
for(i=1;i<n;i++)
{
    if(arr[100]<arr[i])
    {
    arr[100]=arr[i];
    }
}
cout<<arr[100];
    return 0;
}
