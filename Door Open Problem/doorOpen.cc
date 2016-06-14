#include<iostream>
#include<math.h>
using namespace std;

    /*
        The number of divisors of a number i is odd if it is  a perfect square. The door is open if it is toggled odd number of times.
        thus the solution is clear here. It is independent of the total number of doors present.
    */

int main(){
    int i;
    cin>>i;
    int sqrt_i = floor(sqrt(i));
    string s = sqrt_i*sqrt_i == i?"Open":"Closed";
    cout<<s;
    return 0;
}
