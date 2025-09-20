#include<iostream>

using namespace std;

class Rectangle
{
    private:
        int length;
        int width;

    public:
        Rectangle(int l, int w);
        int area();
        int get_length();
};

Rectangle::Rectangle(int l, int w)
{
    length = l;
    width = w;
}

int Rectangle::area()
{
    return length * width;
}

int Rectangle::get_length()
{
    return length;
}

int main()
{
    Rectangle rect1(10,5);

    cout<<rect1.area()<<endl;
    cout<<rect1.get_length()<<endl;

    return 0;
}