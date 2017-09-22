#include <iostream>

using namespace std;

void line(int Width, char fill_char)
{
    for(int i = 0; i <= Width;i++)
    {
        cout << fill_char;
    }
    cout << endl;
}

void solidRectangle(int Width, int Height, char fill_char)
{
    for(int i = 1; i <= Height;i++)
    {
        cout << endl;
        for(int k = 1; k <= Width;k++)
        {
        cout << fill_char;
        }
    }
    cout << endl;
}


void framedRectangle(int Width, int Height, char fill_char, int frame_width)
{
    for (int i = 1; i <= frame_width; i++)
    {
        for (int c = 1; c <= Width; c++)
        {
            cout << fill_char;
        }
        cout << endl;
    }
    for (int k = 1; k <= Height - (2*frame_width); k++)
    {
        for (int n = 1; n <= frame_width; n++)
        {
            cout << fill_char;
        }
        for (int a = 1; a <= Width - (2*frame_width); a++)
        {
            cout << " ";
        }
        for (int x = 1; x <= frame_width; x++)
        {
            cout << fill_char;
        }
        cout << endl;
    }
    for (int t = 1; t <= frame_width; t++)
    {
        for (int r = 1; r <= Width; r++)
        {
            cout << fill_char;
        }
        cout << endl;
    }
}


void rightLowerTriangle(int size, char fill_char)
{
    for (int i = 0; i <= size; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            cout << fill_char;
        }
        cout << endl;
    }
}


void rightUpperTriangle(int size, char fill_char)
{
    for (int i = size; i >= 0; i--)
    {
        for (int k = 0; k <= i; k++)
        {
            cout << fill_char;
        }
        cout << endl;
    }
}

void square(int size, char fill_char)
{
    for(int i = 1; i <= size;i++)
    {
        cout << endl;
        for(int k = 1; k <= size;k++)
        {
        cout << fill_char;
        }
    }
    cout << endl;
}

void equilateralTriangle(int Height, char fill_char)
{
    int a = 1;
    for(int i = 1; i <= Height; i++)
    {
        for(int b = Height - 1; b >= i; b--)
        {
        cout<<" ";
        }

        for(int x = 0; x < a ; x++)
        {
        cout << fill_char;
        }
    cout << endl;
    a = a + 2;
    }
}

void diamond(int Height, char fill_char)
{
    int a = 1;
    for(int i = 1; i <= Height; i++)
    {
        for(int b = Height - 1; b >= i; b--)
        {
            cout<<" ";
        }
        for(int x = 0; x < a ; x++)
        {
            cout << fill_char;
        }
        cout << endl;
        a = a + 2;
    }

    int e = (Height * 2) - 1;
    for(int a = 1; a<= Height; a++)
    {
        for(int b=0;b<e;b++)
        {
            cout << fill_char;
        }
        cout<<endl;
        e=e-2;

        for(int c=0;c<a;c++)
        {
            cout<<" ";
        }
    }
    cout << endl;
}


int main()
{
    int True = 0;
    do
    {
        int Shape, Width, Height, frame_width, size;
        char fill_char;
        cout << "Welcome to Picture Maker!" << endl;
        cout << "Which shape should I draw (0 to exit Menu) ";
        cin >> Shape;

        switch(Shape)
        {
            case 1:
                cout << "Line Drawing" << endl;
                cout << "Fill Character? ";
                cin >> fill_char;
                cout << "How wide? ";
                cin >> Width;
                line(Width, fill_char);
                break;
            case 2:
                cout << "Solid Rectangle" << endl;
                cout << "Fill Character? ";
                cin >> fill_char;
                cout << "How wide? ";
                cin >> Width;
                cout << "Height? ";
                cin >> Height;
                solidRectangle(Width, Height, fill_char);
                break;
            case 3:
                cout << "Framed Rectangle" << endl;
                cout << "Fill Character? ";
                cin >> fill_char;
                cout << "Width? ";
                cin >> Width;
                cout << "Height? ";
                cin >> Height;
                cout << "Outline Width? ";
                cin >> frame_width;
                framedRectangle(Width, Height, fill_char, frame_width);
                break;
            case 4:
                cout << "Lower Left - Right Isosceles Triangle" << endl;
                cout << "Fill Character? ";
                cin >> fill_char;
                cout << "Size? ";
                cin >> size;
                rightLowerTriangle(size, fill_char);
                break;
            case 5:
                cout << "Upper Left - Right Isosceles Triangle" << endl;
                cout << "Fill Character? ";
                cin >> fill_char;
                cout << "Size? ";
                cin >> size;
                rightUpperTriangle(size, fill_char);
                break;
            case 6:
                cout << "Solid Square" << endl;
                cout << "Fill Character? ";
                cin >> fill_char;
                cout << "Size? ";
                cin >> size;
                square(size, fill_char);
                break;
            case 7:
                cout << "Equilateral Triangle" << endl;
                cout << "Fill Character? ";
                cin >> fill_char;
                cout << "Height? ";
                cin >> Height;
                equilateralTriangle(Height, fill_char);
                break;
            case 8:
                cout << "Diamond" << endl;
                cout << "Fill Character? ";
                cin >> fill_char;
                cout << "Height? ";
                cin >> Height;
                diamond(Height, fill_char);
                break;
            default:
                cout << "0 was entered, exiting..." << endl;
                return 0;
        }
    }while(True == 0);
    return 0;
}
