/* -------------------------------------------------------------------------- */
/*                 Reverse Star Pattern Problem Code: REVSTRPT                */
/* -------------------------------------------------------------------------- */

/**You're given a number N. Print the first N lines of the below-given pattern.

        *
       **
      ***
     ****
    *****

*/

/*
Input:
    First-line will contain the number N.

Output:
    Print the first N lines of the given pattern.

Constraints
    1≤N≤200

Sample Input 1:
    4

Sample Output 1:
       *
      **
     ***    
    ****

Sample Input 2:
    2

Sample Output 2:
     *
    **

EXPLANATION:
    In the first example, we'll print the first 4 lines of the given pattern.
    In the second example, we'll print the first 2 lines of the given pattern
*/

#include <iostream>
using namespace std;

int main()
{
    int N, M = 1;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = N-1; j > i; j--)
            cout << " ";
        for (int k = 0; k < M; k++)
            cout << "*";
        M++;
        cout << endl;
    }
    return 0;
}