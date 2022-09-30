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
   shared_ptr<rectangle> p1 (new rectangle(4,5));
   p1->area();
   p1->perimeter();

   shared_ptr<rectangle> p2;

   p2=p1;
   p1->area();
   p1->perimeter();
   p2->area();
   p2->perimeter();
   cout<<"count of the object is= ";
   cout<<p2.use_count();
}
