#include <iostream>

int add(int _x, int _y)
{
    return _x + _y;
}

void change_negative(int *_val) 
{
    if (*_val > 0)
    {
        *_val = -(*_val);
    }
}

int average(int _array[], int _count) 
{
    int sum = 0;

    for (int i = 0; i < _count; ++i) 
    {
        sum += _array[i];
    }

    return sum / _count;
}

int main() 
{
    int add_result = add(2, 3);
    int pos = 1;

    std::cout << "The result of adding 2 and 3 is: " << add_result << std::endl;
    std::cout << "The value of pos is: " << pos << std::endl;
    change_negative(&pos);
    std::cout << "The value of pos after change_negative is: " << pos << std::endl;
    
    int arr[] = {1, 2, 3, 4, 5};
    int avg = average(arr, 5);
    std::cout << "The average of the array is: " << avg << std::endl;

    return 0;
}