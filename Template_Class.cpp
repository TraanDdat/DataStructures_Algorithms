#include<iostream>

using namespace std;

template<class T>

class Arithmetic
{
    private:
        T num1;
        T num2;

    public:
        Arithmetic(T n1, T n2);
        T add();
        T subtract();
};

template<class T>
Arithmetic<T>::Arithmetic(T n1, T n2)
{
    num1 = n1;
    num2 = n2;
}

template<class T>
T Arithmetic<T>::add()
{
    return num1 + num2;
}

template<class T>
T Arithmetic<T>::subtract()
{
    return num1 - num2;
}

int main()
{
    Arithmetic<int> intCalc(10, 5);
    cout << "Int Addition: " << intCalc.add() << endl;
    cout << "Int Subtraction: " << intCalc.subtract() << endl;

    Arithmetic<float> floatCalc(10.5, 5.2);
    cout << "Float Addition: " << floatCalc.add() << endl;
    cout << "Float Subtraction: " << floatCalc.subtract() << endl;

    return 0;
}