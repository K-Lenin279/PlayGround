#include <iostream>
#include <string>

using namespace std;

class student
{
private:
    string name, reg;
    float fbal;
public:
    void getdata()
    {
        cout<<"Enter registration number"<<endl;
        cin>>reg;
        cout<<"Enter full name"<<endl;
        cin>>name;
        cout<<"Enter fee balance"<<endl;
        cin>>fbal;
    }
    void display()
    {
        cout<<reg<<name<<fbal<<endl;
    }
};

int main()
{
    student Peter;
    Peter.getdata();
    Peter.display();

    return 0;
}
