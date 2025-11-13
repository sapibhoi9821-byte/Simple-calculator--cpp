#include <iostream>
using namespace std;
int main() {
    int Marks;
cout<<"Enter marks (0-100)"<< Marks;
cin >> Marks;
if(Marks < 0 || Marks > 100) {
    cout << "Invalid input";
    return 0;
}
switch(Marks/10) {
case 10:
      cout << "Perfect";
        break;
case 9:
    cout<<"A+";
    break;
case 8:
    if(Marks>=87) {
        cout<<"A+";
    }
    else if(Marks>=83) {
        cout<<"A";
    }
    else {
        cout<<"A-";}
    break;
case 7:
    if(Marks>=77)
    cout<<"B+";
    else if(Marks>=73) {
        cout<<"B";
    }
     else {
        cout<<"A-";}
    break;
case 6:
    cout<<"C";
    break;
case 5:
    cout<<"D";
    break;
case 4:
    cout<<"E";
    break;
default: 
    cout<<"F";
    break;

}
    return 0;
}