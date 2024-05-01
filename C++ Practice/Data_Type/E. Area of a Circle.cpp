//E. Area of a Circle
/*
Given a number R calculate the area of a circle using the following formula:

Area = π * R2.

Note: consider π = 3.141592653.

Input
Only one line containing the number R (1  ≤  R  ≤  100).

Output
Print the calculated area, with 9 digits after the decimal point.

Example
input
2.00
output
12.566370612
Note
* Use the data type double for this problem.

** Use setprecision(9) to print 9 digits after decimal point.
*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double R,area;
    cin>>R;
    area= 3.141592653* R*R;

    cout << fixed << setprecision(9)<<area;
    return 0;
}
