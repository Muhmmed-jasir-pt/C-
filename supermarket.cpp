#include <iostream>

using namespace std;
class sm
{
public:
    static string itemname[100],purchased[50],itemremove[10];
    static int numofitem,i,price[100],sum,k,curval;
    static void add();
    static void del();
    static void tot();
    static void stocklst();
};
int sm::sum=0;
int sm::k;
int sm::numofitem;
int sm::i;
int sm::curval=0;
int sm::price[100];
string sm::itemname[100];
string sm::purchased[50];
string sm::itemremove[10];


void sm::add()
{
    cout<<"How many items is need to be added\n";
    cin>>numofitem;
    for (i=1;i<=numofitem;i++)
    {
        cout<<"Enter the name of item "<<i<<"\n";
        cin>>itemname[i+curval];
        cout<<"Enter the price of "<<itemname[i+curval]<<"\n";
        cin>>price[i+curval];

    }
    curval=(curval-1)+i;
    i=1;
    cout<<"\nList of items added     Price\n";
    cout<<"___________________     _____\n\n";
    for(i=1;i<=numofitem;i++)
    {
        cout<<(i)<<") "<<itemname[i]<<"                   "<<price[i]<<"\n";
    }
}
void sm::stocklst()
{
    for(i=1;i<=curval;i++)
    {
        cout<<i<<") "<<itemname[i]<<"\n";
    }
}




void sm::del()
{
    cout<<"Enter the name of item you want to remove\n";
    cin>>itemremove[1];
    for(i=1;i<=numofitem;i++)
    {
        if(itemname[i]==itemremove[1])
        {
            itemname[i]="";
        }

    }
    cout<<"Stocklist after removing "<<itemremove[1]<<"\n";
    for(i=1;i<=numofitem;i++)
    {
        cout<<itemname[i]<<"\n";
    }
}



void sm::tot()
{
    int noip;
    cout<<"Enter total number of items purchased\n";
    cin>>noip;
    cout<<"Enter names of item your have purchased\n";
    for(i=1;i<=noip;i++)
    {
        cin>>purchased[i];
    }
    cout<<"Names of items you have purchased \n";
    for(i=1;i<=noip;i++)
    {
        cout<<purchased[i]<<"\n";
    }
    for(i=1;i<=noip;i++)
    {
        for(k=1;k<=numofitem;k++)
        {
            if(purchased[i]==itemname[k])
                sum=sum+price[k];
        }
    }
    cout<<"\n"<<"Total value of purchase = "<<sum<<"\n";
sum=0;
}
int main()
{
    char key;
    int n=0;
    for(;;)
    {
    cout<<"Press - A - (To add items to stock)\n\n";
    cout<<"Press - D - (To delete items from stock)\n\n";
    cout<<"Press - P - (To add purchase details)\n\n";
    cout<<"Press - S - (To show stocklist)\n\n";
    cout<<"Press - N - (To show number of transactions done today)\n\n";
    cin>>key;
    sm a1;
    if(key=='A'||key=='a')
    {
    a1.add();
    }
    else if(key=='P'||key=='p')
    {
    a1.tot();
    n++;
    }
    else if(key=='D'||key=='d')
    {
    a1.del();
    }
    else if(key=='S'||key=='s')
    {
    a1.stocklst();
    }
    else if(key=='N'||key=='n')
    {
    cout<<"\n"<<n<<" - Transactions completed today\n\n";
    }
    }
    return 0;
}
