/*
Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".

Input
Only one line containing two numbers A and B (0  ≤  A, B  ≤  100).

Output
Print "Yes" or "No" according to the statement.

Examples
InputCopy
10 9
OutputCopy
Yes
InputCopy
5 5
OutputCopy
Yes
InputCopy
5 7
OutputCopy
No
*/


#include<iostream>
using namespace std;
int main() {
    int x, y;
    cin>>x>>y;

    if(x >= y) {
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
}
