#include<iostream>
using namespace std;
class data
{
    private: 
    int somedata;
    public:
    void setdata(int d)
    {
       somedata=d;
    }
    void showdata()
    {
        cout<<endl<<"Data is "<<somedata<<endl;
    }

};
int main()
{
    data d1,d2;
    d1.setdata(350);
    d2.setdata(9876);
    d1.showdata();
    d2.showdata();
    return 0;
}