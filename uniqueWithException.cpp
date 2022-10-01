#include<iostream>
#include<memory>

using namespace std;

class rectangle
{
        int l,b;

        public: rectangle()
                {
                        cout<<"Enter the value of length and breadth "<<endl;
                        cin>>l>>b;
                }

                void area()
                {
                        cout<<"area= "<<l*b<<endl;
                }
                void perimeter()
                {
                        cout<<"perimeter= "<<2*(l+b)<<endl;
                }
};

int main()
{
        unique_ptr<rectangle> p1(new rectangle ());
        p1->area();
        p1->perimeter();

        //unique_ptr<rectangle> p2;
        //p2=move(p1);
try{
        unique_ptr<rectangle> p2;
        if(1)
        {
                throw "This is unique you should remove first before assigning to second pointer";
        }

        p2->area();
        p2->perimeter();
}
        catch(const char *p)
        {
                cout<<p<<endl;
        }
}
