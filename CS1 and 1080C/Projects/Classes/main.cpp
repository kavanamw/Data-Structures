#include <iostream>

using namespace std;

class Adding{
    int A, B;
public:
    void Set_V(int, int);
    int Sum() {return A+B;}
};

void Adding::Set_V(int X, int Y){
    A = X;
    B = Y;
}

int main(int argc, char *argv[])
{
    int Num1, Num2;
    Adding Two;
    cout << "Enter the first number to add: ";
    cin >> Num1;
    cout << "Enter the second number to add: ";
    cin >> Num2;
    Two.Set_V(Num1, Num2);
    cout << "Sum: " << Two.Sum() << endl;
    return 0;
}
