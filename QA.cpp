#include <iostream>
using namespace std;
double Max(int arr[], int size)
{
	int max = 0;
	for (int i = 0; i < 5; i++) 
	{
		if (arr[i] > max) arr[i] = max;
		else max;
	}
	return max;
}
int Min(int arr[], int size)
{
	double min = arr[0];
	for (int i = 0; i < size; i++)
	{
        if (arr[i] < min) min = min + 1;
		else min;
	}
	return min;
}

int countDigit(int n, int count, int res, string s)
{
    count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    res = count;
    return res;

}
bool isEven(int x) {
    cin >> x;
    if (x % 2 == 0)
        return true;
    else {
        cout << "Odd number";
    }
}

int main()
{
    long n = 345289467;
    int count = 0, res = 0;
    string x;
    cout << "Number of digits : " << countDigit(n, count, res, x);
    isEven(8);

    int arr[8] = { 2,8,4,66,23,53,1,9 };
    Min(arr,8);
    Max(arr,8);
    return 0;
}