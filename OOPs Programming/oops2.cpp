#include<iostream>
using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int Counter;

    public:
        void initCounter(void)
        {
            Counter = 0;
        }
        void getPrice(void);
        void displayPrice(void);
};

void Shop :: getPrice(void)
{
    cout<<"Enter the Id of Your Item"<<endl;
    cin>>itemId[Counter];
    cout<<"Enter the Id of Your price"<<endl;
    cin>>itemPrice[Counter];
    Counter++;
    
}

void Shop :: displayPrice(void)
{
    cout<<"Enter the prices of Your Items"<<endl;
    
    for (int i = 0; i < Counter; i++)
    {
        cout<<"The price of item with id"<<itemId[i]<<" is"<<itemPrice[i]<<endl;
    }
    
    
}

int main()
{

 Shop anurag;
 anurag.initCounter();
//  anurag.getPrice();
//  anurag.getPrice();
//  anurag.getPrice();

for (int i = 0; i < 4; i++)
{
    anurag.getPrice();
}
 anurag.displayPrice();
 return 0;
}