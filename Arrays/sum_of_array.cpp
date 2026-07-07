#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 2, 9, 1, 7};
    int n = 5;

    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    cout << "Sum = " << sum;

    return 0;
}
