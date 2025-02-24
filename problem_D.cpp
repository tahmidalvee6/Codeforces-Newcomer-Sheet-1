/*
Given four numbers A, B, C and D. Print the result of the following equation :

 X = (A * B) - (C * D).

Input
Only one line containing 4 separated numbers A, B, C and D ( - 105  ≤  A, B, C, D  ≤  105).

Output
Print "Difference  =  " without quotes followed by the equation result.

Examples
InputCopy
1 2 3 4
OutputCopy
Difference = -10
InputCopy
2 3 4 5
OutputCopy
Difference = -14
InputCopy
4 5 2 3
OutputCopy
Difference = 14
*/


#include<iostream>
using namespace std;
int main() {
    long long int a,b,c,d,x;
    cin>>a>>b>>c>>d;

    x = (a * b) - (c * d);

    cout<<"Difference = "<<x<<endl;
}
