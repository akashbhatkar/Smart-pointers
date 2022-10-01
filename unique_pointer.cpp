#include <iostream>
#include<memory>

using namespace std;


class rectangle
{
    int l,b;
public:rectangle(int a,int B)
    {
        //cout<<"Enter the length and bredth "<<endl;
        l=a;
        b=B;
    }
    void area()
    {
        cout<<"area= "<<l*b<<endl;
    }
    void perimeter()
    {
        cout<<"perimeter is= "<<2*(l+b)<<endl;

    }

};

int main()
{
   unique_ptr<rectangle> p1(new rectangle (10,5));
    p1->area();
    p1->perimeter();

unique_ptr<rectangle> p2;
    p2 =move(p1);//removing first pointer and adding the second pointer
     p2->area();//accessing using second unique pointer
     p2->perimeter();

     p1->area();
     p1->perimeter();

}
