#include<iostream>
using namespace std;
class base
{
public:
    int x;
    void getData()
    {
        cout<<"Enter value of x= "; cin>>x;
    }
};
class derive1: public base
{
public:
    int y;
     void readdata()
     {
         cout<<"\nEnter value of y= ";cin>>y;
     }
};
class derive2: public derive1
{
private:
    int z;
    public:
        void indata()
        {
            cout<<"\nEnter value of z= ";cin>>z;
        }
        void product()
        {
            cout<<"\nProduct= "<<x*y*z;
        }
};
int main()
{
    derive2 a;
    a.getData();
    a.readdata();
    a.indata();
    a.product();
    return 0;
}
