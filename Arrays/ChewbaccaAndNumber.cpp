#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    char arr[50];
    cin >> arr;
    int i = 0;
    if (arr[i] == '9')
    {
        i++;
    }
    for (; arr[i] != '\0'; i++)
    {
        int digit = arr[i] - '0'; //convert char into int
        //0=48 asci value
        //4545 4=52,5=53 //52-48=4,53-48=5
        if (digit >= 5)
        {
            digit = 9 - digit;
            arr[i] = digit + '0';
        }
    }
    cout << arr << endl;
}