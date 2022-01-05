//written by jazer__________________________________________________

//Program to show A to Z alphabets using ASCII values/////

#include <iostream>

using namespace std;
int  main()
{
int j;
for(j=65;j<=90;j++)//ASCII for A=65 & Z=90
{
    cout<<j<<" - ";
    cout<<char(j)<<"\n";//TYPECASTING
}
return 0;
}
