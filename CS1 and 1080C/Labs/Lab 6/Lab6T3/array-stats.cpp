/*
Name: <fill me in>
Date: <fill me in>
Assignment: <fill me in>
Description: <fill me in>
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;


// Helper function: Provider for you to display array
void display_array(int array[], unsigned length){
  cout << setw(6) << "Index" << setw(8) << "Value" << endl;
  for(unsigned i = 0; i < length; i++){
     cout << setw(6) << i << setw(8) << array[i] << endl;
  }
}

// Just return the Minimum value int a and int b
int Min(int a, int b){
    if(a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// Just return the Maximum value int a and int b
int Max(int a, int b){
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}


// init function sets all locations of an array to the "value"
// specified
void init(int array[], unsigned length, int value){
    for(unsigned int k = 0;k < length;k++)
    {
        array[k] = value;
    }
}

// Return the sum of array elements. An empty array has a zero sum
int arraySum(int array[], unsigned length){
    int sum = 0;
    if(length == 0)
    {
        return 0.0;
    }
    else if(length > 0)
    {
        for(unsigned int k = 0;k < length;k++)
        {
            sum = sum + array[k];
        }
    }
    return sum;
}

// Return the mean of all array elements. An empty array has a zero mean
// Use arraySum above to calculate the Sum
double arrayMean(int array[], unsigned length){
    double Total = 0, sum = 0;
    if(length == 0)
    {
        return 0.0;
    }
    else if(length > 0)
    {
        for(unsigned int k = 0;k < length;k++)
        {
            sum = sum + array[k];
        }
        Total = sum/length;
    }
    return Total;
}

// Return the minimum value of all array elements.
// An empty array has a zero minimum value
// You must use Min() above in this function
int arrayMin(int array[], unsigned length){
    if(length == 0)
    {
        return 0.0;
    }
    else if(length > 0)
    {
        int changed = 1, temp = 1;
        while(changed == 1)
        {
            changed = 0;
            for(unsigned int k = 1;k < length;k++)
            {
                if(array[k] < array[k-1])
                {
                    temp = array[k-1];
                    array[k-1] = array[k];
                    array[k] = temp;
                    changed = 1;
                }
            }
        }

    }
    return array[0];
}

// Return the maximum value of all array elements.
// An empty array has a zero minimum value
// You must use Max() above in this function
int arrayMax(int array[], unsigned length){
    if(length == 0)
    {
        return 0.0;
    }
    else if(length > 0)
    {
        int changed = 1, temp = 1;
        while(changed == 1)
        {
            changed = 0;
            for(unsigned int k = 1;k < length;k++)
            {
                if(array[k] > array[k-1])
                {
                    temp = array[k-1];
                    array[k-1] = array[k];
                    array[k] = temp;
                    changed = 1;
                }
            }
        }

    }
    return array[0];
}

// Return the standard Deviation of all array elements. An empty array has
// a zero standard deviation value
// You should use the arrayMean() function above
double arrayStdDev(int array[], unsigned length){
    double c = 0, sum = 0, STD = 0, mean = 0;
    if(length == 0)
    {
        return 0.0;
    }
    else if(length > 0)
    {
        mean = arrayMean(array, length);
        for(unsigned int k = 0;k < length;k++)
        {
            c = array[k] - mean;
            c = pow(c,2);
            sum = sum + c;
        }
        STD = sqrt(sum/length);
    }
    return STD;
}

// Return the location in the array of the "search_value"
// An empty array or a failed search should return a -1
// Please start your search at an index of "stating_position"

// Please do not remove the default parameter (ie = 0) from this function
// defination
int arrayFind(int array[], unsigned length,
    int search_value, unsigned starting_position = 0){
    int c = -1;
    if(length == 0)
    {
        return -1;
    }
    else if(length > 0)
    {
        for(unsigned int k = starting_position; k < length;k++)
        {
            if(array[k] == search_value)
            {
                c = k;
                k = length;
            }
        }
        if (c == -1)
        {
            return -1;
        }
    }
    return c;
}

// Return the number of times the "search_value"  was found in the array.
// Return 0 if the length is 0 or less.
int count(int array[], unsigned length, int search_value){
    int counter = 0;
    if(length == 0)
    {
        return 0;
    }
    else if( length > 0)
    {
        for(unsigned int k = 0;k < length;k++)
        {
            if(array[k] == search_value)
            {
                counter = counter + 1;
            }
        }
    }
    return counter;
}

// Returns the array max - array min.
// Return 0 if the length is 0 or less
// Should use arrayMax and arrayMin above
int range(int array[], unsigned length){
    int Maximum = 0, Minimum = 0, Range = 0;
    if(length <= 0)
    {
        return 0;
    }
    else if(length > 0)
    {
        Maximum = arrayMax(array, length);
        Minimum = arrayMin(array, length);
        Range = Maximum - Minimum;
    }
    return Range;
}

// Return a boolean:
// true if the array contains the same integer at least twice
// false if all values in the array are unique.
bool containsDups(int array[], unsigned length){
    if(length == 0)
    {
        return 0;
    }
    else if(length > 0)
    {
        for(unsigned int k = 0;k < length;k++)
        {
            for(unsigned int c = 1;c < length;c++)
            {
                if(array[c] == array[k])
                    return 1;
                else
                    return 0;
            }
        }
    }
    return 0;
}

// Returns a boolean, true if the array is sorted from smallest to largest,
// false if it is not sorted.  Adjacent duplicate elements are allowed.
// A list of 1 or fewer elements is sorted
int isSorted(int array[], unsigned length){
    unsigned int c = 0;
    if(length <= 1)
    {
        return 1;
    }
    else if(length > 1)
    {
        for(unsigned int k = 1;k < length;k++)
        {
            if(array[k] >= array[k-1])
            {
                c++;
            }
        }
        if(c == (length - 1))
            return 1;
        else
            return 0;
   }
   return 0;
}

