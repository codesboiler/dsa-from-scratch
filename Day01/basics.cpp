// # Day 1 – Getting Started 🚀



// Today was all about setting up the foundation and preparing for a consistent DSA journey.



// ## What I did today
// - Set up GitHub and VS Code
// - Initialized my first repository
// - Officially started my DSA journey
// - Revised C++ basics:
//  - Syntax
//  - Input / Output
//  - Variables & Data Types
//  - Loops & Conditional statements
//  - Functions
// - Practiced basic pattern problems



// ## Takeaway
// Focused on building the base before jumping into data structures.



// **Consistency > Motivation**



// -C++ syntax
// #include<iostream>
// using namespace std;

// int main()
// {
    
//     return 0;
// }

// ------------------------------------------------------------------------------------

// -C++ Basic Data Types
// #include <iostream>
// using namespace std;

// int main() {
//     int age = 21;
//     float height = 5.6;
//     double pi = 3.14159;
//     char grade = 'A';
//     bool isStudent = true;

//     cout << age << endl;
//     cout << height << endl;
//     cout << pi << endl;
//     cout << grade << endl;
//     cout << isStudent << endl;

//     return 0;
// }

// ---------------------------------------------------------

// Variables & Data Types
// #include <iostream>
// using namespace std;
// int main() { 
//     int myNum = 5;               // Integer (whole number)
//     float myFloatNum = 5.99;    // Floating point number
//     double myDoubleNum = 9.98;   // Double precision floating point number
//     char myLetter = 'D';        // Character
//     bool myBoolean = true;      // Boolean
//     string myText = "Hello";    // String
//   cout << "Integer: " << myNum << endl;
//   cout << "Float: " << myFloatNum << endl;
//   cout << "Double: " << myDoubleNum << endl;
//   cout << "Character: " << myLetter << endl;
//   cout << "Boolean: " << myBoolean << endl;
//   cout << "String: " << myText << endl;
//   return 0;
// }

// ---------------------------------------------------------

// // Constants in C++
// #include <iostream>
// using namespace std;
// int main() {
//     const int myConstant = 10; // Declare a constant variable
//     cout << "The value of the constant is: " << myConstant << endl;
//     // myConstant = 20; // This will cause an error because constants cannot be changed
//     return 0;
// }

// // ---------------------------------------------------------
// -C++ Input and Output
// #include <iostream>
// using namespace std;
// int main() {
//     string name;
//     cout << "Enter your name: "; // Prompt the user for input
//     cin >> name; // Read user input
//     cout << "Hello, " << name << "!" << endl; // Output the input value
//     return 0;
// }

// ---------------------------------------------------------

// -C++ Comments
// #include <iostream>
// using namespace std;
// int main() {
//     // This is a single-line comment
//     cout << "Hello, World!" << endl; // Print Hello, World! to the console
//     /* This is a
//        multi-line comment */
//     return 0;
// }

// ---------------------------------------------------------
// -C++ Basic Operators
// #include <iostream>
// using namespace std;
// int main() { 
//     int a = 10;
//     int b = 5;
//     cout << "Addition: " << a + b << endl;         // Addition
//     cout << "Subtraction: " << a - b << endl;      // Subtraction

//     cout << "Multiplication: " << a * b << endl;   // Multiplication
//     cout << "Division: " << a / b << endl;         // Division
//     cout << "Modulus: " << a % b << endl;          // Modulus
//     return 0;
// }


// ---------------------------------------------------------

// -C++ Type Conversion
// #include <iostream>
// using namespace std;

// int main() {
//     int intNum = 10;
//     double doubleNum = 5.5;
//     // Implicit conversion
//     double result1 = intNum + doubleNum;
//     cout << "Implicit Conversion Result: " << result1 << endl;
//     // Explicit conversion
//     int result2 = intNum + static_cast<int>(doubleNum);
//     cout << "Explicit Conversion Result: " << result2 << endl;
//     return 0;
// }

// ---------------------------------------------------------

// if-else Statements in C++
// #include <iostream>
// using namespace std;
// int main() {
//     int number;
//     cout << "Enter an integer: ";
//     cin >> number;

//     if (number > 0) {
//         cout << "The number is positive." << endl;
//     } else if (number < 0) {
//         cout << "The number is negative." << endl;
//     } else {
//         cout << "The number is zero." << endl;
//     }
//     return 0;
// }

// ---------------------------------------------------------

// -nested if-else Statements in C++
// #include <iostream>
// using namespace std;
// int main() {
//     int number;
//     cout << "Enter an integer: ";
//     cin >> number;

//     if (number >= 0) {
//         if (number == 0) {
//             cout << "The number is zero." << endl;
//         } else {
//             cout << "The number is positive." << endl;
//        }
//     } else {
//         cout << "The number is negative." << endl;
//     }
//     return 0;
// }

// ---------------------------------------------------------

// -C++ Switch Statement
// #include <iostream>
// using namespace std;
// int main() {
//     int day;
//     cout << "Enter a number (1-7) to get the corresponding day of the week: ";
//     cin >> day;
//     switch (day) {
//         case 1:
//             cout << "Monday" << endl;
//             break;   
//         case 2:
//             cout << "Tuesday" << endl;
//             break;
//         case 3:
//             cout << "Wednesday" << endl;
//             break;
//         case 4:
//             cout << "Thursday" << endl;
//             break;
//         case 5:
//             cout << "Friday" << endl;
//             break;
//         case 6:
//             cout << "Saturday" << endl;
//             break;
//         case 7:
//             cout << "Sunday" << endl;
//             break;
//         default:
//             cout << "Invalid input! Please enter a number between 1 and 7." << endl;
//     }
//     return 0;
// }

// ---------------------------------------------------------

// -C++ Ternary Operator
// #include<iostream>
// using namespace std;

// int main()
// {
//      int number;
//     cout << "Enter an integer: ";
//     cin >> number;
//     string result = (number % 2 == 0) ? "Even" : "Odd";  
//     cout << "The number is " << result << "." << endl;           
//     return 0;

// }

// ---------------------------------------------------------

// -C++ Loops (for, while, do-while)
// #include <iostream>
// using namespace std;
// int main() {
//     // For loop
//     cout << "For Loop:" << endl;
//     for (int i = 1; i <= 5; i++) {
//         cout << i << " ";
//     }
//     cout << endl;

//     // While loop
//     cout << "While Loop:" << endl;
//     int j = 1;
//     while (j <= 5) {
//         cout << j << " ";
//         j++;
//     }
//     cout << endl;

//     // Do-while loop
//     cout << "Do-While Loop:" << endl;
//     int k = 1;
//     do {
//         cout << k << " ";
//         k++;
//     } while (k <= 5);
//     cout << endl;

//     return 0;
// }

// ---------------------------------------------------------

// -C++ Break and Continue Statements
// #include <iostream>
// using namespace std;
// int main() {
//     // Break statement
//     cout << "Break Statement:" << endl;
//     for (int i = 1; i <= 10; i++) {
//         if (i == 6) {
//             break; // Exit the loop when i is 6
//         }
//         cout << i << " ";
//     }
//     cout << endl;

//     // Continue statement
//     cout << "Continue Statement:" << endl;
//     for (int j = 1; j <= 10; j++) {
//         if (j % 2 == 0) {
//             continue; // Skip even numbers
//         }
//         cout << j << " ";
//     }
//     cout << endl;
//     return 0;
// }

// ---------------------------------------------------------

// // -C++ Nested Loops
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

// ---------------------------------------------------------


