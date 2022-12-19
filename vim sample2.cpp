#include<iostream>
using namespace std;
int main()
{
        double l, b;
    int area;

    // convert double data type to int type
    cout << " The length of the rectangle is: " << endl;
    cin >> l;
    cout << " The breadth of the rectangle is: " << endl;
    cin >> b;
    area = (int) l * b; // cast into int type
    cout << " The area of the rectangle is: " << area << endl;

    float res;
    // convert double data type to float type
    cout << " \n \n The length of the rectangle is: " << l << endl;
    cout << " The breadth of the rectangle is: " << b << endl;
    res = (float) l * b; // cast into float type
    cout << " The area of the rectangle is: " << res;
    return 0;
}
output
The length of the rectangle is: 
15.23
 The breadth of the rectangle is: 
34.5
 The area of the rectangle is: 517
 
 
 The length of the rectangle is: 15.23
 The breadth of the rectangle is: 34.5
 The area of the rectangle is: 525.435
