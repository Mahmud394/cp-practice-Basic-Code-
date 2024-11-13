/*
Problem Statement

You will be given an integer array A of size N. You need to count the number of elements that are divided by 2 and number of elements that are divided by 3. If any number is divided by both 2 and 3, then consider it only for 2.

Input Format

First line will contain N, the size of the array
Second line will contain the array A.
Constraints

1 <= N <= 10^5
0 <= A[i] <= 10^9; here 0 <= i < N
Output Format

Output the number of elements that are divided by 2 first, then print the number of elements that are divided by 3.
Sample Input 0

5
1 4 2 5 3
Sample Output 0

2 1
Sample Input 1

4
6 9 12 15
Sample Output 1

2 2
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    int cont1=0;
    int cont2=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            cont1++;
            continue;

        }
        if(a[i]%3==0)
        {
            cont2++;

        }
        
    }
    printf("%d %d",cont1,cont2);
}
