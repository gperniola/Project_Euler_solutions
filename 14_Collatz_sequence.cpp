#include <iostream>
#include <cmath>

using namespace std;

/**** prototypes ****/
int calculateChain(long int);

const long int MAX_N = 1000000;

/**** main ****/
int main()
{
    /**** problem description ****/
    cout << "Problem 14: Longest Collatz sequence" << endl;
    cout << "Which starting number, under one million, produces the longest chain?" << endl << endl;

    long int i = 0;
    long int max_chain_n = 0;
    int max_chain_len = 0;

    cout <<"calculating, please wait..." << endl;
    while (i <= MAX_N){
        i++;
        int current_chain_len = calculateChain(i);
        if (current_chain_len > max_chain_len){
            max_chain_len = current_chain_len;
            max_chain_n = i;
        }
    }
    cout << "The number " << max_chain_n << " produces the longest chain of " << max_chain_len << " terms." << endl;
    return 0;
}


/**** functions ****/
int calculateChain(long int n){
    int step = 0;
    while (n != 1){
    if (n % 2 == 0)
        n = n / 2;
    else
        n = 3 * n + 1;
    step++;
    }
    return step;
}
