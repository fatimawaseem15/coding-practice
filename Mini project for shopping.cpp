#include<iostream>
using namespace std;
class Shop
{
private:
    char name;
    int sr,price;

public:
 void item()
   { cout<<"Enter Serial number-\n";
   cin>>sr;
   cout<<"Enter Item name\n";
   cout<<"  a)- Ladies suit\n  b)- Men Suit\n";
   cin>>name;
   cout<<"Enter price_";
   cin>>price;
   }
   void Price()
   {
       cout<<price;
   }
   void itemname()
   {
      if (name=='a')
   {
       cout<<"Ladies Suit";
   }
   else
    cout<<"Men Suit";
   }
   void srl()
   {
    cout<<sr;
   }
};
int main()

{

  while(true)
  {

    Shop s1;
    s1.item();
    cout<<"                                                           \n";
    cout<<"                           ABC                            \n";
    cout<<"                      Fashion Center                       \n";
    cout<<"                   Town BAZAR XYZCITY               \n";
    cout<<"                     Phone 012-111434311                     \n";
    cout<<"                                                           \n";
   cout<<"Date:"<<"18-Oct-2022\n";
   cout<<"           ________________________________________\n";
   cout<<"               Sr.      Item list       price       \n";
   cout<<"           ________________________________________\n";
   cout<<"               ";s1.srl();cout<<"       ";s1.itemname();cout<<"      ";s1.Price();
    cout<<"                                                           \n";
    cout<<"                                                           \n";
    cout<<"                                                           \n";

    cout<<"          ________________________________________\n";
    cout<<"                                                           \n";

    cout<<"              TOTAL                      ";s1.Price();cout<<"\n";

    cout<<"          =========================================\n";
    cout<<"             ITEM Cannot be returned and replaced"<<endl;
    cout<<"             in 7 days"<<endl;
    cout<<"                                                      \n";
    cout<<"                  THANKS FOR SHOPPING                    ";
}
}
