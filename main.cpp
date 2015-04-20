#include <cstdlib>
#include <iostream>

using namespace std;

//Private: Expotentation of a given base and expotent
//
//base - number to be expotent
//expotent - number that expotents a given base
//result - result of expotentation 
//
//Examples
//
//  expotentation(2,2) 
//  result = 4
//  
//  expotentation(3,3) 
//  result = 27
//
//Returns result of expotentation of given base and expotent
int  expotentation (int base, int expotent)
{
    int result;

    result = base*base;

    for (int i=0; i<expotent-2; i++)
    {
     result*=base;
    }
    return result;
}

int sum_of_digit(int exp_result)
{
    int sum = 0;
    int number = 0;

    for (int i = 0; exp_result > 0; i++)
    {
        int number = exp_result % 10;
        sum+=number;
        exp_result/=10;
    }
    return sum;
}

int main()
{
    int base, expotent;
    int exp_result;
    
    cout.precision(31);

    cout << "Podaj podstawe: ";
    cin >> base;
    cout << "Podaj wykladnik: ";
    cin >> expotent;
    exp_result = expotentation(base,expotent);
    cout << exp_result <<endl;
    cout << "Suma cyfr powyzszej liczby = " << sum_of_digit(exp_result) << endl;
    system("PAUSE");	
}
