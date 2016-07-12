#include <iostream>
#include <cmath>

using namespace std;

/**** prototypes ****/
int getDivisors (long int);

/**** constants ****/
const int MIN_DIVISORS = 500;

/**** main ****/
int main()
{
    /**** problem description ****/
    cout << "Problem 12: Highly divisible triangular number" << endl;
    cout << "What is the value of the first triangle number to have over five hundred divisors?" << endl << endl;

    long int sum_up_to = 0;
    long int sum;
    int divisors = 0;

    cout <<"calculating, please wait..." << endl;
    while (divisors <= MIN_DIVISORS){
        sum_up_to++;
        sum = 0;
        for (long int i = 1; i <= sum_up_to; i++)
            sum = sum + i;
        divisors = getDivisors(sum);
    }
    cout << "The " << sum_up_to << "th number, which is " << sum << " has " << divisors << " divisors" << endl;
    return 0;
}


/**** functions ****/
int getDivisors (long int n){

    int n_of_divisors = 0;
    for (int i = 1; i < sqrt(n); i++){
        if (n % i == 0){
            n_of_divisors++;
            if(n / i != i)
                n_of_divisors++;
        }
    }
    return n_of_divisors;
}













