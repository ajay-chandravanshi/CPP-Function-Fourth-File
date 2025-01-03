#include <iostream>
using namespace std;
namespace first
{
    void display()
    {
        cout<<"first";
    }
}
namespace second
{
    void display()
    {
        cout<<"second";
    }
}

int main()
{
    first::display();
    second::display();
}