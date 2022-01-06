//using of user defined data type struct


#include <iostream>

using namespace std;

int main()
{
struct my_name
{
    char fname;
    int phone,age,height;
};
my_name jas;
jas.fname="Bharat";
jas.phone=6534;
jas.age=19;
jas.height=4.5;
cout<<jas.fname<<"\n";
cout<<jas.phone<<"\n";
cout<<jas.age<<"\n";
cout<<jas.height<<"\n";
    return 0;
}
