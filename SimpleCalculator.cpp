#include<iostream>
using namespace std;

int main() {
    double a, b;//intializing variables 
    cout << "Enter a number";
    cin >> a;//user input for num 1
    a++;//incremented by 1
    cout << "Enter a number";
    cin >> b;//user input for num 2
    b--;//decremented by 1
    string c;
    cout << "What operater(add, sub, multiply, divide, mod)?";
    cin >> c;//user input for operators
    //performs operation according to user input 
    double add = a + b;
    double sub = a - b;
    double multiply = a*b;
    double divide = a/b;
    

    if (c == "add") {
        cout << "Result: "<< add<< endl ;
        //executes when condition is adding
    }
    else if(c == "sub") {
        cout << "Result: "<< sub << endl;
        //executes when condition is subtracting
    }
    else if(c == "multiply") {
        cout << "Result: "<< multiply << endl;
        //executes when condition is multiplying
    }
    else if(c == "divide" && b!=0 ) {
        cout << "Result: "<< divide << endl;
        //executes when condition is dividing
    }
    else if(c == "divide"&& b == 0) {
        cout <<"Error calculating";
        //executes if b value is 0 
    }
    else if(c == "mod") {

        if ((int)b != 0) {
            cout << "mod: " << (int)a % (int)b;
            //executes when condition is module
        }
        else {
            cout << "error handling...";
            //just in case if the b value has 0
        }

    }

    else {
        cout << "invalid operator";
        
    }

    return 0;
}
