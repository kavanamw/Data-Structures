#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

const double PI = atan(1.0)*4.0;
const double PRECISION = 0.00001;

//done
double factorial(double n){
    double Total = 1;
    if(n <= -1)
        return -1;
    for(int counter = 1;counter <= n;counter++)
    {
        Total = Total * counter;
    }
    return Total;
}

//done
double degreesToRadians(double angle_in_degrees){
    double angle_in_radians = 0;
    if(angle_in_degrees >= 0)
    {
        while(angle_in_degrees >= 360)
        {
            angle_in_degrees = angle_in_degrees - 360;
        }
        angle_in_radians = angle_in_degrees * (PI/180);
    }
    if(angle_in_degrees < 0)
    {
        while(angle_in_degrees <= -360)
        {
            angle_in_degrees = angle_in_degrees + 360;
        }
        angle_in_radians = angle_in_degrees * (PI/180);
    }
    return angle_in_radians;
}

//done
bool isPrime(int number){
    if(number < 0)
        return 0;
    else if(number == 0 || number == 1)
        return 0;
    else
    {
        for(int k = 2;k <= number/2;++k)
        {
            if(number % k == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}

//done
int countChars(string input, char which_char){
    int Size = input.length();
    int counter = 0, wrong = 0;
    for(int k = 0;k < Size;k++)
    {
        if(input[k] == which_char)
            counter++;
        else
            wrong++;
    }
    return counter;
}

//done
bool containsDups(string sarray[], int length){
    bool Does;
    for(int k = 0;k < length;k++)
    {
        for(int c = k+1;c < length;c++)
        {
            if(sarray[k] == sarray[c])
            Does = 1;
        }
    }
    if(Does == 1)
        return true;
    else
        return false;
}

const int LEFT_DIR = 1;
const int RIGHT_DIR = 2;

string rotateString(string to_rotate, int direction, int offset){
    if(offset==0 || to_rotate.length() == 0 || (direction != 1 && direction != 2)) return to_rotate;
        string NewString=to_rotate;
    if(direction == 1)
    {
        int BackLeft = to_rotate.length()-offset;
        for(int y = 0;y <= offset-1;y++)
        {
            to_rotate[BackLeft]=NewString[y];
            BackLeft++;
        }
            int frontleft = 0;

        for(unsigned int z = offset; z < to_rotate.length();z++)
        {
            to_rotate[frontleft]=NewString[z];
            frontleft++;
        }

    }
    else if(direction == 2)
    {
        int BackRight = offset;
        int FrontRight = 0;
        for(unsigned int x = to_rotate.length()-offset;x < to_rotate.length();x++)
        {
            to_rotate[FrontRight]=NewString[x];
            FrontRight++;
        }
        for(unsigned int i = 0; i < to_rotate.length()-offset;i++)
        {
            to_rotate[BackRight]=NewString[i];
            BackRight++;
        }
    }
    return to_rotate;
}
